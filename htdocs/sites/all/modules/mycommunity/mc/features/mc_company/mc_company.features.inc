<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mc_company_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function mc_company_node_info() {
  $items = array(
    'company' => array(
      'name' => t('Company'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Short Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
