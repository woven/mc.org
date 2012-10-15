<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function mc_company_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-directory-bysize:directory/size/1-3
  $menu_links['menu-directory-bysize:directory/size/1-3'] = array(
    'menu_name' => 'menu-directory-bysize',
    'link_path' => 'directory/size/1-3',
    'router_path' => 'directory/%',
    'link_title' => '1-3 employees',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-directory-bysize:directory/size/11-20
  $menu_links['menu-directory-bysize:directory/size/11-20'] = array(
    'menu_name' => 'menu-directory-bysize',
    'link_path' => 'directory/size/11-20',
    'router_path' => 'directory/%',
    'link_title' => '11-20 employees',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-directory-bysize:directory/size/21-50
  $menu_links['menu-directory-bysize:directory/size/21-50'] = array(
    'menu_name' => 'menu-directory-bysize',
    'link_path' => 'directory/size/21-50',
    'router_path' => 'directory/%',
    'link_title' => '21-50 employees',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-directory-bysize:directory/size/4-6
  $menu_links['menu-directory-bysize:directory/size/4-6'] = array(
    'menu_name' => 'menu-directory-bysize',
    'link_path' => 'directory/size/4-6',
    'router_path' => 'directory/%',
    'link_title' => '4-6 employees',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-directory-bysize:directory/size/50+
  $menu_links['menu-directory-bysize:directory/size/50+'] = array(
    'menu_name' => 'menu-directory-bysize',
    'link_path' => 'directory/size/50+',
    'router_path' => 'directory/%',
    'link_title' => '50+ employees',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-directory-bysize:directory/size/7-10
  $menu_links['menu-directory-bysize:directory/size/7-10'] = array(
    'menu_name' => 'menu-directory-bysize',
    'link_path' => 'directory/size/7-10',
    'router_path' => 'directory/%',
    'link_title' => '7-10 employees',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('1-3 employees');
  t('11-20 employees');
  t('21-50 employees');
  t('4-6 employees');
  t('50+ employees');
  t('7-10 employees');


  return $menu_links;
}
