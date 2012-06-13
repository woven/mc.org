<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ft_place_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ft_place_node_info() {
  $items = array(
    'place' => array(
      'name' => t('Place'),
      'module' => 'features',
      'description' => t('Enter the details of a place to exercise in Harlem.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
