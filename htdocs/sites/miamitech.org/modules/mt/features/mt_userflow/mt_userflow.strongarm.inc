<?php

/**
 * Implementation of hook_strongarm().
 */
function mt_userflow_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'first_login_num_of_logins';
  $strongarm->value = '1';
  $export['first_login_num_of_logins'] = $strongarm;

  return $export;
}
