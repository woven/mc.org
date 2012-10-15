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
              'weight' => '-89',
              'format' => 'mc_location_gmap_default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nd_directions' => array(
              'region' => 'right',
              'weight' => '-87',
              'format' => 'mc_nd_location_directions',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nd_location_address' => array(
              'region' => 'right',
              'weight' => '-88',
              'format' => 'mc_nd_location_address',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'field_industry' => array(
              'region' => 'middle',
              'weight' => '-95',
              'format' => 'default',
              'css-class' => '',
              'label_value' => 'Industry',
              'labelformat' => 'inline',
            ),
            'field_company_size' => array(
              'region' => 'middle',
              'weight' => '-94',
              'format' => 'default',
              'css-class' => '',
              'label_value' => 'Company Size',
              'labelformat' => 'inline',
            ),
            'field_phone_number' => array(
              'region' => 'left',
              'weight' => '-99',
              'format' => 'default',
              'css-class' => '',
              'label_value' => 'Phone',
              'labelformat' => 'hidden',
            ),
            'field_website' => array(
              'region' => 'left',
              'weight' => '-98',
              'format' => 'default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'field_twitter' => array(
              'region' => 'left',
              'weight' => '-97',
              'format' => 'default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'field_facebook' => array(
              'region' => 'left',
              'weight' => '-96',
              'format' => 'default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'field_islookingfund' => array(
              'region' => 'middle',
              'weight' => '-92',
              'format' => 'default',
              'css-class' => '',
              'label_value' => 'Looking for funding',
              'labelformat' => 'inline',
            ),
            'field_ishiring' => array(
              'region' => 'middle',
              'weight' => '-93',
              'format' => 'default',
              'css-class' => '',
              'label_value' => 'Hiring',
              'labelformat' => 'inline',
            ),
            'body' => array(
              'region' => 'middle',
              'weight' => '-90',
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
            'nodes_slideshow' => array(
              'region' => 'middle',
              'weight' => '-91',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nodes_print_email' => array(
              'region' => 'footer',
              'weight' => '-86',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'facebook_like' => array(
              'region' => 'footer',
              'weight' => '-85',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'google_plus' => array(
              'region' => 'footer',
              'weight' => '-83',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'tweet_button' => array(
              'region' => 'footer',
              'weight' => '-84',
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
