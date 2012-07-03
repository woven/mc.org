<?php

/**
 * @file
 * Cache Backport cache.inc replacement file.
 * 
 * This file is the exact copy of Drupal 7 core cache.inc file, we just did
 * two minor modifications:
 *   - Added a lazzy cache backend loading at first cache_get() hit because we
 *     could not interract with bootstrap. This will ensure we keep the exact
 *     same settings declarative API as Drupal 7.
 *     Hopefully, cache_get() will always be called first.
 *   - Default database backend has been moved into database.inc file, because
 *     it's being too much changed.
 */

/**
 * Drupal 7 constant backport.
 */
if (!defined('REQUEST_TIME')) {
  define('REQUEST_TIME', $_SERVER['REQUEST_TIME']);
}

/**
 * Drupal 7 constant backport.
 */
if (!defined('DRUPAL_ROOT')) {
  define('DRUPAL_ROOT', getcwd());
}

/**
 * Init cache backends.
 */
function _cache_init() {
  static $done = FALSE;
  if (!$done) {
    global $conf;
    require_once dirname(__FILE__) . '/database.inc';
    if (isset($conf['cache_backends'])) {
      foreach ($conf['cache_backends'] as $file) {
        require_once $file;
      }
    }
    $done = TRUE;
  }
}

/**
 * Get the cache object for a cache bin.
 *
 * By default, this returns an instance of the DrupalDatabaseCache class.
 * Classes implementing DrupalCacheInterface can register themselves both as a
 * default implementation and for specific bins.
 *
 * @see DrupalCacheInterface
 *
 * @param $bin
 *   The cache bin for which the cache object should be returned.
 * @return DrupalCacheInterface
 *   The cache object associated with the specified bin.
 */
function _cache_get_object($bin) {
  // We do not use drupal_static() here because we do not want to change the
  // storage of a cache bin mid-request.
  static $cache_objects;
  if (!isset($cache_objects[$bin])) {
    $class = variable_get('cache_class_' . $bin, NULL);
    if (!isset($class) || !class_exists($class)) {
      $class = variable_get('cache_default_class', 'DrupalDatabaseCache');
    }
    $instance = new $class($bin);
    // Added environment status runtime check.
    if ($instance instanceof DrupalEnvRelatedPlugin && !$instance->checkEnv()) {
      $instance = new DrupalDatabaseCache($bin);
    }
    $cache_objects[$bin] = $instance;
  }
  return $cache_objects[$bin];
}

/**
 * Return data from the persistent cache
 *
 * Data may be stored as either plain text or as serialized data. cache_get
 * will automatically return unserialized objects and arrays.
 *
 * @param $cid
 *   The cache ID of the data to retrieve.
 * @param $bin
 *   The cache bin to store the data in. Valid core values are 'cache_block',
 *   'cache_bootstrap', 'cache_field', 'cache_filter', 'cache_form',
 *   'cache_menu', 'cache_page', 'cache_path', 'cache_update' or 'cache' for
 *   the default cache.
 *
 * @return
 *   The cache or FALSE on failure.
 */
function cache_get($cid, $bin = 'cache') {
  $cached = _cache_get_object($bin)->get($cid);
  // See cache_set().
  if (FALSE !== $cached) {
    $data = $cached->data;
    if ($data instanceof CacheItemWrapper) {
      $cached->data = $data->data;
      $cached->headers = $data->headers;
    }
  }
  return $cached;
}

/**
 * Return data from the persistent cache when given an array of cache IDs.
 *
 * @param $cids
 *   An array of cache IDs for the data to retrieve. This is passed by
 *   reference, and will have the IDs successfully returned from cache removed.
 * @param $bin
 *   The cache bin where the data is stored.
 * @return
 *   An array of the items successfully returned from cache indexed by cid.
 */
function cache_get_multiple(array &$cids, $bin = 'cache') {
  return _cache_get_object($bin)->getMultiple($cids);
}

