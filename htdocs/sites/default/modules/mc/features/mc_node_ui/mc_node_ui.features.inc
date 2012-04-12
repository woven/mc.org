<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mc_node_ui_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
  elseif ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function mc_node_ui_imagecache_default_presets() {
  $items = array(
    'submitted_avatar' => array(
      'presetname' => 'submitted_avatar',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '29',
            'height' => '29',
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
function mc_node_ui_views_api() {
  return array(
    'api' => '2',
  );
}
