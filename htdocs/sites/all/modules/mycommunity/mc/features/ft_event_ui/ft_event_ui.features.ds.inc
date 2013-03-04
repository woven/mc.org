<?php

/**
 * Implementation of hook_ds_default_settings().
 */
function ft_event_ui_ds_default_settings() {
  $data = array(
    'nd' => array(
      'event' => array(
        '5' => array(
          'fields' => array(
            'title' => array(
              'region' => 'header',
              'weight' => '-100',
              'format' => 'nd_title_h1_nolink',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'body' => array(
              'region' => 'middle',
              'weight' => '-99',
              'format' => 'nd_bodyfield',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'node_event_dates_print' => array(
              'region' => 'middle',
              'weight' => '-98',
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
          'status' => 2,
          'region_styles' => array(
            'header' => '',
            'left' => '',
            'middle' => '',
            'right' => '',
            'footer' => '',
          ),
        ),
        'full' => array(
          'fields' => array(
            'nd_location_gmap' => array(
              'region' => 'right',
              'weight' => '-90',
              'format' => 'mc_location_gmap_default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nd_directions' => array(
              'region' => 'right',
              'weight' => '-88',
              'format' => 'mc_nd_location_directions',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nd_location_address' => array(
              'region' => 'right',
              'weight' => '-89',
              'format' => 'mc_nd_location_address',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'field_event_url' => array(
              'region' => 'middle',
              'weight' => '-91',
              'format' => 'default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'body' => array(
              'region' => 'middle',
              'weight' => '-92',
              'format' => 'nd_bodyfield',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'mt_add_ical' => array(
              'region' => 'left',
              'weight' => '-98',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'mt_add_group_ical' => array(
              'region' => 'left',
              'weight' => '-96',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'mt_add_myevents' => array(
              'region' => 'left',
              'weight' => '-99',
              'format' => 'myevents_flag_link',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'mt_add_gcal' => array(
              'region' => 'left',
              'weight' => '-97',
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
              'weight' => '-94',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nodes_print_email' => array(
              'region' => 'footer',
              'weight' => '-87',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nodes_event_dates' => array(
              'region' => 'middle',
              'weight' => '-95',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'facebook_like' => array(
              'region' => 'footer',
              'weight' => '-86',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'google_plus' => array(
              'region' => 'footer',
              'weight' => '-84',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'file_view' => array(
              'region' => 'middle',
              'weight' => '-93',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'tweet_button' => array(
              'region' => 'footer',
              'weight' => '-85',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
          ),
          'regiontoblock' => array(
            'block' => array(
              'header' => 0,
              'left' => 1,
              'middle' => 0,
              'right' => 1,
              'footer' => 0,
            ),
          ),
          'status' => 2,
          'region_styles' => array(
            'header' => '',
            'left' => '',
            'middle' => '',
            'right' => '',
            'footer' => '',
          ),
        ),
      ),
    ),
  );
  return $data;
}
