<?php

/**
 * Implementation of hook_ds_default_settings().
 */
function mt_group_ui_ds_default_settings() {
  $data = array(
    'nd' => array(
      'group' => array(
        'full' => array(
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
