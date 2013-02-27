<?php

/**
 * Implementation of hook_quicktabs_default_quicktabs().
 */
function mc_account_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'mt_userprofile';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = 1;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'User Information';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_mc_user_information-block_2',
      'hide_title' => 1,
      'title' => 'Personal',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_mc_user_information-block_1',
      'hide_title' => 1,
      'title' => 'Work and Education',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'vid' => 'my_groups',
      'display' => 'block_1',
      'args' => '',
      'get_displays' => 'vdisp_2',
      'title' => 'My Groups',
      'weight' => '-98',
      'type' => 'view',
    ),
      3 => array(
          'bid' => 'boxes_delta_profile_myevents',
          'hide_title' => 1,
          'title' => 'My Events',
          'weight' => '-99',
          'type' => 'block',
      ),
  );
  $quicktabs->style = 'default';
  $export['mt_userprofile'] = $quicktabs;

  return $export;
}
