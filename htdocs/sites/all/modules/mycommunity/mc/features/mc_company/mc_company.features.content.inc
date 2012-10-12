<?php

/**
 * Implementation of hook_content_default_fields().
 */
function mc_company_content_default_fields() {
  $fields = array();

  // Exported field: field_company_size
  $fields['company-field_company_size'] = array(
    'field_name' => 'field_company_size',
    'type_name' => 'company',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'bubble' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'secondary_page' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'block' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'search' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '1-3|1-3 employees
4-6|4-6 employees
7-10|7-10 employees
11-20|11-20 employees
21-50|21-50 employees
50+|50+ employees',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Company Size',
      'weight' => '-4',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_facebook
  $fields['company-field_facebook'] = array(
    'field_name' => 'field_facebook',
    'type_name' => 'company',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'bubble' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'secondary_page' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'block' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'search' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Facebook',
      'weight' => '-1',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_ishiring
  $fields['company-field_ishiring'] = array(
    'field_name' => 'field_ishiring',
    'type_name' => 'company',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'bubble' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'secondary_page' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'block' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'search' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|No
1|Yes',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Hiring',
      'weight' => '1',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_islookingfund
  $fields['company-field_islookingfund'] = array(
    'field_name' => 'field_islookingfund',
    'type_name' => 'company',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'bubble' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'secondary_page' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'block' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'search' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|No
1|Yes',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Looking for funding',
      'weight' => 0,
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_phone
  $fields['company-field_phone'] = array(
    'field_name' => 'field_phone',
    'type_name' => 'company',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'bubble' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'secondary_page' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'block' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'search' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'phone_number',
    'required' => '0',
    'multiple' => '0',
    'module' => 'cck_phone',
    'active' => '1',
    'default_country' => 'us',
    'all_country_codes' => 1,
    'country_selection' => array(
      'af' => 'af',
      'us' => 'us',
      'al' => 0,
      'dz' => 0,
      'as' => 0,
      'ad' => 0,
      'ao' => 0,
      'ai' => 0,
      'ag' => 0,
      'ar' => 0,
      'am' => 0,
      'aw' => 0,
      'au' => 0,
      'at' => 0,
      'az' => 0,
      'bs' => 0,
      'bh' => 0,
      'bd' => 0,
      'bb' => 0,
      'by' => 0,
      'be' => 0,
      'bz' => 0,
      'bj' => 0,
      'bm' => 0,
      'bt' => 0,
      'bo' => 0,
      'ba' => 0,
      'bw' => 0,
      'br' => 0,
      'io' => 0,
      'vg' => 0,
      'bn' => 0,
      'bg' => 0,
      'bf' => 0,
      'bi' => 0,
      'kh' => 0,
      'cm' => 0,
      'ca' => 0,
      'cv' => 0,
      'ky' => 0,
      'cf' => 0,
      'td' => 0,
      'cl' => 0,
      'cn' => 0,
      'cx' => 0,
      'cc' => 0,
      'co' => 0,
      'km' => 0,
      'cg' => 0,
      'cd' => 0,
      'ck' => 0,
      'cr' => 0,
      'hr' => 0,
      'cu' => 0,
      'cy' => 0,
      'cz' => 0,
      'dk' => 0,
      'dj' => 0,
      'dm' => 0,
      'do' => 0,
      'tp' => 0,
      'ec' => 0,
      'eg' => 0,
      'sv' => 0,
      'gq' => 0,
      'er' => 0,
      'ee' => 0,
      'et' => 0,
      'fk' => 0,
      'fo' => 0,
      'fj' => 0,
      'fi' => 0,
      'fr' => 0,
      'gf' => 0,
      'pf' => 0,
      'ga' => 0,
      'gm' => 0,
      'ge' => 0,
      'de' => 0,
      'gh' => 0,
      'gi' => 0,
      'gr' => 0,
      'gl' => 0,
      'gd' => 0,
      'gp' => 0,
      'gu' => 0,
      'gt' => 0,
      'gn' => 0,
      'gw' => 0,
      'gy' => 0,
      'ht' => 0,
      'hn' => 0,
      'hk' => 0,
      'hu' => 0,
      'is' => 0,
      'in' => 0,
      'id' => 0,
      'ir' => 0,
      'iq' => 0,
      'ie' => 0,
      'il' => 0,
      'it' => 0,
      'ci' => 0,
      'jm' => 0,
      'jp' => 0,
      'jo' => 0,
      'kz' => 0,
      'ke' => 0,
      'ki' => 0,
      'kw' => 0,
      'kg' => 0,
      'la' => 0,
      'lv' => 0,
      'lb' => 0,
      'ls' => 0,
      'lr' => 0,
      'ly' => 0,
      'li' => 0,
      'lt' => 0,
      'lu' => 0,
      'mo' => 0,
      'mk' => 0,
      'mg' => 0,
      'mw' => 0,
      'my' => 0,
      'mv' => 0,
      'ml' => 0,
      'mt' => 0,
      'mh' => 0,
      'mq' => 0,
      'mr' => 0,
      'mu' => 0,
      'yt' => 0,
      'mx' => 0,
      'fm' => 0,
      'md' => 0,
      'mc' => 0,
      'mn' => 0,
      'me' => 0,
      'ms' => 0,
      'ma' => 0,
      'mz' => 0,
      'mm' => 0,
      'na' => 0,
      'nr' => 0,
      'np' => 0,
      'nl' => 0,
      'an' => 0,
      'nc' => 0,
      'nz' => 0,
      'ni' => 0,
      'ne' => 0,
      'ng' => 0,
      'nu' => 0,
      'nf' => 0,
      'kp' => 0,
      'mp' => 0,
      'no' => 0,
      'om' => 0,
      'pk' => 0,
      'pw' => 0,
      'ps' => 0,
      'pa' => 0,
      'pg' => 0,
      'py' => 0,
      'pe' => 0,
      'ph' => 0,
      'pl' => 0,
      'pt' => 0,
      'pr' => 0,
      'qa' => 0,
      'ro' => 0,
      'ru' => 0,
      'rw' => 0,
      'sh' => 0,
      'kn' => 0,
      'lc' => 0,
      'pm' => 0,
      'vc' => 0,
      'ws' => 0,
      'sm' => 0,
      'st' => 0,
      'sa' => 0,
      'sn' => 0,
      'rs' => 0,
      'sc' => 0,
      'sl' => 0,
      'sg' => 0,
      'sk' => 0,
      'si' => 0,
      'sb' => 0,
      'so' => 0,
      'za' => 0,
      'kr' => 0,
      'es' => 0,
      'lk' => 0,
      'sd' => 0,
      'sr' => 0,
      'sz' => 0,
      'se' => 0,
      'ch' => 0,
      'sy' => 0,
      'tw' => 0,
      'tj' => 0,
      'tz' => 0,
      'th' => 0,
      'tg' => 0,
      'tk' => 0,
      'to' => 0,
      'tt' => 0,
      'tn' => 0,
      'tr' => 0,
      'tm' => 0,
      'tc' => 0,
      'tv' => 0,
      'ug' => 0,
      'ua' => 0,
      'ae' => 0,
      'gb' => 0,
      'uy' => 0,
      'vi' => 0,
      'uz' => 0,
      'vu' => 0,
      'va' => 0,
      've' => 0,
      'vn' => 0,
      'wf' => 0,
      'ye' => 0,
      'zm' => 0,
      'zw' => 0,
    ),
    'enable_custom_country' => 1,
    'enable_extension' => 1,
    'enable_mobile' => 0,
    'widget' => array(
      'size' => '15',
      'default_value' => array(
        '0' => array(
          'number' => '',
          'extension' => '',
          'country_codes' => 'us',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Phone',
      'weight' => '2',
      'description' => '',
      'type' => 'phone_number',
      'module' => 'cck_phone',
    ),
  );

  // Exported field: field_twitter
  $fields['company-field_twitter'] = array(
    'field_name' => 'field_twitter',
    'type_name' => 'company',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'bubble' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'secondary_page' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'block' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'search' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Twitter',
      'weight' => '-2',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_website
  $fields['company-field_website'] = array(
    'field_name' => 'field_website',
    'type_name' => 'company',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
      ),
      'format' => 'default',
      'css-class' => array(),
      'region' => 'disabled',
      'ds_weight' => '-63',
      'full' => array(
        'label' => array(
          'format' => 'hidden',
        ),
        'format' => 'default',
        'css-class' => '',
        'region' => 'disabled',
        'type' => 'link',
        'parent_id' => '',
        'field_id' => 'field_website',
        'label_value' => '',
        'exclude' => 1,
        'weight' => '-63',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Website',
      'weight' => '-3',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Company Size');
  t('Facebook');
  t('Hiring');
  t('Looking for funding');
  t('Phone');
  t('Twitter');
  t('Website');

  return $fields;
}
