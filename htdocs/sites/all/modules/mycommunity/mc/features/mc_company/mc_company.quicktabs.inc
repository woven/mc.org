<?php

/**
 * Implementation of hook_quicktabs_default_quicktabs().
 */
function mc_company_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'directory_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = 0;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'List as';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'latest_pages',
      'display' => 'page_8',
      'args' => '',
      'get_displays' => 'vdisp_0',
      'title' => 'List',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'latest_pages',
      'display' => 'page_9',
      'args' => '',
      'get_displays' => 'vdisp_1',
      'title' => 'Map',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->style = 'default';
  $export['directory_tabs'] = $quicktabs;

  return $export;
}
