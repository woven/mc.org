<?php

/**
 * Implementation of hook_strongarm().
 */
function mt_access_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_perm_module';
  $strongarm->value = 'mt_access';
  $export['features_perm_module'] = $strongarm;

  return $export;
}
