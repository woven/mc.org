<?php

/**
 * Implementation of hook_strongarm().
 */
function mc_account_strongarm() {
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

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_fields';
  $strongarm->value = array(
    'profile_firstname' => '0',
    'profile_lastname' => '0',
  );
  $export['realname_fields'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_homepage';
  $strongarm->value = '';
  $export['realname_homepage'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_nofollow';
  $strongarm->value = FALSE;
  $export['realname_nofollow'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_pattern';
  $strongarm->value = '%1 %2';
  $export['realname_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_profile_module';
  $strongarm->value = 'profile';
  $export['realname_profile_module'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'realname_recalculate';
  $strongarm->value = FALSE;
  $export['realname_recalculate'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ud_fields';
  $strongarm->value = array(
    'mt_userprofile' => array(
      'type' => 6,
      'status' => 3,
      'title' => 'User Information tabs',
      'exclude' => array(),
      'properties' => array(
        'block' => 'quicktabs|mt_userprofile',
        'render' => '3',
      ),
    ),
    'realname_area' => array(
      'title' => 'Real Name',
      'exclude' => array(),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '[realname]',
        'token' => 1,
      ),
    ),
    'ds_group_user_primaryinfo' => array(
      'title' => 'Primary info',
      'exclude' => array(),
      'type' => 7,
      'status' => 1,
      'properties' => array(
        'formatters' => array(
          'ds_field' => 'A simple div',
          'ds_group_fieldset_open' => 'Fieldset open',
          'ds_group_fieldset_collapsible' => 'Fieldset collapsible',
          'ds_group_fieldset_collapsed' => 'Fieldset collapsed',
        ),
      ),
    ),
  );
  $export['ud_fields'] = $strongarm;

  return $export;
}
