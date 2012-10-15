<?php

/**
 * Implementation of hook_strongarm().
 */
function mc_company_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_company';
  $strongarm->value = 0;
  $export['comment_anonymous_company'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_company';
  $strongarm->value = '2';
  $export['comment_company'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_company';
  $strongarm->value = '3';
  $export['comment_controls_company'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_company';
  $strongarm->value = '4';
  $export['comment_default_mode_company'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_company';
  $strongarm->value = '1';
  $export['comment_default_order_company'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_company';
  $strongarm->value = '50';
  $export['comment_default_per_page_company'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_company';
  $strongarm->value = '0';
  $export['comment_form_location_company'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_company';
  $strongarm->value = '1';
  $export['comment_preview_company'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_company';
  $strongarm->value = '1';
  $export['comment_subject_field_company'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_company';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '14',
    'author' => '15',
    'options' => '16',
    'comment_settings' => '17',
    'menu' => '11',
    'taxonomy' => '10',
    'path' => '18',
    'locations' => '12',
    'og_description' => '-4',
    'og_selective' => '8',
    'og_register' => '7',
    'og_directory' => '6',
    'xmlsitemap' => '19',
    'og_private' => '9',
    'nodewords' => '13',
  );
  $export['content_extra_weights_company'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_company';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_company'] = $strongarm;

  return $export;
}
