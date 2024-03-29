<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ft_article_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ft_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'module' => 'features',
      'description' => t('Users can create an article to be published on the web.'),
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
