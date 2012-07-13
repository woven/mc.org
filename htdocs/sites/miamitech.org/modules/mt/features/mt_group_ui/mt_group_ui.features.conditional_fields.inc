<?php

/**
 * Implementation of hook_conditional_fields_default_fields().
 */
function mt_group_ui_conditional_fields_default_fields() {
$items = array();
$items[] = array (
  'control_field_name' => 'field_auto_import',
  'field_name' => 'group_manual_entry',
  'type' => 'group',
  'trigger_values' => 
  array (
    0 => '0',
  ),
);
$items[] = array (
  'control_field_name' => 'field_auto_import',
  'field_name' => 'group_meetup',
  'type' => 'group',
  'trigger_values' => 
  array (
    1 => '1',
  ),
);
return $items;
}
