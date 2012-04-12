<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function mc_node_ui_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-browse-by-topic:latest/category/2
  $menu_links['menu-browse-by-topic:latest/category/2'] = array(
    'menu_name' => 'menu-browse-by-topic',
    'link_path' => 'latest/category/2',
    'router_path' => 'latest/category/%',
    'link_title' => 'Fitness',
    'options' => array(
      'attributes' => array(
        'class' => 'ico-fitness',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '0',
  );
  // Exported menu link: menu-browse-by-topic:latest/category/3
  $menu_links['menu-browse-by-topic:latest/category/3'] = array(
    'menu_name' => 'menu-browse-by-topic',
    'link_path' => 'latest/category/3',
    'router_path' => 'latest/category/%',
    'link_title' => 'Environment',
    'options' => array(
      'attributes' => array(
        'class' => 'ico-environment',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '1',
  );
  // Exported menu link: menu-browse-by-topic:latest/category/4
  $menu_links['menu-browse-by-topic:latest/category/4'] = array(
    'menu_name' => 'menu-browse-by-topic',
    'link_path' => 'latest/category/4',
    'router_path' => 'latest/category/%',
    'link_title' => 'Food',
    'options' => array(
      'attributes' => array(
        'class' => 'ico-food',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '2',
  );
  // Exported menu link: menu-browse-by-topic:latest/category/5
  $menu_links['menu-browse-by-topic:latest/category/5'] = array(
    'menu_name' => 'menu-browse-by-topic',
    'link_path' => 'latest/category/5',
    'router_path' => 'latest/category/%',
    'link_title' => 'Spirit & Mind',
    'options' => array(
      'attributes' => array(
        'class' => 'ico-spirit-mind',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '3',
  );
  // Exported menu link: menu-browse-by-topic:latest/category/6
  $menu_links['menu-browse-by-topic:latest/category/6'] = array(
    'menu_name' => 'menu-browse-by-topic',
    'link_path' => 'latest/category/6',
    'router_path' => 'latest/category/%',
    'link_title' => 'Health Info',
    'options' => array(
      'attributes' => array(
        'class' => 'ico-health-center',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '4',
  );
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
  // Exported menu link: menu-browse-by-type:latest/article
  $menu_links['menu-browse-by-type:latest/article'] = array(
    'menu_name' => 'menu-browse-by-type',
    'link_path' => 'latest/article',
    'router_path' => 'latest/%',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(
        'class' => 'ico-article',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-browse-by-type:latest/audio
  $menu_links['menu-browse-by-type:latest/audio'] = array(
    'menu_name' => 'menu-browse-by-type',
    'link_path' => 'latest/audio',
    'router_path' => 'latest/%',
    'link_title' => 'Audio',
    'options' => array(
      'attributes' => array(
        'class' => 'ico-podcastses',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-browse-by-type:latest/event
  $menu_links['menu-browse-by-type:latest/event'] = array(
    'menu_name' => 'menu-browse-by-type',
    'link_path' => 'latest/event',
    'router_path' => 'latest/%',
    'link_title' => 'Event',
    'options' => array(
      'attributes' => array(
        'class' => 'ico-event',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-browse-by-type:latest/forum
  $menu_links['menu-browse-by-type:latest/forum'] = array(
    'menu_name' => 'menu-browse-by-type',
    'link_path' => 'latest/forum',
    'router_path' => 'latest/%',
    'link_title' => 'Discussion',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-browse-by-type:latest/gallery
  $menu_links['menu-browse-by-type:latest/gallery'] = array(
    'menu_name' => 'menu-browse-by-type',
    'link_path' => 'latest/gallery',
    'router_path' => 'latest/%',
    'link_title' => 'Albums',
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
  // Exported menu link: menu-browse-by-type:latest/gallery_image
  $menu_links['menu-browse-by-type:latest/gallery_image'] = array(
    'menu_name' => 'menu-browse-by-type',
    'link_path' => 'latest/gallery_image',
    'router_path' => 'latest/%',
    'link_title' => 'Photo',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: menu-browse-by-type:latest/news
  $menu_links['menu-browse-by-type:latest/news'] = array(
    'menu_name' => 'menu-browse-by-type',
    'link_path' => 'latest/news',
    'router_path' => 'latest/%',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'class' => 'ico-news',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-browse-by-type:latest/place
  $menu_links['menu-browse-by-type:latest/place'] = array(
    'menu_name' => 'menu-browse-by-type',
    'link_path' => 'latest/place',
    'router_path' => 'latest/%',
    'link_title' => 'Place',
    'options' => array(
      'attributes' => array(
        'class' => 'ico-place',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Exported menu link: menu-browse-by-type:latest/video
  $menu_links['menu-browse-by-type:latest/video'] = array(
    'menu_name' => 'menu-browse-by-type',
    'link_path' => 'latest/video',
    'router_path' => 'latest/%',
    'link_title' => 'Video',
    'options' => array(
      'attributes' => array(
        'class' => 'ico-video',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Albums');
  t('All types');
  t('Article');
  t('Audio');
  t('Discussion');
  t('Environment');
  t('Event');
  t('Fitness');
  t('Food');
  t('Health Info');
  t('News');
  t('Photo');
  t('Place');
  t('Spirit & Mind');
  t('Video');


  return $menu_links;
}
