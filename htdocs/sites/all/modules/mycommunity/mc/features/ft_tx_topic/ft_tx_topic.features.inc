<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ft_tx_topic_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ft_tx_topic_node_info() {
  $items = array(
    'taxonomy_topic' => array(
      'name' => t('Taxonomy Topic'),
      'module' => 'features',
      'description' => t('This Content Type is associated to the Taxonomy Topic.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
