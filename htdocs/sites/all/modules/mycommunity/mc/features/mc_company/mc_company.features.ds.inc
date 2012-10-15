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
              'weight' => '-94',
              'format' => 'mc_location_gmap_default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nd_directions' => array(
              'region' => 'right',
              'weight' => '-92',
              'format' => 'mc_nd_location_directions',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nd_location_address' => array(
              'region' => 'right',
              'weight' => '-93',
              'format' => 'mc_nd_location_address',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'field_phone_number' => array(
              'region' => 'left',
              'weight' => '-99',
              'format' => 'default',
              'css-class' => '',
              'label_value' => 'Phone',
              'labelformat' => 'inline',
            ),
            'field_islookingfund' => array(
              'region' => 'left',
              'weight' => '-98',
              'format' => 'default',
              'css-class' => '',
              'label_value' => 'Looking for funding',
              'labelformat' => 'inline',
            ),
            'field_ishiring' => array(
              'region' => 'left',
              'weight' => '-97',
              'format' => 'default',
              'css-class' => '',
              'label_value' => 'Hiring',
              'labelformat' => 'inline',
            ),
            'body' => array(
              'region' => 'middle',
              'weight' => '-95',
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
              'weight' => '-91',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'facebook_like' => array(
              'region' => 'footer',
              'weight' => '-90',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'google_plus' => array(
              'region' => 'footer',
              'weight' => '-88',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'file_view' => array(
              'region' => 'middle',
              'weight' => '-96',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'tweet_button' => array(
              'region' => 'footer',
              'weight' => '-89',
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
