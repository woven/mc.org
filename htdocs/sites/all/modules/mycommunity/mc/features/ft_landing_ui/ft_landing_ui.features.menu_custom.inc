<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function ft_landing_ui_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-join-us
  $menus['menu-join-us'] = array(
    'menu_name' => 'menu-join-us',
    'title' => 'Join Us - Social Network',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Join Us - Social Network');


  return $menus;
}
