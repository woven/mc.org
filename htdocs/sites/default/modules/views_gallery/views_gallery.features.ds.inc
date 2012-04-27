<?php

/**
 * Implementation of hook_ds_default_settings().
 */
function views_gallery_ds_default_settings() {
  $data = array(
    'nd' => array(
      'gallery' => array(
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
              'weight' => '-98',
              'format' => 'nd_bodyfield',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'gallary_images' => array(
              'region' => 'middle',
              'weight' => '-97',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'album_public' => array(
              'region' => 'header',
              'weight' => '-99',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
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
      'gallery_image' => array(
        'full' => array(
          'fields' => array(
            'field_gallery_image' => array(
              'region' => 'middle',
              'weight' => '-97',
              'format' => 'photo_gallery_big_default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'field_gallery' => array(
              'region' => 'header',
              'weight' => '-99',
              'format' => 'default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'title' => array(
              'region' => 'middle',
              'weight' => '-96',
              'format' => 'nd_title_p_nolink',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'custom_pager_top' => array(
              'region' => 'middle',
              'weight' => '-98',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'related_stuff' => array(
              'region' => 'footer',
              'weight' => '-93',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'facebook_like' => array(
              'region' => 'middle',
              'weight' => '-95',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'google_plus' => array(
              'region' => 'middle',
              'weight' => '-94',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'album_title' => array(
              'region' => 'header',
              'weight' => '-100',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
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
