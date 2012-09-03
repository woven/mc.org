<?php

/**
 * Implementation of hook_quicktabs_default_quicktabs().
 */
function ft_profile_ui_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'profile_qt';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = 0;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'Profile QT';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_Profile-block_1',
      'hide_title' => 1,
      'title' => 'Profile',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_og_community-block_6',
      'hide_title' => 1,
      'title' => 'Activity',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->style = 'default';
  $export['profile_qt'] = $quicktabs;

  return $export;
}
