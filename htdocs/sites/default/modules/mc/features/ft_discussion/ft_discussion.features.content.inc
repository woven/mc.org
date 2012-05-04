<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ft_discussion_content_default_fields() {
  $fields = array();

  // Exported field: field_list_image
  $fields['forum-field_list_image'] = array(
    'field_name' => 'field_list_image',
    'type_name' => 'forum',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
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
      'weight' => '5',
      'parent' => '',
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
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
      'weight' => '17',
      'description' => 'Upload an image to be displayed on the lists of content',
      'type' => 'imagefield_crop_widget',
      'module' => 'imagefield_crop',
    ),
  );

  // Exported field: field_enable_discussions
  $fields['group-field_enable_discussions'] = array(
    'field_name' => 'field_enable_discussions',
    'type_name' => 'group',
    'display_settings' => array(
      'weight' => '30',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
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
      'secondary_page' => array(
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '0|Disable Discussions in this Group
1|Enable Discussions in this Group',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Enable or Disable Discussions',
      'weight' => '30',
      'description' => 'Should this group allow to create discussions?',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_welcome_email
  $fields['group-field_welcome_email'] = array(
    'field_name' => 'field_welcome_email',
    'type_name' => 'group',
    'display_settings' => array(
      'weight' => '27',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
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
      'secondary_page' => array(
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
      'rows' => '20',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_welcome_email][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Welcome Email',
      'weight' => '27',
      'description' => 'This is the message the welcome email will contain. The [large_name], [small_name], [user_profile], [site_name], [email_group], [group_address], [group_discussion] token in the message will be replaced by the corresponding text. Make sure these tokens are always included in the message.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Enable or Disable Discussions');
  t('Images');
  t('Welcome Email');

  return $fields;
}
