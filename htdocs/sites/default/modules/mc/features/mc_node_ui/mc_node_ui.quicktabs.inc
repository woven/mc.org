<?php

/**
 * Implementation of hook_quicktabs_default_quicktabs().
 */
function mc_node_ui_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'browse_by';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = 0;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'Browse by';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'boxes_delta_latest_by_topic',
      'hide_title' => 1,
      'title' => 'Topic',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'boxes_delta_browse_by_type',
      'hide_title' => 1,
      'title' => 'Type',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->style = 'default';
  $export['browse_by'] = $quicktabs;

  $quicktabs = new stdClass;
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'latest_right_blocks';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = 0;
  $quicktabs->default_tab = FALSE;
  $quicktabs->title = 'Latest Right Blocks';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_latest_right_block-block_1',
      'hide_title' => 1,
      'title' => 'Latest',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_latest_right_block-block_2',
      'hide_title' => 1,
      'title' => 'Popular',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->style = 'default';
  $export['latest_right_blocks'] = $quicktabs;

  return $export;
}
