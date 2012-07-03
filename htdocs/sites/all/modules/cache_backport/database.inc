<?php

/**
 * Default cache implementation.
 * 
 * Backported from D7, only database handling has been modified.
 *
 * This is Drupal's default cache implementation. It uses the database to store
 * cached data. Each cache bin corresponds to a database table by the same name.
 * 
 * Added the DrupalEnvRelatedPlugin implementation for consistency reasons.
 */
class DrupalDatabaseCache implements DrupalCacheInterface, DrupalEnvRelatedPlugin {
  protected $bin;

  function __construct($bin) {
    $this->bin = $bin;
  }

  function get($cid) {
    $cids = array($cid);
    $cache = $this->getMultiple($cids);
    return reset($cache);
  }

  function getMultiple(&$cids) {
    try {
      // Garbage collection necessary when enforcing a minimum cache lifetime.
      $this->garbageCollection($this->bin);
      $result = db_query("SELECT cid, data, created, expire, serialized FROM {" . $this->bin . "} c WHERE c.cid IN (" . db_placeholders($cids, 'varchar') . ")", $cids);
      $cache = array();
      while ($item = db_fetch_object($result)) {
        $item = $this->prepareItem($item);
        if ($item) {
          $item->data = $item->data;
          $cache[$item->cid] = $item;
        }
      }
      $cids = array_diff($cids, array_keys($cache));
      return $cache;
    }
    catch (Exception $e) {
      // If the database is never going to be available, cache requests should
      // return FALSE in order to allow exception handling to occur.
      return array();
    }
  }

  /**
   * Garbage collection for get() and getMultiple().
   *
   * @param $bin
   *   The bin being requested.
   */
  protected function garbageCollection() {
    global $user;

    // Garbage collection necessary when enforcing a minimum cache lifetime.
    $cache_flush = variable_get('cache_flush_' . $this->bin, 0);
    if ($cache_flush && ($cache_flush + variable_get('cache_lifetime', 0) <= $_SERVER['REQUEST_TIME'])) {
      // Reset the variable immediately to prevent a meltdown in heavy load situations.
      variable_set('cache_flush_' . $this->bin, 0);
      // Time to flush old cache data
      db_query("DELETE FROM {" . $this->bin . "} WHERE expire <> %d AND expire <= %d", array(CACHE_PERMANENT, $cache_flush));
    }
  }

  /**
   * Prepare a cached item.
   *
   * Checks that items are either permanent or did not expire, and unserializes
   * data as appropriate.
   *
   * @param $cache
   *   An item loaded from cache_get() or cache_get_multiple().
   * @return
   *   The item with data unserialized as appropriate or FALSE if there is no
   *   valid item to load.
   */
  protected function prepareItem($cache) {
    global $user;

    if (!isset($cache->data)) {
      return FALSE;
    }
    // If enforcing a minimum cache lifetime, validate that the data is
    // currently valid for this user before we return it by making sure the cache
    // entry was created before the timestamp in the current session's cache
    // timer. The cache variable is loaded into the $user object by _drupal_session_read()
    // in session.inc. If the data is permanent or we're not enforcing a minimum
    // cache lifetime always return the cached data.
    if ($cache->expire != CACHE_PERMANENT && variable_get('cache_lifetime', 0) && $user->cache > $cache->created) {
      // This cache data is too old and thus not valid for us, ignore it.
      return FALSE;
    }

    if ($cache->serialized) {
      $cache->data = unserialize($cache->data);
    }

    return $cache;
  }

  function set($cid, $data, $expire = CACHE_PERMANENT) {
    $fields = array(
      'serialized' => "%d",
      'created' => "%d",
      'expire' => "%d",
      'data' => "'%s'",
    );
    $args = array(1, $_SERVER['REQUEST_TIME'], $expire, serialize($data));

    try {
      $exists = db_result(db_query("SELECT 1 FROM {" . $this->bin . "} WHERE cid = '%s'", $cid));
      if ($exists) {
        $sql = "UPDATE {" . $this->bin . "} SET ";
        foreach ($fields as $name => $placeholder) {
          $sets[] = " " . $name . " = " . $placeholder;
        }
        $args[] = $cid;
        db_query($sql . implode(', ', $sets) . " WHERE cid = '%s'", $args);
      }
      else {
        $fields['cid'] = "'%s'";
        $args[] = $cid;
        db_query("INSERT INTO {" . $this->bin . "} (" . implode(', ', array_keys($fields)) . ") VALUES (" . implode(', ', $fields) . ")", $args);
      }
    }
    catch (Exception $e) {
      // The database may not be available, so we'll ignore cache_set requests.
    }
  }

  function clear($cid = NULL, $wildcard = FALSE) {
    global $user;

    if (empty($cid)) {
      if (variable_get('cache_lifetime', 0)) {
        // We store the time in the current user's $user->cache variable which
        // will be saved into the sessions bin by _drupal_session_write(). We then
        // simulate that the cache was flushed for this user by not returning
        // cached data that was cached before the timestamp.
        $user->cache = $_SERVER['REQUEST_TIME'];

        $cache_flush = variable_get('cache_flush_' . $this->bin, 0);
        if ($cache_flush == 0) {
          // This is the first request to clear the cache, start a timer.
          variable_set('cache_flush_' . $this->bin, $_SERVER['REQUEST_TIME']);
        }
        elseif ($_SERVER['REQUEST_TIME'] > ($cache_flush + variable_get('cache_lifetime', 0))) {
          // Clear the cache for everyone, cache_lifetime seconds have
          // passed since the first request to clear the cache.
          db_query("DELETE FROM {" . $this->bin . "} WHERE expire <> %d AND expire < %d", array(CACHE_PERMANENT, $_SERVER['REQUEST_TIME']));
          variable_set('cache_flush_' . $this->bin, 0);
        }
      }
      else {
        // No minimum cache lifetime, flush all temporary cache entries now.
        db_query("DELETE FROM {" . $this->bin . "} WHERE expire <> %d AND expire < %d", array(CACHE_PERMANENT, $_SERVER['REQUEST_TIME']));
      }
    }
    else {
      if ($wildcard) {
        if ($cid == '*') {
          db_query("DELETE FROM {" . $this->bin . "}");
        }
        else {
          db_query("DELETE FROM {" . $this->bin . "} WHERE cid LIKE '%%%s%%'", $cid);
        }
      }
      elseif (is_array($cid)) {
        db_query("DELETE FROM {" . $this->bin . "} WHERE cid IN (" . db_placeholders($cid, 'varchar') . ")", $cid);
      }
      else {
        db_query("DELETE FROM {" . $this->bin . "} WHERE cid = '%s'", $cid);
      }
    }
  }

  function isEmpty() {
    $this->garbageCollection();
    return (bool) db_result(db_query("SELECT 1 FROM {" . $this->bin . "}"));
  }

  /**
   * Database backend relies on the Database, as much as Drupal core does.
   * As it is the default backend for graceful downgrade, it's not allowed
   * to crash.
   * 
   * @see DrupalEnvRelatedPlugin::checkEnv()
   */
  public function checkEnv() {
    return TRUE;
  }
}