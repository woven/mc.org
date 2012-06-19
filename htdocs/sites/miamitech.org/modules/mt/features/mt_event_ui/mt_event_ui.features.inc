<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mt_event_ui_ctools_plugin_api() {
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
 * Implementation of hook_imagecache_default_presets().
 */
function mt_event_ui_imagecache_default_presets() {
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
function mt_event_ui_views_api() {
  return array(
    'api' => '2',
  );
}
