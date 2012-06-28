<?php

/**
 * Implementation of hook_ds_default_settings().
 */
function mt_account_ds_default_settings() {
  $data = array(
    'ud' => array(
      'ds_profile' => array(
        'full' => array(
          'fields' => array(
            'picture' => array(
              'region' => 'header',
              'weight' => '-100',
              'format' => 'user_account_thum_linked',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'mt_userprofile' => array(
              'region' => 'middle',
              'weight' => '-98',
              'format' => '',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'realname_area' => array(
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
    ),
  );
  return $data;
}
