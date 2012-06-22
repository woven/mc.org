<?php

/**
 * @file
 * Views handler definition for Views RSS: GeoRSS Elements module.
 */

/**
 * Implementation of hook_views_handlers().
 */
function views_rss_georss_views_handlers() {
  return array(
    'info' => array(
      'path' => VIEWS_RSS_GEORSS_PATH . '/views',
    ),
    'handlers' => array(
      'views_rss_georss_handler_field_coordinates' => array(
        'parent' => 'location_views_handler_field_coordinates',
      ),
    ),
  );
}

/**
 * Implementation of hook_views_data_alter().
 */
function views_rss_georss_views_data_alter(&$data) {
  $data['location']['coordinates']['field']['handler'] = 'views_rss_georss_handler_field_coordinates';
}
