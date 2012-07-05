<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mt_event_feed_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function mt_event_feed_node_info() {
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
      'help' => t('Import your group\'s event feed.  We currently only accept iCal feeds, like those found at the bottom of a Meetup.com calendar page.'),
    ),
  );
  return $items;
}
