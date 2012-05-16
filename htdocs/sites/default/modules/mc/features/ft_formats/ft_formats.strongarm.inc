<?php

/**
 * Implementation of hook_strongarm().
 */
function ft_formats_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_default_format';
  $strongarm->value = '1';
  $export['filter_default_format'] = $strongarm;

  return $export;
}
