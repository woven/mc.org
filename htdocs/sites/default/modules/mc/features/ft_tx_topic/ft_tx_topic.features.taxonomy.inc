<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function ft_tx_topic_taxonomy_default_vocabularies() {
  return array(
    'topic' => array(
      'name' => 'Topic',
      'description' => 'This vocabulary contains all of MyCommunity.org\'s main categories.',
      'help' => 'Select the category to place this content into',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_topic',
      'weight' => '0',
      'nodes' => array(
        'taxonomy_topic' => 'taxonomy_topic',
        'video' => 'video',
        'place' => 'place',
        'link' => 'link',
        'file' => 'file',
        'event' => 'event',
        'audio' => 'audio',
        'article' => 'article',
      ),
    ),
  );
}
