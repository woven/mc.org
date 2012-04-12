<?php

/**
 * Implementation of hook_strongarm().
 */
function ft_place_ui_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vd_type_popular_places_block_1';
  $strongarm->value = TRUE;
  $export['vd_type_popular_places_block_1'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vd_type_popular_places_block_2';
  $strongarm->value = TRUE;
  $export['vd_type_popular_places_block_2'] = $strongarm;

  return $export;
}
