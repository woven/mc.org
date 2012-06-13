<?php

/**
 * Implementation of hook_strongarm().
 */
function ft_dummyimage_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dummyimages_generate';
  $strongarm->value = '2';
  $export['dummyimages_generate'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dummyimages_lorempixum_category';
  $strongarm->value = 'random';
  $export['dummyimages_lorempixum_category'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dummyimages_service';
  $strongarm->value = 'dummyimage';
  $export['dummyimages_service'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dummyimage_background';
  $strongarm->value = 'CCCCCC';
  $export['dummyimage_background'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dummyimage_color';
  $strongarm->value = '000000';
  $export['dummyimage_color'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dummyimage_default_dimensions';
  $strongarm->value = '300x300';
  $export['dummyimage_default_dimensions'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dummyimage_flickholdr_color';
  $strongarm->value = 1;
  $export['dummyimage_flickholdr_color'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dummyimage_flickholdr_tags';
  $strongarm->value = 'natural people cars animals';
  $export['dummyimage_flickholdr_tags'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dummyimage_kittens_color';
  $strongarm->value = 1;
  $export['dummyimage_kittens_color'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dummyimage_lorempixum_color';
  $strongarm->value = 1;
  $export['dummyimage_lorempixum_color'] = $strongarm;

  return $export;
}
