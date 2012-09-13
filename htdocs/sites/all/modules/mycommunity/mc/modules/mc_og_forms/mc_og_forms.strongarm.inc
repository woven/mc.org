<?php

/**
 * Implementation of hook_strongarm().
 */
function mc_og_forms_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mc_og_forms_contact_bcc';
  $strongarm->value = '';
  $export['mc_og_forms_contact_bcc'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mc_og_forms_contact_body';
  $strongarm->value = 'Name: !form_name
Email: !form_email
Group: !og_title

Subject: !form 
Message: !form_message';
  $export['mc_og_forms_contact_body'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mc_og_forms_contact_cc';
  $strongarm->value = '';
  $export['mc_og_forms_contact_cc'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mc_og_forms_contact_subject';
  $strongarm->value = 'Feedback: !form_subject';
  $export['mc_og_forms_contact_subject'] = $strongarm;

  return $export;
}
