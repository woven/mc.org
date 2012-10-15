<?php

/**
 * Implementation of hook_strongarm().
 */
function mc_company_strongarm() {
  $export = array();

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
