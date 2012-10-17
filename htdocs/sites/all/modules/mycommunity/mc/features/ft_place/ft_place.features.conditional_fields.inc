<?php

/**
 * Implementation of hook_conditional_fields_default_fields().
 */
function ft_place_conditional_fields_default_fields() {
$items = array();
$items[] = array (
  'control_field_name' => 'field_place_type',
  'field_name' => 'field_cost_per_session',
  'type' => 'place',
  'trigger_values' => 
  array (
    'exercise' => 'exercise',
  ),
);
$items[] = array (
  'control_field_name' => 'field_place_type',
  'field_name' => 'field_tech_center_type',
  'type' => 'place',
  'trigger_values' => 
  array (
    'get_online' => 'get_online',
  ),
);
$items[] = array (
  'control_field_name' => 'field_place_type',
  'field_name' => 'field_wireless_hotspot',
  'type' => 'place',
  'trigger_values' => 
  array (
    'get_online' => 'get_online',
  ),
);
$items[] = array (
  'control_field_name' => 'field_place_type',
  'field_name' => 'field_wireless_cost',
  'type' => 'place',
  'trigger_values' => 
  array (
    'get_online' => 'get_online',
  ),
);
$items[] = array (
  'control_field_name' => 'field_place_type',
  'field_name' => 'field_computers_with_internet',
  'type' => 'place',
  'trigger_values' => 
  array (
    'get_online' => 'get_online',
  ),
);
$items[] = array (
  'control_field_name' => 'field_place_type',
  'field_name' => 'field_computer_cost',
  'type' => 'place',
  'trigger_values' => 
  array (
    'get_online' => 'get_online',
  ),
);
$items[] = array (
  'control_field_name' => 'field_place_type',
  'field_name' => 'field_health_services',
  'type' => 'place',
  'trigger_values' => 
  array (
    'healthcare_facility' => 'healthcare_facility',
  ),
);
$items[] = array (
  'control_field_name' => 'field_place_type',
  'field_name' => 'field_health_insurance',
  'type' => 'place',
  'trigger_values' => 
  array (
    'healthcare_facility' => 'healthcare_facility',
  ),
);
return $items;
}
