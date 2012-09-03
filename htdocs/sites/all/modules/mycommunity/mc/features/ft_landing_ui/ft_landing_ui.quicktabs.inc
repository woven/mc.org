<?php

/**
 * Implementation of hook_quicktabs_default_quicktabs().
 */
function ft_landing_ui_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'home_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = 1;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'Home Items';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_home_blocks-block_1',
      'hide_title' => 1,
      'title' => 'Latest Stuff',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_home_blocks-block_2',
      'hide_title' => 1,
      'title' => 'Most Popular',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->style = 'default';
  $export['home_tabs'] = $quicktabs;

  return $export;
}
