<?php

/**
 * Implementation of hook_ds_default_settings().
 */
function ft_news_ds_default_settings() {
  $data = array(
    'nd' => array(
      'nnews' => array(
        'full' => array(
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
              'weight' => '-78',
              'format' => 'nd_bodyfield',
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
