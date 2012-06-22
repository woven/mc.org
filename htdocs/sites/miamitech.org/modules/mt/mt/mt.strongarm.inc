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
      'picture' => '1',
      'theme_select|themes' => '1',
      'timezone' => '1',
    ),
    'group_node_form' => array(
      'og_menu' => '1',
      'themes' => '1',
      'body_field|teaser_js' => '1',
      'body_field|teaser_include' => '1',
      'body_field|format' => '1',
      'field_about|value|format' => '1',
      'og_register' => '1',
      'og_directory' => '1',
      'og_selective' => '1',
      'author' => '1',
      'options' => '1',
      'path' => '1',
      'comment_settings' => '1',
    ),
  );
  $export['formfilter'] = $strongarm;

  return $export;
}