/**
 * Store data in the persistent cache.
 *
 * The persistent cache is split up into several cache bins. In the default
 * cache implementation, each cache bin corresponds to a database table by the
 * same name. Other implementations might want to store several bins in data
 * structures that get flushed together. While it is not a problem for most
 * cache bins if the entries in them are flushed before their expire time, some
 * might break functionality or are extremely expensive to recalculate. These
 * will be marked with a (*). The other bins expired automatically by core.
 * Contributed modules can add additional bins and get them expired
 * automatically by implementing hook_flush_caches().
 *
 *  - cache: Generic cache storage bin (used for variables, theme registry,
 *  locale date, list of simpletest tests etc).
 *
 *  - cache_block: Stores the content of various blocks.
 *
 *  - cache field: Stores the field data belonging to a given object.
 *
 *  - cache_filter: Stores filtered pieces of content.
 *
 *  - cache_form(*): Stores multistep forms. Flushing this bin means that some
 *  forms displayed to users lose their state and the data already submitted
 *  to them.
 *
 *  - cache_menu: Stores the structure of visible navigation menus per page.
 *
 *  - cache_page: Stores generated pages for anonymous users. It is flushed
 *  very often, whenever a page changes, at least for every ode and comment
 *  submission. This is the only bin affected by the page cache setting on
 *  the administrator panel.
 *
 *  - cache path: Stores the system paths that have an alias.
 *
 *  - cache update(*): Stores available releases. The update server (for
 *  example, drupal.org) needs to produce the relevant XML for every project
 *  installed on the current site. As this is different for (almost) every
 *  site, it's very expensive to recalculate for the update server.
 *
 * The reasons for having several bins are as follows:
 *
 * - smaller bins mean smaller database tables and allow for faster selects and
 *   inserts
 * - we try to put fast changing cache items and rather static ones into
 *   different bins. The effect is that only the fast changing bins will need a
 *   lot of writes to disk. The more static bins will also be better cacheable
 *   with MySQL's query cache.
 *
 * @param $cid
 *   The cache ID of the data to store.
 * @param $data
 *   The data to store in the cache. Complex data types will be automatically
 *   serialized before insertion.
 *   Strings will be stored as plain text and not serialized.
 * @param $bin
 *   The cache bin to store the data in. Valid core values are 'cache_block',
 *   'cache_bootstrap', 'cache_field', 'cache_filter', 'cache_form',
 *   'cache_menu', 'cache_page', 'cache_update' or 'cache' for the default
 *   cache.
 * @param $expire
 *   One of the following values:
 *   - CACHE_PERMANENT: Indicates that the item should never be removed unless
 *     explicitly told to using cache_clear_all() with a cache ID.
 *   - CACHE_TEMPORARY: Indicates that the item should be removed at the next
 *     general cache wipe.
 *   - A Unix timestamp: Indicates that the item should be kept at least until
 *     the given time, after which it behaves like CACHE_TEMPORARY.
 */
function cache_set($cid, $data, $bin = 'cache', $expire = CACHE_PERMANENT, $headers = NULL) {
  if (isset($headers)) {
    // Work-arround different cache backend signature from D6 to D7.
    $data = new CacheItemWrapper($data, $headers);
  }
  return _cache_get_object($bin)->set($cid, $data, $expire);
}

/**
 * Expire data from the cache.
 *
 * If called without arguments, expirable entries will be cleared from the
 * cache_page and cache_block bins.
 *
 * @param $cid
 *   If set, the cache ID to delete. Otherwise, all cache entries that can
 *   expire are deleted.
 *
 * @param $bin
 *   If set, the bin $bin to delete from. Mandatory
 *   argument if $cid is set.
 *
 * @param $wildcard
 *   If $wildcard is TRUE, cache IDs starting with $cid are deleted in
 *   addition to the exact cache ID specified by $cid.  If $wildcard is
 *   TRUE and $cid is '*' then the entire bin $bin is emptied.
 */
function cache_clear_all($cid = NULL, $bin = NULL, $wildcard = FALSE) {
  if (!isset($cid) && !isset($bin)) {
    // Clear the block cache first, so stale data will
    // not end up in the page cache.
    if (module_exists('block')) {
      cache_clear_all(NULL, 'cache_block');
    }
    cache_clear_all(NULL, 'cache_page');
    return;
  }
  return _cache_get_object($bin)->clear($cid, $wildcard);
}

/**
 * Check if a cache bin is empty.
 *
 * A cache bin is considered empty if it does not contain any valid data for any
 * cache ID.
 *
 * @param $bin
 *   The cache bin to check.
 * @return
 *   TRUE if the cache bin specified is empty.
 */
function cache_is_empty($bin) {
  return _cache_get_object($bin)->isEmpty();
}

/**
 * Cache item wrapper, used only if the headers array is present.
 */
class CacheItemWrapper {
  /**
   * @var mixed
   */
  public $data;

  /**
   * @var string|array
   */
  public $headers;

  public function __construct($data, $headers = null) {
    $this->data = $data;
    $this->headers = $headers;
  }
}

