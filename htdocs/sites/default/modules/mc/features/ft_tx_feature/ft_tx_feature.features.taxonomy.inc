<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function ft_tx_feature_taxonomy_default_vocabularies() {
  return array(
    'feature' => array(
      'name' => 'Feature',
      'description' => 'Features Taxonomy.',
      'help' => 'Select the editorial type for this content if applies',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_feature',
      'weight' => '0',
      'nodes' => array(
        'video' => 'video',
        'place' => 'place',
        'file' => 'file',
        'event' => 'event',
        'audio' => 'audio',
        'article' => 'article',
      ),
    ),
  );
}
