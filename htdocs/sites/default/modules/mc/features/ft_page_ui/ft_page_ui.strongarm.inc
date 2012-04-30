<?php

/**
 * Implementation of hook_strongarm().
 */
function ft_page_ui_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nd_build_modes';
  $strongarm->value = array(
    'secondary_page' => 'Secondary Page',
  );
  $export['nd_build_modes'] = $strongarm;

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

  return $export;
}
