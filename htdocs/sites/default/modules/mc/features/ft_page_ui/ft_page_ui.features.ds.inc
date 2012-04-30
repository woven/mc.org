<?php

/**
 * Implementation of hook_ds_default_settings().
 */
function ft_page_ui_ds_default_settings() {
  $data = array(
    'nd' => array(
      'npage' => array(
        'secondary_page' => array(
          'fields' => array(
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
