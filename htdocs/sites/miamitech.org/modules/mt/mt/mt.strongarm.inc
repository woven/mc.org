<?php

/**
 * Implementation of hook_strongarm().
 */
function mt_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'formfilter';
  $strongarm->value = array(
    'user_profile_form' => array(
      'theme_select|themes' => '1',
      'timezone' => '1',
    ),
    'event_feed_node_form' => array(
      'title' => '1',
      'feedapi|refresh_on_create' => '1',
      'feedapi|update_existing' => '1',
      'feedapi|refresh_time' => '1',
      'feedapi|items_delete' => '1',
      'feedapi|processors' => '1'
    ),
    'group_node_form' => array(
      'field_header_title_color|value' => '1',
      'og_register' => '1',
      'og_menu' => '1',
      'og_directory' => '1',
      'og_selective' => '1',
      'themes' => '1',
      'field_about|0|value' => '1',
      'field_about|value|format' => '1'
    ),
  );
  $export['formfilter'] = $strongarm;

  return $export;
}
