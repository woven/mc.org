<?php

/**
 * Implementation of hook_strongarm().
 */
function ft_menutrails_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menutrails_breadcrumbs';
  $strongarm->value = 1;

  $export['menutrails_breadcrumbs'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menutrails_menu';
  $strongarm->value = 'primary-links';

  $export['menutrails_menu'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menutrails_node_types';
  $strongarm->value = array(
    'gallery' => 'latest',
    'article' => 'latest',
    'audio' => 'node/4704',
    'environmental_resource' => 'node/4703',
    'event' => 'node/4700',
    'feature_spot' => 'latest',
    'feedapi_node' => 'groups/4726/nycsafh/latest',
    'file' => 'groups/4726/nycsafh/latest',
    'group' => 'node/4668',
    'healthcare_facility' => 'node/4703',
    'front_picture' => 'groups/4726/nycsafh/latest',
    'image' => 'groups/4726/nycsafh/latest',
    'link' => 'groups/4726/nycsafh/latest',
    'embmedia' => 'groups/4726/nycsafh/latest',
    'news' => 'groups/4726/nycsafh/latest',
    'simplenews' => 'groups/4726/nycsafh/latest',
    'page' => '',
    'gallery_image' => 'groups/4726/nycsafh/latest',
    'place' => 'node/4703',
    'spirit_and_mind' => 'node/4703',
    'video' => 'node/4704',
    'webform' => '',
  );

  $export['menutrails_node_types'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menutrails_og_group_menu';
  $strongarm->value = 0;

  $export['menutrails_og_group_menu'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menutrails_og_node';
  $strongarm->value = array(
    4679 => '',
    4726 => '',
    4706 => '',
  );

  $export['menutrails_og_node'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menutrails_og_post_default';
  $strongarm->value = '';

  $export['menutrails_og_post_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menutrails_og_sub_pages';
  $strongarm->value = 1;

  $export['menutrails_og_sub_pages'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menutrails_terms';
  $strongarm->value = array(
    1 => '',
    2 => '',
    3 => '',
    4 => '',
    5 => '',
    6 => '',
    1867 => '',
    1866 => '',
    1868 => '',
    809 => '',
  );

  $export['menutrails_terms'] = $strongarm;
  return $export;
}
