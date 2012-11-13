<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mc_news_feed_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function mc_news_feed_node_info() {
  $items = array(
    'news_feed' => array(
      'name' => t('News Feed'),
      'module' => 'features',
      'description' => t('Please ensure that your feed consists of news highly relevant to this community.  You may wish to create a tag on your blog or site specifically for content  you wish to syndicate to this community.  Feeds will be monitored and may be removed at our discretion.'),
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
