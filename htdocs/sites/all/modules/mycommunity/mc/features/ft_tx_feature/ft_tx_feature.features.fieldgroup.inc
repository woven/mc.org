<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function ft_tx_feature_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_taxonomy_tagline
  $groups['taxonomy_feature-group_taxonomy_tagline'] = array(
    'group_type' => 'standard',
    'type_name' => 'taxonomy_feature',
    'group_name' => 'group_taxonomy_tagline',
    'label' => 'Tagline',
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
    'weight' => '34',
    'fields' => array(
      '0' => 'field_taxonomy_tagline_icon',
      '1' => 'field_taxonomy_tagline_text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Tagline');

  return $groups;
}
