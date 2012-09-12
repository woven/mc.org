<?php

/**
 * Implementation of hook_strongarm().
 */
function ft_page_general_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_page';
  $strongarm->value = 0;
  $export['comment_anonymous_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_page';
  $strongarm->value = '3';
  $export['comment_controls_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_page';
  $strongarm->value = '4';
  $export['comment_default_mode_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_page';
  $strongarm->value = '1';
  $export['comment_default_order_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_page';
  $strongarm->value = '0';
  $export['comment_form_location_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = '2';
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_page';
  $strongarm->value = '1';
  $export['comment_preview_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_page';
  $strongarm->value = '1';
  $export['comment_subject_field_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_page';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-3',
    'revision_information' => '1',
    'author' => '0',
    'options' => '2',
    'comment_settings' => '5',
    'menu' => '-4',
    'path' => '6',
    'print' => '3',
    'xmlsitemap' => '4',
    'nodewords' => '-1',
  );
  $export['content_extra_weights_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_page';
  $strongarm->value = 0;
  $export['enable_revisions_page_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'event_nodeapi_page';
  $strongarm->value = 'never';
  $export['event_nodeapi_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_page';
  $strongarm->value = '0';
  $export['location_defaultnum_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_page';
  $strongarm->value = '0';
  $export['location_maxnum_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_page';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '0',
      'add' => '0',
    ),
    'form' => array(
      'weight' => 0,
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => 0,
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nd_display_settings_page';
  $strongarm->value = array(
    'secondary_page' => array(
      'fields' => array(
        'field_page_type' => array(
          'region' => 'disabled',
          'weight' => '-74',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_page_subtype' => array(
          'region' => 'disabled',
          'weight' => '-82',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_disclaimer_markup_top' => array(
          'region' => 'disabled',
          'weight' => '-83',
          'format' => '',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_disclaimer_markup' => array(
          'region' => 'disabled',
          'weight' => '-84',
          'format' => '',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_list_image' => array(
          'region' => 'disabled',
          'weight' => '-86',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_featured_group' => array(
          'region' => 'disabled',
          'weight' => '-85',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_featured_photo' => array(
          'region' => 'disabled',
          'weight' => '-81',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_featured_place' => array(
          'region' => 'disabled',
          'weight' => '-80',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_featured_items' => array(
          'region' => 'disabled',
          'weight' => '-75',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_featured_events' => array(
          'region' => 'disabled',
          'weight' => '-76',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_featured_groups' => array(
          'region' => 'disabled',
          'weight' => '-77',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_featured_places' => array(
          'region' => 'disabled',
          'weight' => '-79',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_featured_audio_video_items' => array(
          'region' => 'disabled',
          'weight' => '-78',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'field_featured_members' => array(
          'region' => 'disabled',
          'weight' => '-87',
          'format' => 'default',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'title' => array(
          'region' => 'disabled',
          'weight' => '-88',
          'format' => 'nd_title_h1_nolink',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'author' => array(
          'region' => 'disabled',
          'weight' => '-93',
          'format' => 'ds_author_nolink',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'links' => array(
          'region' => 'disabled',
          'weight' => '-94',
          'format' => '',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'read_more' => array(
          'region' => 'disabled',
          'weight' => '-95',
          'format' => 'ds_eval_code',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'post_date' => array(
          'region' => 'disabled',
          'weight' => '-96',
          'format' => 'nd_post_date_long',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'body' => array(
          'region' => 'middle',
          'weight' => '-98',
          'format' => 'nd_bodyfield',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'custom_pager_top' => array(
          'region' => 'disabled',
          'weight' => '-92',
          'format' => 'ds_eval_code',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'corner_peel' => array(
          'region' => 'disabled',
          'weight' => '-91',
          'format' => 'ds_eval_code',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'nodes_header' => array(
          'region' => 'header',
          'weight' => '-100',
          'format' => 'ds_eval_code',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'nodes_slideshow' => array(
          'region' => 'middle',
          'weight' => '-99',
          'format' => 'ds_eval_code',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'nodes_print_email' => array(
          'region' => 'middle',
          'weight' => '-97',
          'format' => 'ds_eval_code',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'nodes_slideshow_code' => array(
          'region' => 'disabled',
          'weight' => '-90',
          'format' => 'ds_eval_code',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
        'address_formatted' => array(
          'region' => 'disabled',
          'weight' => '-89',
          'format' => 'ds_eval_code',
          'css-class' => '',
          'labelformat' => 'hidden',
        ),
      ),
      'regiontoblock' => array(
        'block' => array(
          'header' => 0,
          'left' => 0,
          'middle' => 0,
          'right' => 0,
          'footer' => 0,
        ),
      ),
      'status' => 1,
      'region_styles' => array(
        'header' => '',
        'left' => '',
        'middle' => '',
        'right' => '',
        'footer' => '',
      ),
    ),
  );
  $export['nd_display_settings_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_page';
  $strongarm->value = array(
    'nfs_submission_body_rows' => '20',
    'nfs_splitsummary' => '1',
    'nfs_inputformat' => '0',
    'nfs_revisionlog' => '0',
    'nfs_author_information' => '0',
    'nfs_path' => '0',
    'nfs_menu' => '0',
    'nfs_publishingoptions' => '0',
    'nfs_comments' => '0',
    'nfs_taxonomy' => '0',
    'nfs_preview' => '1',
    'nfs_cancel' => array(
      'nfs_cancel_status' => '0',
      'nfs_cancel_behaviour' => '0',
    ),
    'nfs_submit' => 'Save',
    'nfs_hide_node_title' => '0',
    'nfs_title_create' => 'Create Page',
    'nfs_title_edit' => '!node_title',
  );
  $export['nodeformsettings_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_edit_metatags_page';
  $strongarm->value = 1;
  $export['nodewords_edit_metatags_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_filter_modules_output_page';
  $strongarm->value = array();
  $export['nodewords_filter_modules_output_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_filter_regexp_page';
  $strongarm->value = '';
  $export['nodewords_filter_regexp_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_metatags_generation_method_page';
  $strongarm->value = '0';
  $export['nodewords_metatags_generation_method_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_metatags_generation_source_page';
  $strongarm->value = '2';
  $export['nodewords_metatags_generation_source_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_use_alt_attribute_page';
  $strongarm->value = 1;
  $export['nodewords_use_alt_attribute_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_page';
  $strongarm->value = 'omitted';
  $export['og_content_type_usage_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_max_groups_page';
  $strongarm->value = '';
  $export['og_max_groups_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_page';
  $strongarm->value = '';
  $export['page_title_type_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_page_showfield';
  $strongarm->value = 0;
  $export['page_title_type_page_showfield'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = 'about/[title-raw]';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_page';
  $strongarm->value = 0;
  $export['show_diff_inline_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_page';
  $strongarm->value = 0;
  $export['show_preview_changes_page'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_page';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_page'] = $strongarm;

  return $export;
}
