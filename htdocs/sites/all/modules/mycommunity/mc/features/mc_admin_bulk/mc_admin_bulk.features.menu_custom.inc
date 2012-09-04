<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function mc_admin_bulk_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-manage-community
  $menus['menu-manage-community'] = array(
    'menu_name' => 'menu-manage-community',
    'title' => 'Manage Community',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Manage Community');


  return $menus;
}
