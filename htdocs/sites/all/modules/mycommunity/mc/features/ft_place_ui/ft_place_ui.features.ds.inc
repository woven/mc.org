<?php

/**
 * Implementation of hook_ds_default_settings().
 */
function ft_place_ui_ds_default_settings() {
  $data = array(
    'nd' => array(
      'place' => array(
        'full' => array(
          'fields' => array(
            'nd_location_gmap' => array(
              'region' => 'right',
              'weight' => '-94',
              'format' => 'nd_location_gmap_default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nd_location_address' => array(
              'region' => 'middle',
              'weight' => '-96',
              'format' => 'nd_location_address',
              'css-class' => '',
              'label_value' => 'Address',
              'labelformat' => 'above',
            ),
            'field_place_type' => array(
              'region' => 'middle',
              'weight' => '-97',
              'format' => 'default',
              'css-class' => '',
              'labelformat' => 'above',
            ),
            'body' => array(
              'region' => 'middle',
              'weight' => '-95',
              'format' => 'nd_bodyfield',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'corner_peel' => array(
              'region' => 'header',
              'weight' => '-99',
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
              'weight' => '-98',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nodes_print_email' => array(
              'region' => 'footer',
              'weight' => '-92',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'address_formatted' => array(
              'region' => 'right',
              'weight' => '-93',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'related_stuff' => array(
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
              'weight' => '-89',
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
