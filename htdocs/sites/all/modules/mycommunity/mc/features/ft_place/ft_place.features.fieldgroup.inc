<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function ft_place_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_hideus
  $groups['place-group_hideus'] = array(
    'group_type' => 'standard',
    'type_name' => 'place',
    'group_name' => 'group_hideus',
    'label' => 'Hidden Fields',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'bubble' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'secondary_page' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'block' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'search' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '26',
    'fields' => array(
      '0' => 'field_logo',
      '1' => 'field_contact_name',
      '2' => 'field_fax',
      '3' => 'field_open_in_evening',
      '4' => 'field_open_on_weekends',
      '5' => 'field_hours',
      '6' => 'field_place_type',
      '7' => 'field_cost_per_session',
      '8' => 'field_tech_center_type',
      '9' => 'field_wireless_hotspot',
      '10' => 'field_wireless_cost',
      '11' => 'field_computers_with_internet',
      '12' => 'field_computer_cost',
      '13' => 'field_health_services',
      '14' => 'field_health_insurance',
      '15' => 'field_special_features',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Hidden Fields');

  return $groups;
}
