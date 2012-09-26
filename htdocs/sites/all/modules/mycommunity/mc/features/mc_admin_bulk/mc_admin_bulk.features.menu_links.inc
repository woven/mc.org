<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function mc_admin_bulk_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-manage-community:admin/content/group/bulk
  $menu_links['menu-manage-community:admin/content/group/bulk'] = array(
    'menu_name' => 'menu-manage-community',
    'link_path' => 'admin/content/group/bulk',
    'router_path' => 'admin/content',
    'link_title' => 'Manage Groups',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-manage-community:admin/content/node/bulk
  $menu_links['menu-manage-community:admin/content/node/bulk'] = array(
    'menu_name' => 'menu-manage-community',
    'link_path' => 'admin/content/node/bulk',
    'router_path' => 'admin/content/node',
    'link_title' => 'Manage Content',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-manage-community:admin/content/user/bulk
  $menu_links['menu-manage-community:admin/content/user/bulk'] = array(
    'menu_name' => 'menu-manage-community',
    'link_path' => 'admin/content/user/bulk',
    'router_path' => 'admin/content',
    'link_title' => 'Manage Users',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-manage-community:admin/menu/help/config
  $menu_links['menu-manage-community:admin/menu/help/config'] = array(
    'menu_name' => 'menu-manage-community',
    'link_path' => 'admin/menu/help/config',
    'router_path' => 'admin/menu/help/config',
    'link_title' => 'Manage Pages Menu',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Manage Content');
  t('Manage Groups');
  t('Manage Pages Menu');
  t('Manage Users');


  return $menu_links;
}
