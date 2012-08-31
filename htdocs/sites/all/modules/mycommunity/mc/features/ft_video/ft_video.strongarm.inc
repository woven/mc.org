<?php

/**
 * Implementation of hook_strongarm().
 */
function ft_video_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commentformsettings_video';
  $strongarm->value = array(
    'cfs_author' => '0',
    'cfs_newadmin' => '1',
    'cfs_preview' => '1',
    'cfs_title' => '0',
    'cfs_inputformat' => '0',
    'cfs_size' => '10',
    'cfs_submit' => 'Submit',
    'cfs_pnc' => array(
      'cfs_post_new_comment' => '0',
      'cfs_post_new_comment_value' => '',
      'cfs_post_new_comment_tag' => 'h2',
    ),
    'cfs_comment_cancel' => '1',
  );
  $export['commentformsettings_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_video';
  $strongarm->value = 0;
  $export['comment_anonymous_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_video';
  $strongarm->value = '3';
  $export['comment_controls_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_video';
  $strongarm->value = '2';
  $export['comment_default_mode_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_video';
  $strongarm->value = '2';
  $export['comment_default_order_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_video';
  $strongarm->value = '50';
  $export['comment_default_per_page_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_video';
  $strongarm->value = '1';
  $export['comment_form_location_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_video';
  $strongarm->value = '0';
  $export['comment_preview_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_video';
  $strongarm->value = '0';
  $export['comment_subject_field_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_video';
  $strongarm->value = '2';
  $export['comment_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_video';
  $strongarm->value = array(
    'title' => '2',
    'body_field' => '6',
    'revision_information' => '13',
    'author' => '12',
    'options' => '14',
    'comment_settings' => '17',
    'menu' => '4',
    'taxonomy' => '3',
    'path' => '16',
    'attachments' => '18',
    'mollom' => '19',
    'og_nodeapi' => '0',
    'print' => '15',
  );
  $export['content_extra_weights_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_archive';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_archive'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_bliptv';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_bliptv'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_brightcove';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_brightcove'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_dailymotion';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_dailymotion'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_google';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_google'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_guba';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_guba'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_imeem';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_imeem'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_jumpcut';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_jumpcut'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_lastfm';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_lastfm'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_livestream';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_livestream'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_livevideo';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_livevideo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_metacafe';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_metacafe'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_myspace';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_myspace'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_revver';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_revver'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_sevenload';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_sevenload'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_spike';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_spike'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_tudou';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_tudou'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_twistage';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_twistage'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_ustreamlive';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_ustreamlive'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_veoh';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_veoh'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_vimeo';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_vimeo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_voicethread';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_voicethread'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_yahoomusic';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_yahoomusic'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_youtube';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_youtube'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emfield_emvideo_allow_zzz_custom_url';
  $strongarm->value = 1;
  $export['emfield_emvideo_allow_zzz_custom_url'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_google_domain';
  $strongarm->value = 'com';
  $export['emvideo_google_domain'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_guba_api_key';
  $strongarm->value = '';
  $export['emvideo_guba_api_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_guba_api_secret';
  $strongarm->value = '';
  $export['emvideo_guba_api_secret'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_imeem_api_key';
  $strongarm->value = '';
  $export['emvideo_imeem_api_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_imeem_api_secret';
  $strongarm->value = '';
  $export['emvideo_imeem_api_secret'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_livestream_api_key';
  $strongarm->value = '';
  $export['emvideo_livestream_api_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_livestream_autoplay';
  $strongarm->value = 1;
  $export['emvideo_livestream_autoplay'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_livestream_full_screen';
  $strongarm->value = 1;
  $export['emvideo_livestream_full_screen'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_livevideo_api_key';
  $strongarm->value = '';
  $export['emvideo_livevideo_api_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_revver_affiliate_id';
  $strongarm->value = '0';
  $export['emvideo_revver_affiliate_id'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_twistage_allowfullscreen';
  $strongarm->value = 1;
  $export['emvideo_twistage_allowfullscreen'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_twistage_playerprofile';
  $strongarm->value = '';
  $export['emvideo_twistage_playerprofile'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_ustreamlive_api_key';
  $strongarm->value = '';
  $export['emvideo_ustreamlive_api_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_veoh_api_key';
  $strongarm->value = '';
  $export['emvideo_veoh_api_key'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_veoh_api_secret';
  $strongarm->value = '';
  $export['emvideo_veoh_api_secret'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_app_id';
  $strongarm->value = '';
  $export['emvideo_yahoomusic_app_id'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_bandwidth';
  $strongarm->value = '';
  $export['emvideo_yahoomusic_bandwidth'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_bgcolor';
  $strongarm->value = '#000000';
  $export['emvideo_yahoomusic_bgcolor'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_close_enable';
  $strongarm->value = 0;
  $export['emvideo_yahoomusic_close_enable'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_controls_enable';
  $strongarm->value = 1;
  $export['emvideo_yahoomusic_controls_enable'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_event_handler';
  $strongarm->value = '';
  $export['emvideo_yahoomusic_event_handler'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_full_screen';
  $strongarm->value = 1;
  $export['emvideo_yahoomusic_full_screen'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_info_enable';
  $strongarm->value = 1;
  $export['emvideo_yahoomusic_info_enable'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_locale';
  $strongarm->value = 'us';
  $export['emvideo_yahoomusic_locale'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_now_playing_enable';
  $strongarm->value = 1;
  $export['emvideo_yahoomusic_now_playing_enable'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_post_panel_enable';
  $strongarm->value = 1;
  $export['emvideo_yahoomusic_post_panel_enable'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_pre_panel_enable';
  $strongarm->value = 1;
  $export['emvideo_yahoomusic_pre_panel_enable'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_yahoomusic_share_enable';
  $strongarm->value = 1;
  $export['emvideo_yahoomusic_share_enable'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'emvideo_zzz_custom_url_supported_types';
  $strongarm->value = array(
    'wmv' => 'wmv',
    'wma' => 'wma',
    'swf' => 'swf',
    'flv' => 'flv',
    'mov' => 'mov',
    'rm' => 'rm',
    'mp4' => 0,
    'm4v' => 0,
  );
  $export['emvideo_zzz_custom_url_supported_types'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_video';
  $strongarm->value = 1;
  $export['enable_revisions_page_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'event_nodeapi_video';
  $strongarm->value = 'never';
  $export['event_nodeapi_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feedapi_settings_video';
  $strongarm->value = array(
    'enabled' => 0,
    'upload_method' => 'url',
    'refresh_on_create' => 0,
    'update_existing' => 1,
    'refresh_time' => '1800',
    'items_delete' => '0',
    'parsers' => array(
      'parser_common_syndication' => array(
        'enabled' => 0,
        'weight' => '0',
        'accept_invalid_cert' => 0,
      ),
    ),
    'processors' => array(
      'feedapi_node' => array(
        'enabled' => 0,
        'weight' => '0',
        'content_type' => 'image',
        'input_format' => '1',
        'node_date' => 'feed',
        'x_dedupe' => '0',
      ),
      'feedapi_inherit' => array(
        'enabled' => 0,
        'weight' => '0',
        'inherit_og' => 1,
        'inherit_taxonomy' => 1,
        'inherit_author' => 1,
      ),
    ),
  );
  $export['feedapi_settings_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feedapi_video';
  $strongarm->value = array(
    0 => 'upload_method',
    1 => 'update_existing',
    2 => 'refresh_time',
    3 => 'parsers',
    4 => 'processors',
  );
  $export['feedapi_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flag_content_node_type_video';
  $strongarm->value = 1;
  $export['flag_content_node_type_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'forward_display_video';
  $strongarm->value = 1;
  $export['forward_display_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_video';
  $strongarm->value = '0';
  $export['location_defaultnum_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_video';
  $strongarm->value = '0';
  $export['location_maxnum_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_video';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '1',
      'max' => '0',
      'add' => '0',
    ),
    'form' => array(
      'weight' => '9',
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
          'collect' => '0',
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
      'weight' => '0',
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
      'mode' => 'w3c',
    ),
  );
  $export['location_settings_node_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_youtube__show_related_videos';
  $strongarm->value = 0;
  $export['media_youtube__show_related_videos'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nd_switch_bm_map_video';
  $strongarm->value = array();
  $export['nd_switch_bm_map_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nd_type_video';
  $strongarm->value = 0;
  $export['nd_type_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformsettings_video';
  $strongarm->value = array(
    'nfs_submission_body_rows' => '20',
    'nfs_splitsummary' => '1',
    'nfs_inputformat' => '0',
    'nfs_revisionlog' => '1',
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
    'nfs_title_create' => 'Add !node_type',
    'nfs_title_edit' => '!node_title',
  );
  $export['nodeformsettings_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_edit_metatags_video';
  $strongarm->value = 1;
  $export['nodewords_edit_metatags_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_filter_modules_output_video';
  $strongarm->value = array();
  $export['nodewords_filter_modules_output_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_filter_regexp_video';
  $strongarm->value = '';
  $export['nodewords_filter_regexp_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_metatags_generation_method_video';
  $strongarm->value = '0';
  $export['nodewords_metatags_generation_method_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_metatags_generation_source_video';
  $strongarm->value = '2';
  $export['nodewords_metatags_generation_source_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodewords_use_alt_attribute_video';
  $strongarm->value = 1;
  $export['nodewords_use_alt_attribute_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_video';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notify_node_type_video';
  $strongarm->value = 0;
  $export['notify_node_type_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_video';
  $strongarm->value = 'group_post_standard';
  $export['og_content_type_usage_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_max_groups_video';
  $strongarm->value = '';
  $export['og_max_groups_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_visibility_video';
  $strongarm->value = '0';
  $export['og_visibility_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_video';
  $strongarm->value = '';
  $export['page_title_type_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_video_showfield';
  $strongarm->value = 0;
  $export['page_title_type_video_showfield'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_video_pattern';
  $strongarm->value = '[group-short-name-raw]/videos/[title-raw]';
  $export['pathauto_node_video_pattern'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_comment_video';
  $strongarm->value = 0;
  $export['print_display_comment_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_urllist_video';
  $strongarm->value = 1;
  $export['print_display_urllist_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_video';
  $strongarm->value = 1;
  $export['print_display_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_mail_display_comment_video';
  $strongarm->value = 0;
  $export['print_mail_display_comment_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_mail_display_urllist_video';
  $strongarm->value = 1;
  $export['print_mail_display_urllist_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_mail_display_video';
  $strongarm->value = 1;
  $export['print_mail_display_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_video';
  $strongarm->value = 0;
  $export['show_diff_inline_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_video';
  $strongarm->value = 1;
  $export['show_preview_changes_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'skinr_settings_video';
  $strongarm->value = array(
    0 => 'comment_group',
    1 => 'node_group',
  );
  $export['skinr_settings_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_default_workflow_video';
  $strongarm->value = array(
    'n_new' => 'n_new',
    'n_unpub' => 'n_unpub',
    'n_pub' => 'n_pub',
    'c_new' => 'c_new',
    'c_unpub' => 'c_unpub',
    'c_pub' => 'c_pub',
  );
  $export['subscriptions_default_workflow_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_workflow_video';
  $strongarm->value = array(
    0 => 'n_new',
    1 => 'n_unpub',
    2 => 'n_pub',
    3 => 'c_new',
    4 => 'c_unpub',
    5 => 'c_pub',
  );
  $export['subscriptions_workflow_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_video';
  $strongarm->value = '1';
  $export['upload_video'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_video';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_video'] = $strongarm;

  return $export;
}
