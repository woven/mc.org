<?php

/**
 * Implementation of hook_ds_default_settings().
 */
function ft_webform_ui_ds_default_settings() {
  $data = array(
    'nd' => array(
      'webform' => array(
        'full' => array(
          'fields' => array(
            'webform_form' => array(
              'region' => 'middle',
              'weight' => '-98',
              'format' => 'nd_webform_render_form',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'webform_og_body' => array(
              'region' => 'middle',
              'weight' => '-99',
              'format' => '_webform_og_body',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nodes_header_simpler' => array(
              'region' => 'header',
              'weight' => '-100',
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
      ),
    ),
  );
  return $data;
}
