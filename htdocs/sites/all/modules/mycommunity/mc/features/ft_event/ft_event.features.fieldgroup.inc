<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function ft_event_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_place
  $groups['event-group_place'] = array(
    'group_type' => 'standard',
    'type_name' => 'event',
    'group_name' => 'group_place',
    'label' => 'Place',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
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
        '5' => array(
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
      ),
    ),
    'weight' => '13',
    'fields' => array(
      '0' => 'field_place_choice',
      '1' => 'field_place',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Place');

  return $groups;
}
