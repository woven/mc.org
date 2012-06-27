<?php

/**
 * Implementation of hook_profile_default_profile_fields().
 */
function mt_account_profile_default_profile_fields() {
$profile_fields = array();
$profile_fields['profile_firstname'] = array(
  'title' => 'First Name',
  'name' => 'profile_firstname',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '0',
  'required' => '1',
  'register' => '0',
  'visibility' => '1',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_lastname'] = array(
  'title' => 'Last Name',
  'name' => 'profile_lastname',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '0',
  'required' => '1',
  'register' => '0',
  'visibility' => '1',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_shortbyline'] = array(
  'title' => 'Short byline',
  'name' => 'profile_shortbyline',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '0',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_website'] = array(
  'title' => 'Personal Website',
  'name' => 'profile_website',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '0',
  'required' => '0',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
$profile_fields['profile_zipcode'] = array(
  'title' => 'Zipcode',
  'name' => 'profile_zipcode',
  'explanation' => '',
  'category' => 'Personal information',
  'page' => '',
  'type' => 'textfield',
  'weight' => '0',
  'required' => '1',
  'register' => '0',
  'visibility' => '2',
  'autocomplete' => '0',
  'options' => '',
);
return $profile_fields;
}
