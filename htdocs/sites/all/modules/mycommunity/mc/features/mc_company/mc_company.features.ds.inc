<?php

/**
 * Implementation of hook_ds_default_settings().
 */
function mc_company_ds_default_settings() {
  $data = array(
    'nd' => array(
      'company' => array(
        'full' => array(
          'fields' => array(
            'nd_location_gmap' => array(
              'region' => 'right',
              'weight' => '-97',
              'format' => 'mc_location_gmap_default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nd_directions' => array(
              'region' => 'right',
              'weight' => '-95',
              'format' => 'mc_nd_location_directions',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nd_location_address' => array(
              'region' => 'right',
              'weight' => '-96',
              'format' => 'mc_nd_location_address',
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
            'nodes_header' => array(
              'region' => 'header',
              'weight' => '-100',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nodes_print_email' => array(
              'region' => 'footer',
              'weight' => '-94',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'facebook_like' => array(
              'region' => 'footer',
              'weight' => '-93',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'google_plus' => array(
              'region' => 'footer',
              'weight' => '-91',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'file_view' => array(
              'region' => 'middle',
              'weight' => '-99',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'tweet_button' => array(
              'region' => 'footer',
              'weight' => '-92',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
          ),
          'regiontoblock' => array(
            'block' => array(
              'header' => 0,
              'left' => 0,
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
