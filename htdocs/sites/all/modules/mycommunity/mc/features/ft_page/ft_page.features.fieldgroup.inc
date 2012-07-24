<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function ft_page_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_block
  $groups['npage-group_block'] = array(
    'group_type' => 'standard',
    'type_name' => 'npage',
    'group_name' => 'group_block',
    'label' => 'Help Block',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '24',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
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
        'secondary_page' => array(
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
    'weight' => '24',
    'fields' => array(
      '0' => 'field_block_title',
      '1' => 'field_block_body',
      '2' => 'field_block_link',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Help Block');

  return $groups;
}
