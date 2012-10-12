<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function mc_tax_industry_taxonomy_default_vocabularies() {
  return array(
    'industry' => array(
      'name' => 'Industry',
      'description' => 'Industry taxonomies used at Company content type',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_industry',
      'weight' => '0',
      'nodes' => array(
        'company' => 'company',
      ),
    ),
  );
}
