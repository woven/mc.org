<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ft_profile_ui_ctools_plugin_api() {
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
function ft_profile_ui_imagecache_default_presets() {
  $items = array(
    'header_mini_avatar' => array(
      'presetname' => 'header_mini_avatar',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '13',
            'height' => '13',
          ),
        ),
      ),
    ),
    'profile_picture' => array(
      'presetname' => 'profile_picture',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => '',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '100',
            'height' => '100',
            'upscale' => 1,
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
function ft_profile_ui_views_api() {
  return array(
    'api' => '2',
  );
}
