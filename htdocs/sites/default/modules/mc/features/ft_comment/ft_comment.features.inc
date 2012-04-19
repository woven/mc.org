<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ft_comment_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ft_comment_imagecache_default_presets() {
  $items = array(
    'user_comment_image' => array(
      'presetname' => 'user_comment_image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '43',
            'height' => '43',
          ),
        ),
      ),
    ),
  );
  return $items;
}
