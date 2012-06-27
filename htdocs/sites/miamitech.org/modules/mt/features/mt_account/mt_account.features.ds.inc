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
            'mail' => array(
              'region' => 'middle',
              'weight' => '-98',
              'format' => '',
              'css-class' => '',
              'label_value' => 'Email',
              'labelformat' => 'inline',
              'parent' => 'Personal_information',
            ),
            'created' => array(
              'region' => 'middle',
              'weight' => '-94',
              'format' => 'ud_user_created',
              'css-class' => '',
              'label_value' => 'Memeber For',
              'labelformat' => 'inline',
              'parent' => 'Personal_information',
            ),
            'picture' => array(
              'region' => 'header',
              'weight' => '-100',
              'format' => 'user_account_thum_default',
              'css-class' => '',
              'labelformat' => 'hidden',
            ),
            'profile_firstname' => array(
              'region' => 'middle',
              'weight' => '-100',
              'format' => 'ud_profile_field',
              'css-class' => '',
              'label_value' => 'First Name',
              'labelformat' => 'inline',
              'parent' => 'Personal_information',
            ),
            'profile_lastname' => array(
              'region' => 'middle',
              'weight' => '-99',
              'format' => 'ud_profile_field',
              'css-class' => '',
              'label_value' => 'Last Name',
              'labelformat' => 'inline',
              'parent' => 'Personal_information',
            ),
            'profile_website' => array(
              'region' => 'middle',
              'weight' => '-97',
              'format' => 'ud_profile_field',
              'css-class' => '',
              'label_value' => 'Website',
              'labelformat' => 'inline',
              'parent' => 'Personal_information',
            ),
            'profile_shortbyline' => array(
              'region' => 'header',
              'weight' => '-98',
              'format' => 'ud_profile_field',
              'css-class' => '',
              'label_value' => 'Short byline',
              'labelformat' => 'hidden',
            ),
            'profile_zipcode' => array(
              'region' => 'middle',
              'weight' => '-96',
              'format' => 'ud_profile_field',
              'css-class' => '',
              'label_value' => 'Zip Code',
              'labelformat' => 'inline',
              'parent' => 'Personal_information',
            ),
            'Personal_information' => array(
              'region' => 'middle',
              'weight' => '-97',
              'format' => 'ds_field',
              'css-class' => '',
              'labelformat' => 'above',
            ),
            'nd_location_name' => array(
              'region' => 'header',
              'weight' => '-99',
              'format' => 'ud_title_h1_nolink',
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
