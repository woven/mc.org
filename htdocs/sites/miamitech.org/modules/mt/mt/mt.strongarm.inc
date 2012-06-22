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
    'event_feed_node_form' => array(
      'title' => '1',
    ),
  );
  $export['formfilter'] = $strongarm;

  return $export;
}
