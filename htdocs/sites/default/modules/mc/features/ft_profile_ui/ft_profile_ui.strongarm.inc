<?php

/**
 * Implementation of hook_strongarm().
 */
function ft_profile_ui_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ud_fields';
  $strongarm->value = array(
    'user_title_personal' => array(
      'title' => 'User Title - Personal',
      'exclude' => array(),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<h3>Personal</h3>
<span class="arrow"></span>',
        'token' => 0,
        'css-class' => 'block-title',
      ),
    ),
    'user_title_organization' => array(
      'title' => 'User Title - Organization',
      'exclude' => array(),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<h3>Organization</h3>
<span class="arrow"></span>',
        'token' => 0,
        'css-class' => 'block-title',
      ),
    ),
    'profile_qt' => array(
      'type' => 6,
      'status' => 3,
      'title' => 'Profile',
      'exclude' => array(),
      'properties' => array(
        'block' => 'quicktabs|5',
        'render' => '1',
      ),
    ),
  );
  $export['ud_fields'] = $strongarm;

  return $export;
}
