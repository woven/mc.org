<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function mt_latest_ui_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-browse-by-date:latest/events
  $menu_links['menu-browse-by-date:latest/events'] = array(
    'menu_name' => 'menu-browse-by-date',
    'link_path' => 'latest/events',
    'router_path' => 'latest/events',
    'link_title' => 'View All',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-browse-by-date:latest/events/next-week
  $menu_links['menu-browse-by-date:latest/events/next-week'] = array(
    'menu_name' => 'menu-browse-by-date',
    'link_path' => 'latest/events/next-week',
    'router_path' => 'latest/events/%',
    'link_title' => 'Next Week',
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
  // Exported menu link: menu-browse-by-date:latest/events/this-week
  $menu_links['menu-browse-by-date:latest/events/this-week'] = array(
    'menu_name' => 'menu-browse-by-date',
    'link_path' => 'latest/events/this-week',
    'router_path' => 'latest/events/%',
    'link_title' => 'This Week',
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
  // Exported menu link: menu-browse-by-date:latest/events/today
  $menu_links['menu-browse-by-date:latest/events/today'] = array(
    'menu_name' => 'menu-browse-by-date',
    'link_path' => 'latest/events/today',
    'router_path' => 'latest/events/%',
    'link_title' => 'Today',
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
  // Exported menu link: menu-browse-by-date:latest/events/tomorrow
  $menu_links['menu-browse-by-date:latest/events/tomorrow'] = array(
    'menu_name' => 'menu-browse-by-date',
    'link_path' => 'latest/events/tomorrow',
    'router_path' => 'latest/events/%',
    'link_title' => 'Tomorrow',
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
  // Exported menu link: menu-browse-by-date:latest/events/upcoming
  $menu_links['menu-browse-by-date:latest/events/upcoming'] = array(
    'menu_name' => 'menu-browse-by-date',
    'link_path' => 'latest/events/upcoming',
    'router_path' => 'latest/events/%',
    'link_title' => 'Upcoming',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Next Week');
  t('This Week');
  t('Today');
  t('Tomorrow');
  t('Upcoming');
  t('View All');


  return $menu_links;
}
