<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function mc_company_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-directory-bysize
  $menus['menu-directory-bysize'] = array(
    'menu_name' => 'menu-directory-bysize',
    'title' => 'By Size',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('By Size');


  return $menus;
}
