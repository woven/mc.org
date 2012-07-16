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
      'author' => '1',
      'options' => '1',
      'path' => '1',
      'comment_settings' => '1',
    ),
    'group_node_form' => array(
      'group_manual_entry|field_about|0|value' => '1',
      'group_manual_entry|field_about|value|format' => '1',
      'body_field|teaser_js' => '1',
      'body_field|teaser_include' => '1',
      'body_field|format' => '1',
      'field_header_title_color|value' => '1',
      'og_register' => '1',
      'og_menu' => '1',
      'og_directory' => '1',
      'og_selective' => '1',
      'themes' => '1',
      'author' => '1',
      'options' => '1',
      'comment_settings' => '1',
      'path' => '1',
    ),
    'event_node_form' => array(
      'body_field|teaser_js' => '1',
      'body_field|teaser_include' => '1',
      'body_field|format' => '1',
      'field_place|0|nid|nid' => '1',
      'comment_settings' => '1',
      'path' => '1',
      'author' => '1',
      'options' => '1',
    ),
  );
  $export['formfilter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_account';
  $strongarm->value = 'UA-86671-35';
  $export['googleanalytics_account'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mixpanel_token';
  $strongarm->value = '25bd30a8154b0e4456b88255b6db762a';
  $export['mixpanel_token'] = $strongarm;

  return $export;
}
