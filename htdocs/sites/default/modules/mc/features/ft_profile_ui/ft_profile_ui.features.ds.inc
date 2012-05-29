<?php

/**
 * Implementation of hook_ds_default_settings().
 */
function ft_profile_ui_ds_default_settings() {
  $data = array(
    'ud' => array(
      'ds_profile' => array(
        'full' => array(
          'fields' => array(
            'profile_qt' => array(
              'region' => 'middle',
              'weight' => '-99',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'user_header' => array(
              'region' => 'middle',
              'weight' => '-100',
              'format' => '',
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
