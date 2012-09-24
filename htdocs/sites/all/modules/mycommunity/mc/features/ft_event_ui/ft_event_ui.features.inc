<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ft_event_ui_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
  elseif ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_flag_default_flags().
 */
function ft_event_ui_flag_default_flags() {
  $flags = array();
  // Exported flag: "Events Bookmarks (Staring)".
  $flags['events_bookmarks'] = array(
    'content_type' => 'node',
    'title' => 'Events Bookmarks (Staring)',
    'global' => '0',
    'types' => array(
      '0' => 'event',
    ),
    'flag_short' => 'Save to my events',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove from my events',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        '0' => 2,
      ),
      'unflag' => array(
        '0' => 2,
      ),
    ),
    'weight' => 0,
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'ft_event_ui',
    'locked' => array(
      '0' => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ft_event_ui_imagecache_default_presets() {
  $items = array(
    'mt_home_event' => array(
      'presetname' => 'mt_home_event',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '83',
            'height' => '83',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ft_event_ui_views_api() {
  return array(
    'api' => '2',
  );
}
