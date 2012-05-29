<?php

/**
 * Implementation of hook_strongarm().
 */
function ft_feed_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_feeds';
  $strongarm->value = 0;
  $export['comment_anonymous_feeds'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_feeds';
  $strongarm->value = '3';
  $export['comment_controls_feeds'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_feeds';
  $strongarm->value = '4';
  $export['comment_default_mode_feeds'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_feeds';
  $strongarm->value = '1';
  $export['comment_default_order_feeds'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_feeds';
  $strongarm->value = '50';
  $export['comment_default_per_page_feeds'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_feeds';
  $strongarm->value = '2';
  $export['comment_feeds'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_feeds';
  $strongarm->value = '0';
  $export['comment_form_location_feeds'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_feeds';
  $strongarm->value = '1';
  $export['comment_preview_feeds'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_feeds';
  $strongarm->value = '1';
  $export['comment_subject_field_feeds'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feedapi_settings_feeds';
  $strongarm->value = array(
    'enabled' => 1,
    'upload_method' => 'url',
    'refresh_on_create' => 0,
    'update_existing' => 1,
    'refresh_time' => '1800',
    'items_delete' => '0',
    'parsers' => array(
      'parser_common_syndication' => array(
        'enabled' => 1,
        'weight' => '0',
        'accept_invalid_cert' => 0,
      ),
    ),
    'processors' => array(
      'feedapi_node' => array(
        'enabled' => 1,
        'weight' => '0',
        'content_type' => 'nnews',
        'input_format' => '4',
        'node_date' => 'feed',
        'x_dedupe' => '0',
      ),
    ),
  );
  $export['feedapi_settings_feeds'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_feeds';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_feeds'] = $strongarm;

  return $export;
}
