<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ft_admin_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_themekey_features_rule_chain_import().
 */
function ft_admin_themekey_features_rule_chain_import() {
if (!defined('THEMEKEY_PAGECACHE_UNSUPPORTED')) {
    define('THEMEKEY_PAGECACHE_UNSUPPORTED', 0);
    define('THEMEKEY_PAGECACHE_SUPPORTED', 1);
    define('THEMEKEY_PAGECACHE_TIMEBASED', 2);
  }
$rules = array(
  '0' => array(
    'rule' => array(
      'property' => 'user:role',
      'operator' => '=',
      'value' => 'administrator',
      'theme' => 'ThemeKeyAdminTheme',
      'enabled' => '1',
      'wildcards' => array(),
    ),
    'string' => '"user:role = administrator >>> ThemeKeyAdminTheme"',
    'childs' => array(
      '0' => array(
        'rule' => array(
          'property' => 'drupal:path',
          'operator' => '=',
          'value' => 'node/add/%',
          'theme' => 'ThemeKeyAdminTheme',
          'enabled' => '1',
          'wildcards' => array(),
        ),
        'string' => '"drupal:path = node/add/% >>> ThemeKeyAdminTheme"',
        'childs' => array(),
      ),
      '1' => array(
        'rule' => array(
          'property' => 'drupal:path',
          'operator' => '=',
          'value' => 'node/%/edit',
          'theme' => 'ThemeKeyAdminTheme',
          'enabled' => '1',
          'wildcards' => array(),
        ),
        'string' => '"drupal:path = node/%/edit >>> ThemeKeyAdminTheme"',
        'childs' => array(),
      ),
    ),
  ),
  '1' => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'npage',
      'theme' => 'ThemeKeyAdminTheme',
      'enabled' => '1',
      'wildcards' => array(),
    ),
    'string' => '"node:type = npage >>> ThemeKeyAdminTheme"',
    'childs' => array(
      '0' => array(
        'rule' => array(
          'property' => 'drupal:path',
          'operator' => '=',
          'value' => 'node/%/edit',
          'theme' => 'ThemeKeyAdminTheme',
          'enabled' => '1',
          'wildcards' => array(),
        ),
        'string' => '"drupal:path = node/%/edit >>> ThemeKeyAdminTheme"',
        'childs' => array(),
      ),
      '1' => array(
        'rule' => array(
          'property' => 'drupal:path',
          'operator' => '=',
          'value' => 'node/add/%',
          'theme' => 'ThemeKeyAdminTheme',
          'enabled' => '1',
          'wildcards' => array(),
        ),
        'string' => '"drupal:path = node/add/% >>> ThemeKeyAdminTheme"',
        'childs' => array(),
      ),
    ),
  ),
);

return $rules;
}
