<?php

/**
 * Implementation of hook_content_default_fields().
 */
function views_gallery_content_default_fields() {
  $fields = array();

  // Exported field: field_addphoto
  $fields['gallery-field_addphoto'] = array(
    'field_name' => 'field_addphoto',
    'type_name' => 'gallery',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-85',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => '',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'markup',
        'parent_id' => '',
        'field_id' => 'field_addphoto',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-85',
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
    'minimum_widgets' => '1',
    'type' => 'markup',
    'required' => '0',
    'multiple' => '0',
    'module' => 'markup',
    'active' => '1',
    'markup' => '',
    'markup_php' => '',
    'widget' => array(
      'display_style' => NULL,
      'label' => 'Add New Photo',
      'weight' => '9',
      'description' => '',
      'minimum_widgets' => '1',
      'type' => 'markup',
      'module' => 'markup',
    ),
  );

  // Exported field: field_gallery_image
  $fields['gallery-field_gallery_image'] = array(
    'field_name' => 'field_gallery_image',
    'type_name' => 'gallery',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-79',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_gallery_image',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-79',
      ),
      'weight' => '-3',
      'parent' => '',
      'teaser' => array(
        'format' => 'thumb_linked',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'reg_linked',
      ),
      '2' => array(
        'format' => 'reg_linked',
      ),
      '3' => array(
        'format' => 'reg_linked',
      ),
    ),
    'widget_active' => '1',
    'minimum_widgets' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
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
      'file_extensions' => 'jpg jpeg png gif',
      'file_path' => 'photos',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '2M',
      'max_filesize_per_node' => '',
      'max_resolution' => '2000x2000',
      'min_resolution' => '100x100',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Album Cover',
      'weight' => '-3',
      'description' => 'Upload an image to be the cover art for your gallery',
      'minimum_widgets' => '1',
      'type' => 'imagefield_crop_widget',
      'module' => 'imagefield_crop',
    ),
  );

  // Exported field: field_public_album
  $fields['gallery-field_public_album'] = array(
    'field_name' => 'field_public_album',
    'type_name' => 'gallery',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-84',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'number_integer',
        'parent_id' => '',
        'field_id' => 'field_public_album',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-84',
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
    'minimum_widgets' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|
1|Album is open',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 1,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Album is open',
      'weight' => '-2',
      'description' => 'If this album is open, the community can add photos to it.',
      'minimum_widgets' => '1',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_gallery
  $fields['gallery_image-field_gallery'] = array(
    'field_name' => 'field_gallery',
    'type_name' => 'gallery_image',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-99',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'header',
        'type' => 'nodereference',
        'parent_id' => '',
        'field_id' => 'field_gallery',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-99',
      ),
      'teaser' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'header',
        'type' => 'nodereference',
        'parent_id' => '',
        'field_id' => 'field_gallery',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-100',
      ),
      'weight' => '-7',
      'parent' => '',
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'minimum_widgets' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'gallery' => 'gallery',
      'group' => 0,
      'gallery_image' => 0,
      'image' => 0,
      'page' => 0,
      'story' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'node_link' => array(
        'teaser' => 0,
        'full' => 1,
        'title' => 'Add photo',
        'hover_title' => 'Add a new photo to this gallery',
        'destination' => 'node',
      ),
      'fallback' => 'select',
      'edit_fallback' => 1,
      'label' => 'Album',
      'weight' => '-7',
      'description' => '',
      'minimum_widgets' => '1',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
    ),
  );

  // Exported field: field_gallery_image
  $fields['gallery_image-field_gallery_image'] = array(
    'field_name' => 'field_gallery_image',
    'type_name' => 'gallery_image',
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
        'format' => 'photo_gallery_big_default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_gallery_image',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-97',
      ),
      'teaser' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'photo_gallery_big_default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_gallery_image',
        'label_value' => '',
        'exclude' => 0,
        'weight' => '-98',
      ),
      'weight' => '-8',
      'parent' => '',
      '4' => array(
        'format' => 'reg_linked',
      ),
      '2' => array(
        'format' => 'reg_linked',
      ),
      '3' => array(
        'format' => 'reg_linked',
      ),
    ),
    'widget_active' => '1',
    'minimum_widgets' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
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
      'file_extensions' => 'jpg jpeg png gif',
      'file_path' => 'photos',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '2M',
      'max_filesize_per_node' => '',
      'max_resolution' => '640x400',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '-9',
      'description' => '',
      'minimum_widgets' => '1',
      'type' => 'imagefield_crop_widget',
      'module' => 'imagefield_crop',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add New Photo');
  t('Album');
  t('Album Cover');
  t('Album is open');
  t('Image');

  return $fields;
}
