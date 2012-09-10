<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mc_search_core_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function mc_search_core_imagecache_default_presets() {
  $items = array(
    'search_result_image' => array(
      'presetname' => 'search_result_image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '62',
            'height' => '46',
          ),
        ),
      ),
    ),
  );
  return $items;
}
