<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ft_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ft_page_node_info() {
  $items = array(
    'npage' => array(
      'name' => t('Landing Page'),
      'module' => 'features',
      'description' => t('This is a page of the website that doesn\'t show up in listings of Articles, etc.'),
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
