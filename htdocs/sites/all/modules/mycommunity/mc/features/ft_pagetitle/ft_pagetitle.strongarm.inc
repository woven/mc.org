<?php

/**
 * Implementation of hook_strongarm().
 */
function ft_pagetitle_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_default';
  $strongarm->value = '[page-title] | [site-name]';
  $export['page_title_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_forum_root_title';
  $strongarm->value = '';
  $export['page_title_forum_root_title'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_front';
  $strongarm->value = '[page-title]';
  $export['page_title_front'] = $strongarm;

  return $export;
}
