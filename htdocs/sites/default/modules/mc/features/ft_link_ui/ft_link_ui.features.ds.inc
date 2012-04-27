<?php

/**
 * Implementation of hook_ds_default_settings().
 */
function ft_link_ui_ds_default_settings() {
  $data = array(
    'nd' => array(
      'link' => array(
        'full' => array(
          'fields' => array(
            'field_disclaimer_markup_top' => array(
              'region' => 'disabled',
              'weight' => '-84',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'field_related' => array(
              'region' => 'disabled',
              'weight' => '-89',
              'format' => 'default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'field_editorial' => array(
              'region' => 'disabled',
              'weight' => '-90',
              'format' => 'default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'field_link' => array(
              'region' => 'middle',
              'weight' => '-97',
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
              'weight' => '-87',
              'format' => 'ds_author_nolink',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'links' => array(
              'region' => 'disabled',
              'weight' => '-85',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'read_more' => array(
              'region' => 'disabled',
              'weight' => '-86',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'post_date' => array(
              'region' => 'disabled',
              'weight' => '-91',
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
            'terms_2' => array(
              'region' => 'disabled',
              'weight' => '-94',
              'format' => 'nd_terms_per_vocabulary_space',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'terms_3' => array(
              'region' => 'disabled',
              'weight' => '-95',
              'format' => 'nd_terms_per_vocabulary_space',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'terms' => array(
              'region' => 'disabled',
              'weight' => '-96',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'custom_pager_top' => array(
              'region' => 'disabled',
              'weight' => '-93',
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
              'region' => 'disabled',
              'weight' => '-92',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'nodes_slideshow_code' => array(
              'region' => 'disabled',
              'weight' => '-83',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'address_formatted' => array(
              'region' => 'disabled',
              'weight' => '-82',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'related_stuff' => array(
              'region' => 'footer',
              'weight' => '-19',
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
