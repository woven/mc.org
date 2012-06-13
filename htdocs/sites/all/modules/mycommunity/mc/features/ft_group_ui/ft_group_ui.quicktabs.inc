<?php

/**
 * Implementation of hook_quicktabs_default_quicktabs().
 */
function ft_group_ui_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'og_gposts';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = 1;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'Group Posts';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'og_posts',
      'display' => 'block_1',
      'args' => '',
      'get_displays' => 'vdisp_0',
      'title' => 'Featured',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'og_posts',
      'display' => 'block_2',
      'args' => '',
      'get_displays' => 'vdisp_1',
      'title' => 'Latest',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'og_posts',
      'display' => 'block_3',
      'args' => '',
      'get_displays' => 'vdisp_2',
      'title' => 'Most Popular',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->style = 'default';
  $export['og_gposts'] = $quicktabs;

  return $export;
}
