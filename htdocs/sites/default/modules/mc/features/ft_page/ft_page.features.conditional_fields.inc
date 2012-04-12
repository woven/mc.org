<?php

/**
 * Implementation of hook_conditional_fields_default_fields().
 */
function ft_page_conditional_fields_default_fields() {
$items = array();
$items[] = array (
  'control_field_name' => 'field_page_subtype',
  'field_name' => 'field_featured_photo',
  'type' => 'npage',
  'trigger_values' => 
  array (
    'home' => 'home',
  ),
);
$items[] = array (
  'control_field_name' => 'field_page_subtype',
  'field_name' => 'field_featured_events',
  'type' => 'npage',
  'trigger_values' => 
  array (
    'events' => 'events',
  ),
);
$items[] = array (
  'control_field_name' => 'field_page_type',
  'field_name' => 'field_page_subtype',
  'type' => 'npage',
  'trigger_values' => 
  array (
    'landing' => 'landing',
  ),
);
$items[] = array (
  'control_field_name' => 'field_page_type',
  'field_name' => 'field_featured_photo',
  'type' => 'npage',
  'trigger_values' => 
  array (
    'landing' => 'landing',
  ),
);
$items[] = array (
  'control_field_name' => 'field_page_subtype',
  'field_name' => 'field_featured_group',
  'type' => 'npage',
  'trigger_values' => 
  array (
    'home' => 'home',
    'events' => 'events',
    'places' => 'places',
    'audio-video' => 'audio-video',
    'community' => 'community',
  ),
);
$items[] = array (
  'control_field_name' => 'field_page_subtype',
  'field_name' => 'field_featured_place',
  'type' => 'npage',
  'trigger_values' => 
  array (
    'home' => 'home',
  ),
);
$items[] = array (
  'control_field_name' => 'field_page_type',
  'field_name' => 'field_list_image',
  'type' => 'npage',
  'trigger_values' => 
  array (
    'secondary' => 'secondary',
  ),
);
$items[] = array (
  'control_field_name' => 'field_page_type',
  'field_name' => 'field_featured_items',
  'type' => 'npage',
  'trigger_values' => 
  array (
    'landing' => 'landing',
  ),
);
$items[] = array (
  'control_field_name' => 'field_page_type',
  'field_name' => 'field_featured_events',
  'type' => 'npage',
  'trigger_values' => 
  array (
    'landing' => 'landing',
  ),
);
$items[] = array (
  'control_field_name' => 'field_page_type',
  'field_name' => 'field_featured_group',
  'type' => 'npage',
  'trigger_values' => 
  array (
    'landing' => 'landing',
  ),
);
$items[] = array (
  'control_field_name' => 'field_page_type',
  'field_name' => 'field_featured_place',
  'type' => 'npage',
  'trigger_values' => 
  array (
    'landing' => 'landing',
  ),
);
$items[] = array (
  'control_field_name' => 'field_page_subtype',
  'field_name' => 'field_featured_groups',
  'type' => 'npage',
  'trigger_values' => 
  array (
    'groups' => 'groups',
  ),
);
$items[] = array (
  'control_field_name' => 'field_page_subtype',
  'field_name' => 'field_featured_items',
  'type' => 'npage',
  'trigger_values' => 
  array (
    'home' => 'home',
  ),
);
$items[] = array (
  'control_field_name' => 'field_page_subtype',
  'field_name' => 'field_featured_members',
  'type' => 'npage',
  'trigger_values' => 
  array (
    'community' => 'community',
  ),
);
$items[] = array (
  'control_field_name' => 'field_page_subtype',
  'field_name' => 'field_featured_places',
  'type' => 'npage',
  'trigger_values' => 
  array (
    'places' => 'places',
  ),
);
$items[] = array (
  'control_field_name' => 'field_page_subtype',
  'field_name' => 'field_featured_audio_video_items',
  'type' => 'npage',
  'trigger_values' => 
  array (
    'audio-video' => 'audio-video',
  ),
);
return $items;
}
