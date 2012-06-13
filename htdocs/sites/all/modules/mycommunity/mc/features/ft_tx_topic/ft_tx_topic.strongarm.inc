<?php

/**
 * Implementation of hook_strongarm().
 */
function ft_tx_topic_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_taxonomy_topic';
  $strongarm->value = 0;
  $export['comment_anonymous_taxonomy_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_taxonomy_topic';
  $strongarm->value = '3';
  $export['comment_controls_taxonomy_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_taxonomy_topic';
  $strongarm->value = '4';
  $export['comment_default_mode_taxonomy_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_taxonomy_topic';
  $strongarm->value = '1';
  $export['comment_default_order_taxonomy_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_taxonomy_topic';
  $strongarm->value = '50';
  $export['comment_default_per_page_taxonomy_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_taxonomy_topic';
  $strongarm->value = '0';
  $export['comment_form_location_taxonomy_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_taxonomy_topic';
  $strongarm->value = '1';
  $export['comment_preview_taxonomy_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_taxonomy_topic';
  $strongarm->value = '1';
  $export['comment_subject_field_taxonomy_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_taxonomy_topic';
  $strongarm->value = '2';
  $export['comment_taxonomy_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_taxonomy_topic';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '0',
    'revision_information' => '20',
    'author' => '20',
    'options' => '25',
    'comment_settings' => '30',
    'menu' => '-2',
    'path' => '30',
    'locations' => '0',
  );
  $export['content_extra_weights_taxonomy_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_taxonomy_topic';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_taxonomy_topic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomynode_features_topic';
  $strongarm->value = array(
    'content_type' => 'taxonomy_topic',
  );
  $export['taxonomynode_features_topic'] = $strongarm;

  return $export;
}
