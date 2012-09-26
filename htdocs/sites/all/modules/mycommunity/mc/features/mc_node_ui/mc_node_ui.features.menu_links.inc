<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function mc_node_ui_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-browse-by-type:latest
  $menu_links['menu-browse-by-type:latest'] = array(
    'menu_name' => 'menu-browse-by-type',
    'link_path' => 'latest',
    'router_path' => 'latest',
    'link_title' => 'All types',
    'options' => array(
      'attributes' => array(
        'title' => 'All types of stuff',
        'class' => 'ico-all',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('All types');


  return $menu_links;
}
