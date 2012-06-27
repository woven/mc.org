<?php

/**
 * Implementation of hook_strongarm().
 */
function mt_account_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'onepageprofile_weights';
  $strongarm->value = array(
    'account' => -10,
    'Personal information' => -9,
    'picture' => -8,
    'theme_select' => -7,
    'timezone' => -6,
  );
  $export['onepageprofile_weights'] = $strongarm;

  return $export;
}