/**
 * Interface for cache implementations.
 *
 * All cache implementations have to implement this interface.
 * DrupalDatabaseCache provides the default implementation, which can be
 * consulted as an example.
 *
 * To make Drupal use your implementation for a certain cache bin, you have to
 * set a variable with the name of the cache bin as its key and the name of
 * your class as its value. For example, if your implementation of
 * DrupalCacheInterface was called MyCustomCache, the following line would make
 * Drupal use it for the 'cache_page' bin:
 * @code
 *  variable_set('cache_class_cache_page', 'MyCustomCache');
 * @endcode
 *
 * Additionally, you can register your cache implementation to be used by
 * default for all cache bins by setting the variable 'cache_default_class' to
 * the name of your implementation of the DrupalCacheInterface, e.g.
 * @code
 *  variable_set('cache_default_class', 'MyCustomCache');
 * @endcode
 *
 * To implement a completely custom cache bin, use the same variable format:
 * @code
 *  variable_set('cache_class_custom_bin', 'MyCustomCache');
 * @endcode
 * To access your custom cache bin, specify the name of the bin when storing
 * or retrieving cached data:
 * @code
 *  cache_set($cid, $data, 'custom_bin', $expire);
 *  cache_get($cid, 'custom_bin');
 * @endcode
 *
 * @see _cache_get_object()
 * @see DrupalDatabaseCache
 */
interface DrupalCacheInterface {
  /**
   * Constructor.
   *
   * @param $bin
   *   The cache bin for which the object is created.
   */
  function __construct($bin);

  /**
   * Return data from the persistent cache. Data may be stored as either plain
   * text or as serialized data. cache_get will automatically return
   * unserialized objects and arrays.
   *
   * @param $cid
   *   The cache ID of the data to retrieve.
   * @return
   *   The cache or FALSE on failure.
   */
  function get($cid);

  /**
   * Return data from the persistent cache when given an array of cache IDs.
   *
   * @param $cids
   *   An array of cache IDs for the data to retrieve. This is passed by
   *   reference, and will have the IDs successfully returned from cache
   *   removed.
   * @return
   *   An array of the items successfully returned from cache indexed by cid.
   */
   function getMultiple(&$cids);

  /**
   * Store data in the persistent cache.
   *
   * @param $cid
   *   The cache ID of the data to store.
   * @param $data
   *   The data to store in the cache. Complex data types will be automatically
   *   serialized before insertion.
   *   Strings will be stored as plain text and not serialized.
   * @param $expire
   *   One of the following values:
   *   - CACHE_PERMANENT: Indicates that the item should never be removed unless
   *     explicitly told to using cache_clear_all() with a cache ID.
   *   - CACHE_TEMPORARY: Indicates that the item should be removed at the next
   *     general cache wipe.
   *   - A Unix timestamp: Indicates that the item should be kept at least until
   *     the given time, after which it behaves like CACHE_TEMPORARY.
   */
  function set($cid, $data, $expire = CACHE_PERMANENT);

  /**
   * Expire data from the cache. If called without arguments, expirable
   * entries will be cleared from the cache_page and cache_block bins.
   *
   * @param $cid
   *   If set, the cache ID to delete. Otherwise, all cache entries that can
   *   expire are deleted.
   * @param $wildcard
   *   If set to TRUE, the $cid is treated as a substring
   *   to match rather than a complete ID. The match is a right hand
   *   match. If '*' is given as $cid, the bin $bin will be emptied.
   */
  function clear($cid = NULL, $wildcard = FALSE);

  /**
   * Check if a cache bin is empty.
   *
   * A cache bin is considered empty if it does not contain any valid data for
   * any cache ID.
   *
   * @return
   *   TRUE if the cache bin specified is empty.
   */
  function isEmpty();
}

interface DrupalEnvRelatedPlugin {
  /**
   * Check if environment is ready to run this component.
   * 
   * For cache backends, this method implementation should probably implement a
   * static shared cache among all instances so that costy environment checks
   * wouldn't be done more than once.
   */
  public function checkEnv();
}

/**
 * Null object implementation.
 */
class DrupalNullCache implements DrupalCacheInterface {

  function __construct($bin) {}

  function get($cid) {
    return FALSE;
  }

  function getMultiple(&$cids) {
   return array();
  }

  function set($cid, $data, $expire = CACHE_PERMANENT) {}

  function clear($cid = NULL, $wildcard = FALSE) {}

  function isEmpty() {
    return TRUE;
  }
}

_cache_init();
