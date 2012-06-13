<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function mc_node_ui_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-browse-by-topic
  $menus['menu-browse-by-topic'] = array(
    'menu_name' => 'menu-browse-by-topic',
    'title' => 'Browse By - Topic',
    'description' => '',
  );
  // Exported menu: menu-browse-by-type
  $menus['menu-browse-by-type'] = array(
    'menu_name' => 'menu-browse-by-type',
    'title' => 'Browse By - Type',
    'description' => 'Show only this type of stuff',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Browse By - Topic');
  t('Browse By - Type');
  t('Show only this type of stuff');


  return $menus;
}
