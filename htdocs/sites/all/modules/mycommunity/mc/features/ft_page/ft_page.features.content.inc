<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ft_page_content_default_fields() {
  $fields = array();

  // Exported field: field_block_body
  $fields['npage-field_block_body'] = array(
    'field_name' => 'field_block_body',
    'type_name' => 'npage',
    'display_settings' => array(
      'weight' => '26',
      'parent' => 'group_block',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'bubble' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'secondary_page' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'block' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_block_body][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Block Body',
      'weight' => '26',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_block_link
  $fields['npage-field_block_link'] = array(
    'field_name' => 'field_block_link',
    'type_name' => 'npage',
    'display_settings' => array(
      'weight' => '27',
      'parent' => 'group_block',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'bubble' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'secondary_page' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'block' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Block Link ',
      'weight' => '27',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_block_title
  $fields['npage-field_block_title'] = array(
    'field_name' => 'field_block_title',
    'type_name' => 'npage',
    'display_settings' => array(
      'weight' => '25',
      'parent' => 'group_block',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'bubble' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'secondary_page' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'block' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_block_title][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Block Title',
      'weight' => '25',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_featured_audio_video_items
  $fields['npage-field_featured_audio_video_items'] = array(
    'field_name' => 'field_featured_audio_video_items',
    'type_name' => 'npage',
    'display_settings' => array(
      'weight' => '13',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-78',
      'secondary_page' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'nodereference',
        'parent_id' => '',
        'field_id' => 'field_featured_audio_video_items',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-78',
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
      'list' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'bubble' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'block' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'search' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'audio' => 'audio',
      'video' => 'video',
      'article' => 0,
      'environmental_resource' => 0,
      'event' => 0,
      'feature_spot' => 0,
      'feedapi_node' => 0,
      'file' => 0,
      'gallery' => 0,
      'gallery_image' => 0,
      'group' => 0,
      'healthcare_facility' => 0,
      'front_picture' => 0,
      'image' => 0,
      'link' => 0,
      'embmedia' => 0,
      'news' => 0,
      'simplenews' => 0,
      'place' => 0,
      'spirit_and_mind' => 0,
      'webform' => 0,
      'npage' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_featured_audio_video_items][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Featured Audio and Video Items',
      'weight' => '13',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_featured_events
  $fields['npage-field_featured_events'] = array(
    'field_name' => 'field_featured_events',
    'type_name' => 'npage',
    'display_settings' => array(
      'weight' => '10',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-76',
      'secondary_page' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'nodereference',
        'parent_id' => '',
        'field_id' => 'field_featured_events',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-76',
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
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'event' => 'event',
      'gallery' => 0,
      'article' => 0,
      'audio' => 0,
      'forum' => 0,
      'file' => 0,
      'group' => 0,
      'npage' => 0,
      'link' => 0,
      'nnews' => 0,
      'page_general' => 0,
      'gallery_image' => 0,
      'place' => 0,
      'taxonomy_feature' => 0,
      'taxonomy_topic' => 0,
      'video' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_featured_events][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Featured Events',
      'weight' => '10',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_featured_group
  $fields['npage-field_featured_group'] = array(
    'field_name' => 'field_featured_group',
    'type_name' => 'npage',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-85',
      'secondary_page' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'nodereference',
        'parent_id' => '',
        'field_id' => 'field_featured_group',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-85',
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
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'group' => 'group',
      'article' => 0,
      'audio' => 0,
      'environmental_resource' => 0,
      'event' => 0,
      'feature_spot' => 0,
      'feedapi_node' => 0,
      'file' => 0,
      'gallery' => 0,
      'gallery_image' => 0,
      'healthcare_facility' => 0,
      'front_picture' => 0,
      'image' => 0,
      'link' => 0,
      'embmedia' => 0,
      'news' => 0,
      'simplenews' => 0,
      'place' => 0,
      'spirit_and_mind' => 0,
      'video' => 0,
      'webform' => 0,
      'npage' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_featured_group][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Featured Group',
      'weight' => '6',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_featured_groups
  $fields['npage-field_featured_groups'] = array(
    'field_name' => 'field_featured_groups',
    'type_name' => 'npage',
    'display_settings' => array(
      'weight' => '11',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-77',
      'secondary_page' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'nodereference',
        'parent_id' => '',
        'field_id' => 'field_featured_groups',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-77',
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
      'list' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'bubble' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'block' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'search' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'group' => 'group',
      'gallery' => 0,
      'article' => 0,
      'audio' => 0,
      'environmental_resource' => 0,
      'event' => 0,
      'feature_spot' => 0,
      'feedapi_node' => 0,
      'file' => 0,
      'healthcare_facility' => 0,
      'front_picture' => 0,
      'image' => 0,
      'link' => 0,
      'embmedia' => 0,
      'news' => 0,
      'simplenews' => 0,
      'gallery_image' => 0,
      'place' => 0,
      'spirit_and_mind' => 0,
      'video' => 0,
      'webform' => 0,
      'npage' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_featured_groups][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Featured Groups',
      'weight' => '11',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_featured_items
  $fields['npage-field_featured_items'] = array(
    'field_name' => 'field_featured_items',
    'type_name' => 'npage',
    'display_settings' => array(
      'weight' => '9',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-75',
      'secondary_page' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'nodereference',
        'parent_id' => '',
        'field_id' => 'field_featured_items',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-75',
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
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'gallery' => 'gallery',
      'article' => 'article',
      'audio' => 'audio',
      'event' => 'event',
      'group' => 'group',
      'gallery_image' => 'gallery_image',
      'place' => 'place',
      'video' => 'video',
      'forum' => 0,
      'file' => 0,
      'npage' => 0,
      'link' => 0,
      'nnews' => 0,
      'page_general' => 0,
      'taxonomy_feature' => 0,
      'taxonomy_topic' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_featured_items][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Featured Items',
      'weight' => '9',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_featured_members
  $fields['npage-field_featured_members'] = array(
    'field_name' => 'field_featured_members',
    'type_name' => 'npage',
    'display_settings' => array(
      'weight' => '14',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-87',
      'secondary_page' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'userreference',
        'parent_id' => '',
        'field_id' => 'field_featured_members',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-87',
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
      'list' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'bubble' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'block' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'search' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '3',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
      '4' => 0,
      '5' => 0,
      '3' => 0,
    ),
    'referenceable_status' => '1',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_featured_members][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Featured Members',
      'weight' => '14',
      'description' => '',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_featured_photo
  $fields['npage-field_featured_photo'] = array(
    'field_name' => 'field_featured_photo',
    'type_name' => 'npage',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-81',
      'secondary_page' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'nodereference',
        'parent_id' => '',
        'field_id' => 'field_featured_photo',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-81',
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
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'gallery_image' => 'gallery_image',
      'article' => 0,
      'audio' => 0,
      'environmental_resource' => 0,
      'event' => 0,
      'feature_spot' => 0,
      'feedapi_node' => 0,
      'file' => 0,
      'gallery' => 0,
      'group' => 0,
      'healthcare_facility' => 0,
      'front_picture' => 0,
      'image' => 0,
      'link' => 0,
      'embmedia' => 0,
      'news' => 0,
      'simplenews' => 0,
      'place' => 0,
      'spirit_and_mind' => 0,
      'video' => 0,
      'webform' => 0,
      'npage' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_featured_photo][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Featured Photo',
      'weight' => '7',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_featured_place
  $fields['npage-field_featured_place'] = array(
    'field_name' => 'field_featured_place',
    'type_name' => 'npage',
    'display_settings' => array(
      'weight' => '8',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-80',
      'secondary_page' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'nodereference',
        'parent_id' => '',
        'field_id' => 'field_featured_place',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-80',
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
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'place' => 'place',
      'article' => 0,
      'audio' => 0,
      'environmental_resource' => 0,
      'event' => 0,
      'feature_spot' => 0,
      'feedapi_node' => 0,
      'file' => 0,
      'group' => 0,
      'healthcare_facility' => 0,
      'front_picture' => 0,
      'image' => 0,
      'link' => 0,
      'embmedia' => 0,
      'news' => 0,
      'simplenews' => 0,
      'photo' => 0,
      'photo_gallery' => 0,
      'spirit_and_mind' => 0,
      'video' => 0,
      'webform' => 0,
      'npage' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_featured_place][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Featured Place',
      'weight' => '8',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_featured_places
  $fields['npage-field_featured_places'] = array(
    'field_name' => 'field_featured_places',
    'type_name' => 'npage',
    'display_settings' => array(
      'weight' => '12',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-79',
      'secondary_page' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'nodereference',
        'parent_id' => '',
        'field_id' => 'field_featured_places',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-79',
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
      'list' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'bubble' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'block' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'search' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'place' => 'place',
      'article' => 0,
      'audio' => 0,
      'environmental_resource' => 0,
      'event' => 0,
      'feature_spot' => 0,
      'feedapi_node' => 0,
      'file' => 0,
      'gallery' => 0,
      'gallery_image' => 0,
      'group' => 0,
      'healthcare_facility' => 0,
      'front_picture' => 0,
      'image' => 0,
      'link' => 0,
      'embmedia' => 0,
      'news' => 0,
      'simplenews' => 0,
      'spirit_and_mind' => 0,
      'video' => 0,
      'webform' => 0,
      'npage' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_featured_places][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Featured Places',
      'weight' => '12',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_list_image
  $fields['npage-field_list_image'] = array(
    'field_name' => 'field_list_image',
    'type_name' => 'npage',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-86',
      'secondary_page' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_list_image',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-86',
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'resolution' => '0',
      'enforce_ratio' => 0,
      'croparea' => '400x400',
      'enforce_minimum' => 0,
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'default_list_image.JPG',
        'filepath' => 'sites/default/files/imagefield_default_images/default_list_image.JPG',
        'filemime' => 'image/jpeg',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/default_list_image.JPG',
        'filesize' => 9568,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1297655448,
        'fid' => '51253',
      ),
      'use_default_image' => 1,
      'label' => 'Images',
      'weight' => '5',
      'description' => 'Upload an image to be displayed on the lists of content',
      'type' => 'imagefield_crop_widget',
      'module' => 'imagefield_crop',
    ),
  );

  // Exported field: field_page_subtype
  $fields['npage-field_page_subtype'] = array(
    'field_name' => 'field_page_subtype',
    'type_name' => 'npage',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-82',
      'secondary_page' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_page_subtype',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-82',
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
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'home|Homepage
latest|Latest
events|Events
groups|Groups
places|Places
audio-video|Audio and Video
community|Community
blank|Blank',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Page Subtype',
      'weight' => '-1',
      'description' => 'Select the subtype of the page. The fields below will change depending on the setting choose.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_page_type
  $fields['npage-field_page_type'] = array(
    'field_name' => 'field_page_type',
    'type_name' => 'npage',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-74',
      'secondary_page' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_page_type',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-74',
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
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'landing|Landing Page
secondary|Secondary Page',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'secondary',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Page Type',
      'weight' => '-2',
      'description' => 'Select the type of page. The fields below will be displayed based on the option you choose in this field. Also, the layout might be different for each page type.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Block Body');
  t('Block Link ');
  t('Block Title');
  t('Featured Audio and Video Items');
  t('Featured Events');
  t('Featured Group');
  t('Featured Groups');
  t('Featured Items');
  t('Featured Members');
  t('Featured Photo');
  t('Featured Place');
  t('Featured Places');
  t('Images');
  t('Page Subtype');
  t('Page Type');

  return $fields;
}
