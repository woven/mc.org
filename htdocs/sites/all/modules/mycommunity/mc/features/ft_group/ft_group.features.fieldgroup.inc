<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function ft_group_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_manual_entry
  $groups['group-group_manual_entry'] = array(
    'group_type' => 'standard',
    'type_name' => 'group',
    'group_name' => 'group_manual_entry',
    'label' => 'Manually create a group',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '32',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'bubble' => array(
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
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '32',
    'fields' => array(
      '0' => 'field_small_name',
      '1' => 'field_logo',
      '2' => 'field_header_color',
      '3' => 'field_header_title_color',
      '4' => 'field_about',
      '5' => 'field_list_image',
      '6' => 'field_group_featured_items',
    ),
  );

  // Exported group: group_meetup
  $groups['group-group_meetup'] = array(
    'group_type' => 'standard',
    'type_name' => 'group',
    'group_name' => 'group_meetup',
    'label' => 'Import from Meetup',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '33',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'bubble' => array(
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
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '33',
    'fields' => array(
      '0' => 'field_group_url',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Import from Meetup');
  t('Manually create a group');

  return $groups;
}
