<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function mt_latest_ui_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-browse-by-date
  $menus['menu-browse-by-date'] = array(
    'menu_name' => 'menu-browse-by-date',
    'title' => 'Events By Date',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Events By Date');


  return $menus;
}
