<?php

/**
 * Implementation of hook_quicktabs_default_quicktabs().
 */
function mt_account_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'mt_userprofile';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = 1;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'User Information';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'my_groups',
      'display' => 'block_1',
      'args' => '',
      'get_displays' => 'vdisp_0',
      'title' => 'My Groups',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
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
