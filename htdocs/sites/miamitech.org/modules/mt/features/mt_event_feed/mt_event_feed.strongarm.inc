<?php

/**
 * Implementation of hook_strongarm().
 */
function mt_event_feed_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_event_feed';
  $strongarm->value = 0;
  $export['comment_anonymous_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_event_feed';
  $strongarm->value = '3';
  $export['comment_controls_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_event_feed';
  $strongarm->value = '4';
  $export['comment_default_mode_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_event_feed';
  $strongarm->value = '1';
  $export['comment_default_order_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_event_feed';
  $strongarm->value = '50';
  $export['comment_default_per_page_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_event_feed';
  $strongarm->value = '2';
  $export['comment_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_event_feed';
  $strongarm->value = '0';
  $export['comment_form_location_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_event_feed';
  $strongarm->value = '1';
  $export['comment_preview_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_event_feed';
  $strongarm->value = '1';
  $export['comment_subject_field_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_event_feed';
  $strongarm->value = 1;
  $export['enable_revisions_page_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'event_nodeapi_event_feed';
  $strongarm->value = 'never';
  $export['event_nodeapi_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feedapi_event_feed';
  $strongarm->value = array(
    0 => 'enabled',
    1 => 'upload_method',
    2 => 'refresh_on_create',
    3 => 'update_existing',
    4 => 'refresh_time',
    5 => 'parsers',
    6 => 'processors',
  );
  $export['feedapi_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feedapi_settings_event_feed';
  $strongarm->value = array(
    'enabled' => 1,
    'upload_method' => 'url',
    'refresh_on_create' => 1,
    'update_existing' => 1,
    'refresh_time' => '1800',
    'items_delete' => '0',
    'parsers' => array(
      'parser_ical' => array(
        'enabled' => 1,
        'weight' => '0',
      ),
    ),
    'processors' => array(
      'feedapi_node' => array(
        'enabled' => 1,
        'weight' => '0',
        'content_type' => 'event',
        'input_format' => '1',
        'node_date' => 'feed',
        'x_dedupe' => '0',
      ),
    ),
  );
  $export['feedapi_settings_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_event_feed';
  $strongarm->value = '0';
  $export['location_defaultnum_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_event_feed';
  $strongarm->value = '0';
  $export['location_maxnum_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_event_feed';
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
  $export['location_settings_node_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_event_feed_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Title',
      'hidden' => 0,
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '0',
      'hidden' => 0,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '30',
      'has_required' => FALSE,
      'title' => 'Comment settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'path' => array(
      'region' => 'right',
      'weight' => '30',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '25',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '20',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'og_nodeapi' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => TRUE,
      'title' => 'Groups',
      'collapsed' => 0,
    ),
    'feedapi' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Feed',
      'collapsed' => 0,
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_event_feed_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_event_feed';
  $strongarm->value = array(
    'nfs_submission_body_rows' => '20',
    'nfs_splitsummary' => '1',
    'nfs_inputformat' => '1',
    'nfs_revisionlog' => '0',
    'nfs_author_information' => '0',
    'nfs_path' => '0',
    'nfs_menu' => '0',
    'nfs_publishingoptions' => '0',
    'nfs_comments' => '0',
    'nfs_taxonomy' => '0',
    'nfs_preview' => '1',
    'nfs_cancel' => array(
      'nfs_cancel_status' => '1',
      'nfs_cancel_behaviour' => '0',
    ),
    'nfs_submit' => 'Save',
    'nfs_hide_node_title' => '0',
    'nfs_title_create' => 'Add !node_type',
    'nfs_title_edit' => '!node_title',
  );
  $export['nodeformsettings_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_event_feed';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_event_feed';
  $strongarm->value = 'group_post_standard';
  $export['og_content_type_usage_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_max_groups_event_feed';
  $strongarm->value = '';
  $export['og_max_groups_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_event_feed';
  $strongarm->value = 0;
  $export['show_diff_inline_event_feed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_event_feed';
  $strongarm->value = 1;
  $export['show_preview_changes_event_feed'] = $strongarm;

  return $export;
}
