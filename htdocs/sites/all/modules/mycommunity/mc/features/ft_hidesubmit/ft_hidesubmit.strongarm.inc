<?php

/**
 * Implementation of hook_strongarm().
 */
function ft_hidesubmit_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_attribute_filter';
  $strongarm->value = '';
  $export['hide_submit_attribute_filter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_custom_image_link';
  $strongarm->value = 'sites/all/modules/hide_submit/images/loader.gif';
  $export['hide_submit_custom_image_link'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_debug';
  $strongarm->value = 0;
  $export['hide_submit_debug'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_default_image';
  $strongarm->value = '9462c69cd772304569b9381dcc95043b';
  $export['hide_submit_default_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_fix_known_conflicts';
  $strongarm->value = 1;
  $export['hide_submit_fix_known_conflicts'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_form_exclusion';
  $strongarm->value = '';
  $export['hide_submit_form_exclusion'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_form_exclusion_mode';
  $strongarm->value = '0';
  $export['hide_submit_form_exclusion_mode'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_image';
  $strongarm->value = 'sites/all/modules/hide_submit/images/loader.gif';
  $export['hide_submit_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_image_upload';
  $strongarm->value = '';
  $export['hide_submit_image_upload'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_js_load_option';
  $strongarm->value = '1';
  $export['hide_submit_js_load_option'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_js_load_pages';
  $strongarm->value = '';
  $export['hide_submit_js_load_pages'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_keypress';
  $strongarm->value = '1';
  $export['hide_submit_keypress'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_message';
  $strongarm->value = 'Just a sec...';
  $export['hide_submit_message'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_message_en';
  $strongarm->value = '';
  $export['hide_submit_message_en'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_random';
  $strongarm->value = array(
    'dfb39c95498a1950d4d2abda9fdfc08e' => 0,
    '9462c69cd772304569b9381dcc95043b' => 0,
    '40b3a294da42c93099564da8a74d77bc' => 0,
    '6dd069127c698a2d4884d9480aecbbdb' => 0,
    'c0cf5cbe765a089937ae50b13fccb9fd' => 0,
    '97fb2aabe43db80a068b21a13dfcf72c' => 0,
  );
  $export['hide_submit_random'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_script_mode';
  $strongarm->value = '0';
  $export['hide_submit_script_mode'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_text_only';
  $strongarm->value = 0;
  $export['hide_submit_text_only'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_toggle_custom_image';
  $strongarm->value = 0;
  $export['hide_submit_toggle_custom_image'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hide_submit_toggle_random';
  $strongarm->value = 0;
  $export['hide_submit_toggle_random'] = $strongarm;

  return $export;
}