<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ft_search_drupal_ui_imagecache_default_presets() {
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
