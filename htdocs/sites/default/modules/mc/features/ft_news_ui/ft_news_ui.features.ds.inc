<?php

/**
 * Implementation of hook_ds_default_settings().
 */
function ft_news_ui_ds_default_settings() {
  $data = array(
    'nd' => array(
      'nnews' => array(
        'full' => array(
          'fields' => array(
            'body' => array(
              'region' => 'middle',
              'weight' => '-97',
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
              'weight' => '-95',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'related_stuff' => array(
              'region' => 'footer',
              'weight' => '-94',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'feed_from' => array(
              'region' => 'middle',
              'weight' => '-98',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'label_value' => 'From',
              'labelformat' => 'inline',
            ),
            'feed_read_more' => array(
              'region' => 'middle',
              'weight' => '-96',
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
