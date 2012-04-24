<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ft_landing_ui_imagecache_default_presets() {
  $items = array(
    'featured_item' => array(
      'presetname' => 'featured_item',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '395',
            'height' => '',
            'upscale' => 1,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '',
            'height' => '120',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'featured_photo' => array(
      'presetname' => 'featured_photo',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '400',
            'height' => '153',
          ),
        ),
      ),
    ),
    'thumbnail' => array(
      'presetname' => 'thumbnail',
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
function ft_landing_ui_views_api() {
  return array(
    'api' => '2',
  );
}
