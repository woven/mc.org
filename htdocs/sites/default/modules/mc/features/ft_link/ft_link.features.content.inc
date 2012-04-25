<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ft_link_content_default_fields() {
  $fields = array();

  // Exported field: field_editorial
  $fields['link-field_editorial'] = array(
    'field_name' => 'field_editorial',
    'type_name' => 'link',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-90',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'number_integer',
        'parent_id' => '',
        'field_id' => 'field_editorial',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-90',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '1',
    'allowed_values' => '0|Not Editorial Content
1|Editorial Content',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
          '_error_element' => 'default_value_widget][field_editorial][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Editorial Content',
      'weight' => '38',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_link
  $fields['link-field_link'] = array(
    'field_name' => 'field_link',
    'type_name' => 'link',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-97',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'link',
        'parent_id' => '',
        'field_id' => 'field_link',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-97',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '1',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Link',
      'weight' => '39',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_related
  $fields['link-field_related'] = array(
    'field_name' => 'field_related',
    'type_name' => 'link',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-89',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'nodereference',
        'parent_id' => '',
        'field_id' => 'field_related',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-89',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '4',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'gallery' => 'gallery',
      'article' => 'article',
      'audio' => 'audio',
      'event' => 'event',
      'link' => 'link',
      'gallery_image' => 'gallery_image',
      'place' => 'place',
      'video' => 'video',
      'feedapi_node' => 0,
      'file' => 0,
      'group' => 0,
      'image' => 0,
      'simplenews' => 0,
      'webform' => 0,
      'npage' => 0,
      'nnews' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_related][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Related Content',
      'weight' => '37',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Editorial Content');
  t('Link');
  t('Related Content');

  return $fields;
}
