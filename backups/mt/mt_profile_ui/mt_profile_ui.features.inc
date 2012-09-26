<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function mt_profile_ui_imagecache_default_presets() {
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
  );
  return $items;
}
