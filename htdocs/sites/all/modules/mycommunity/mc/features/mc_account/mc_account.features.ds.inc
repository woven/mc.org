<?php

/**
 * Implementation of hook_ds_default_settings().
 */
function mc_account_ds_default_settings() {
  $data = array(
    'ud' => array(
      'ds_profile' => array(
        'full' => array(
          'fields' => array(
            'created' => array(
              'region' => 'header',
              'weight' => '-99',
              'format' => 'ud_user_created',
              'css-class' => '',
              'label_value' => 'Member for',
              'labelformat' => 'hidden',
              'parent' => 'ds_group_user_primaryinfo',
            ),
            'picture' => array(
              'region' => 'header',
              'weight' => '-100',
              'format' => 'user_account_thum_linked',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'profile_city' => array(
              'region' => 'header',
              'weight' => '-97',
              'format' => 'ud_profile_field',
              'css-class' => '',
              'labelformat' => 'hidden',
              'parent' => 'ds_group_user_primaryinfo',
            ),
            'profile_shortbyline' => array(
              'region' => 'header',
              'weight' => '-98',
              'format' => 'ud_profile_field',
              'css-class' => '',
              'labelformat' => 'hidden',
              'parent' => 'ds_group_user_primaryinfo',
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
              'weight' => '-100',
              'format' => 'ds_eval_code',
              'css-class' => '',
              'labelformat' => 'hidden',
              'parent' => 'ds_group_user_primaryinfo',
            ),
            'ds_group_user_primaryinfo' => array(
              'region' => 'header',
              'weight' => '-99',
              'format' => 'ds_field',
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