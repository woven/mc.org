<?php

/**
 * Implementation of hook_strongarm().
 */
function mc_feedbackify_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feedbackify_color';
  $strongarm->value = '#FF8124';
  $export['feedbackify_color'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feedbackify_pages';
  $strongarm->value = 'admin
admin/*';
  $export['feedbackify_pages'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feedbackify_pos';
  $strongarm->value = 'right';
  $export['feedbackify_pos'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feedbackify_visibility';
  $strongarm->value = '0';
  $export['feedbackify_visibility'] = $strongarm;

  return $export;
}
