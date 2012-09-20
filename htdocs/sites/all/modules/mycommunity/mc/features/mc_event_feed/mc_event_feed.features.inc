<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mc_event_feed_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function mc_event_feed_node_info() {
  $items = array(
    'event_feed' => array(
      'name' => t('Event Feed'),
      'module' => 'features',
      'description' => t('This content type is being used for automatically aggregated events from iCal feeds.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
