<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ft_event_content_default_fields() {
  $fields = array();

  // Exported field: field_list_image
  $fields['event-field_list_image'] = array(
    'field_name' => 'field_list_image',
    'type_name' => 'event',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-19',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'medium__colorbox',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_list_image',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-19',
      ),
      '5' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'node_image_default',
        'css-class' => '',
        'region' => 'right',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_list_image',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-97',
      ),
      'weight' => '11',
      'parent' => '',
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
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
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
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
      'use_default_image' => 0,
      'label' => 'Images',
      'weight' => '9',
      'description' => 'You may upload an image to be associated with this post.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_online_event
  $fields['event-field_online_event'] = array(
    'field_name' => 'field_online_event',
    'type_name' => 'event',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-19',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'number_integer',
        'parent_id' => '',
        'field_id' => 'field_online_event',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-19',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
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
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|This is NOT an online event
1|This is an online event',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Online Event',
      'weight' => '33',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_place
  $fields['event-field_place'] = array(
    'field_name' => 'field_place',
    'type_name' => 'event',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-19',
      'full' => array(
        'label' => array(
          'format' => 'inline',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'nodereference',
        'parent_id' => '',
        'field_id' => 'field_place',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-19',
      ),
      '5' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'nodereference',
        'parent_id' => '',
        'field_id' => 'field_place',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-86',
      ),
      'teaser' => array(
        'format' => 'default',
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
      'list' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'bubble' => array(
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
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'place' => 'place',
      'gallery' => 0,
      'article' => 0,
      'audio' => 0,
      'forum' => 0,
      'event' => 0,
      'file' => 0,
      'group' => 0,
      'npage' => 0,
      'link' => 0,
      'nnews' => 0,
      'page' => 0,
      'gallery_image' => 0,
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
          '_error_element' => 'default_value_widget][field_place][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Place',
      'weight' => '11',
      'description' => 'If the place where the event is taking place has been already added, you can select it here. Start typing and then select the name of the place.',
      'type' => 'noderefcreate_autocomplete',
      'module' => 'noderefcreate',
    ),
  );

  // Exported field: field_related
  $fields['event-field_related'] = array(
    'field_name' => 'field_related',
    'type_name' => 'event',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-19',
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
        'weight' => '-19',
      ),
      '5' => array(
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
        'weight' => '-85',
      ),
      'weight' => '9',
      'parent' => '',
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
      'news' => 0,
      'simplenews' => 0,
      'page' => 0,
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
          '_error_element' => 'default_value_widget][field_related][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Reference Related Content',
      'weight' => '12',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Images');
  t('Online Event');
  t('Place');
  t('Reference Related Content');

  return $fields;
}
