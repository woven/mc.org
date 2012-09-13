<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ft_landing_slideshow_imagecache_default_presets() {
  $items = array(
    'featured_slideshow' => array(
      'presetname' => 'featured_slideshow',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '259',
            'height' => '149',
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
function ft_landing_slideshow_views_api() {
  return array(
    'api' => '2',
  );
}
