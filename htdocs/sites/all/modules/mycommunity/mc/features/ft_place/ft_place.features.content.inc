<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ft_place_content_default_fields() {
  $fields = array();

  // Exported field: field_computer_cost
  $fields['place-field_computer_cost'] = array(
    'field_name' => 'field_computer_cost',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-74',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_computer_cost',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-74',
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
          '_error_element' => 'default_value_widget][field_computer_cost][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Cost (computer)',
      'weight' => '23',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_computers_with_internet
  $fields['place-field_computers_with_internet'] = array(
    'field_name' => 'field_computers_with_internet',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-88',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'number_integer',
        'parent_id' => '',
        'field_id' => 'field_computers_with_internet',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-88',
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
    'min' => '',
    'max' => '',
    'allowed_values' => '0|No computers with internet access
1|Has computers with internet access',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Computers with internet access',
      'weight' => '22',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_contact_name
  $fields['place-field_contact_name'] = array(
    'field_name' => 'field_contact_name',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-73',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_contact_name',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-73',
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => NULL,
      'size' => NULL,
      'label' => 'Contact name',
      'weight' => '24',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_cost_per_session
  $fields['place-field_cost_per_session'] = array(
    'field_name' => 'field_cost_per_session',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-87',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'number_decimal',
        'parent_id' => '',
        'field_id' => 'field_cost_per_session',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-87',
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
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '$',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_cost_per_session][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Cost per Session',
      'weight' => '18',
      'description' => 'Give the average or usual cost of exercising here. If the cost is more complex, try to give a reasonable dollar value here, and put more details in the \'Additional information\' section below. This will allow places to exercise to be sorted by cost.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_email
  $fields['place-field_email'] = array(
    'field_name' => 'field_email',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-64',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_email',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-64',
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
      'rows' => 1,
      'size' => NULL,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_email][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Email address',
      'weight' => '27',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_fax
  $fields['place-field_fax'] = array(
    'field_name' => 'field_fax',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-65',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_fax',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-65',
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => NULL,
      'size' => NULL,
      'label' => 'Fax number',
      'weight' => '26',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_health_insurance
  $fields['place-field_health_insurance'] = array(
    'field_name' => 'field_health_insurance',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-82',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_health_insurance',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-82',
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
      'rows' => '15',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_health_insurance][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Insurance',
      'weight' => '30',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_health_services
  $fields['place-field_health_services'] = array(
    'field_name' => 'field_health_services',
    'type_name' => 'place',
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
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_health_services',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-83',
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
      'rows' => '15',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_health_services][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Services',
      'weight' => '29',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_hours
  $fields['place-field_hours'] = array(
    'field_name' => 'field_hours',
    'type_name' => 'place',
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
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_hours',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-84',
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
      'rows' => 1,
      'size' => NULL,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_hours][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Hours',
      'weight' => '15',
      'description' => 'Eg: 9am-5pm Mon-Fri, 10am-4pm Sat, Closed Sundays',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_list_image
  $fields['place-field_list_image'] = array(
    'field_name' => 'field_list_image',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-51',
      'full' => array(
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
        'weight' => '-51',
      ),
      'weight' => '5',
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
      'use_default_image' => 1,
      'label' => 'Images',
      'weight' => '13',
      'description' => 'You may upload an image to be associated with this post.',
      'type' => 'imagefield_crop_widget',
      'module' => 'imagefield_crop',
    ),
  );

  // Exported field: field_logo
  $fields['place-field_logo'] = array(
    'field_name' => 'field_logo',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-72',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'filefield',
        'parent_id' => '',
        'field_id' => 'field_logo',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-72',
      ),
      'teaser' => array(
        'format' => 'image_plain',
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
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 0,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'jpg jpeg png gif',
      'file_path' => 'logos',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '500K',
      'max_filesize_per_node' => '',
      'max_resolution' => '640x480',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'resolution' => '0',
      'enforce_ratio' => 0,
      'croparea' => '400x400',
      'enforce_minimum' => 0,
      'file_widgets' => NULL,
      'label' => 'Logo',
      'weight' => '12',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_open_in_evening
  $fields['place-field_open_in_evening'] = array(
    'field_name' => 'field_open_in_evening',
    'type_name' => 'place',
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
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_open_in_evening',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-85',
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Not open in the evening
Open in the evening',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
          '_error_element' => 'default_value_widget][field_open_in_evening][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Open in the evening?',
      'weight' => '16',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_open_on_weekends
  $fields['place-field_open_on_weekends'] = array(
    'field_name' => 'field_open_on_weekends',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-86',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_open_on_weekends',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-86',
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
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Not open on weekends
Open on weekends',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'Open on weekends',
          '_error_element' => 'default_value_widget][field_open_on_weekends][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Open on weekends?',
      'weight' => '17',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_phone_number
  $fields['place-field_phone_number'] = array(
    'field_name' => 'field_phone_number',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-66',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_phone_number',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-66',
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => NULL,
      'size' => NULL,
      'label' => 'Phone number',
      'weight' => '25',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_place_type
  $fields['place-field_place_type'] = array(
    'field_name' => 'field_place_type',
    'type_name' => 'place',
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
          'format' => 'above',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'middle',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_place_type',
        'label_value' => 'Place Type',
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
    'allowed_values' => 'exercise|Place to Exercise
food|Place to Get Food
get_online|Place to Get Online
healthcare_facility|Healthcare Facility
environmental_resource|Environmental Resource
spirit_and_mind|Place for the Spirit and Mind',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'exercise',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Place Type',
      'weight' => '9',
      'description' => 'Choose the type of place. The fields below will be displayed according to the option you choose in this field.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_special_features
  $fields['place-field_special_features'] = array(
    'field_name' => 'field_special_features',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-70',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_special_features',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-70',
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
      'rows' => '15',
      'size' => NULL,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '3',
          '_error_element' => 'default_value_widget][field_special_features][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Special features / Additional information',
      'weight' => '32',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_tech_center_type
  $fields['place-field_tech_center_type'] = array(
    'field_name' => 'field_tech_center_type',
    'type_name' => 'place',
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
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_tech_center_type',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-79',
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
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'bookstore|Bookstore
cafe|Cafe
copy_center|Copy center
internet_cafe|Internet cafe
library|Library
recreation_center|Recreation center
religious_organization|Religious organization
community_organization|Community organization
other|Other',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Type of tech center',
      'weight' => '19',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_website
  $fields['place-field_website'] = array(
    'field_name' => 'field_website',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-63',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'link',
        'parent_id' => '',
        'field_id' => 'field_website',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-63',
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
    'type' => 'link',
    'required' => '0',
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
    'title' => 'none',
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
      'label' => 'Website',
      'weight' => '28',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_wireless_cost
  $fields['place-field_wireless_cost'] = array(
    'field_name' => 'field_wireless_cost',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-81',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'text',
        'parent_id' => '',
        'field_id' => 'field_wireless_cost',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-81',
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
          '_error_element' => 'default_value_widget][field_wireless_cost][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Cost (wireless)',
      'weight' => '21',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_wireless_hotspot
  $fields['place-field_wireless_hotspot'] = array(
    'field_name' => 'field_wireless_hotspot',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-80',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'number_integer',
        'parent_id' => '',
        'field_id' => 'field_wireless_hotspot',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-80',
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
    'min' => '',
    'max' => '',
    'allowed_values' => '0|Not a wireless hotspot
1|Is a wireless hotspot',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Wireless hotspot?',
      'weight' => '20',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Computers with internet access');
  t('Contact name');
  t('Cost (computer)');
  t('Cost (wireless)');
  t('Cost per Session');
  t('Email address');
  t('Fax number');
  t('Hours');
  t('Images');
  t('Insurance');
  t('Logo');
  t('Open in the evening?');
  t('Open on weekends?');
  t('Phone number');
  t('Place Type');
  t('Services');
  t('Special features / Additional information');
  t('Type of tech center');
  t('Website');
  t('Wireless hotspot?');

  return $fields;
}
