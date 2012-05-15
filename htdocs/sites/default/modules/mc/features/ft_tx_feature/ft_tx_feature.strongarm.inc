<?php

/**
 * Implementation of hook_strongarm().
 */
function ft_tx_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_taxonomy_feature';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '0',
    'revision_information' => '20',
    'author' => '20',
    'options' => '25',
    'comment_settings' => '30',
    'menu' => '-2',
    'taxonomy' => '-3',
    'path' => '30',
    'locations' => '0',
  );
  $export['content_extra_weights_taxonomy_feature'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_taxonomy_feature';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_taxonomy_feature'] = $strongarm;

  return $export;
}
