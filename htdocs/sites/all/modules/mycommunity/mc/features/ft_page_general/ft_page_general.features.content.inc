<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ft_page_general_content_default_fields() {
  $fields = array();

  // Exported field: field_list_image
  $fields['page-field_list_image'] = array(
    'field_name' => 'field_list_image',
    'type_name' => 'page',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-83',
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
        'weight' => '-83',
      ),
      'weight' => '7',
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
      'resolution' => '0',
      'enforce_ratio' => 0,
      'croparea' => '400x400',
      'enforce_minimum' => 0,
      'label' => 'Images',
      'weight' => '-2',
      'description' => 'You may upload an image to be associated with this post.',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Images');

  return $fields;
}