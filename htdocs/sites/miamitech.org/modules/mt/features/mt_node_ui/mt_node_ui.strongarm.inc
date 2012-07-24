<?php

/**
 * Implementation of hook_strongarm().
 */
function mt_node_ui_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_pages';
  $strongarm->value = 'admin*
img_assist*
imce*';
  $export['colorbox_pages'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_style';
  $strongarm->value = 'none';
  $export['colorbox_style'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_alter';
  $strongarm->value = 1;
  $export['mimemail_alter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_engine';
  $strongarm->value = 'mimemail';
  $export['mimemail_engine'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_format';
  $strongarm->value = '2';
  $export['mimemail_format'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_incoming';
  $strongarm->value = 0;
  $export['mimemail_incoming'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_simple_address';
  $strongarm->value = 0;
  $export['mimemail_simple_address'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_sitestyle';
  $strongarm->value = 0;
  $export['mimemail_sitestyle'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mimemail_textonly';
  $strongarm->value = 0;
  $export['mimemail_textonly'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nd_fields';
  $strongarm->value = array(
    'gallary_images' => array(
      'title' => 'Gallery Images',
      'exclude' => array(
        'image' => 'image',
        'gallery_image' => 'gallery_image',
        'article' => 'article',
        'audio' => 'audio',
        'embmedia' => 'embmedia',
        'environmental_resource' => 'environmental_resource',
        'event' => 'event',
        'feature_spot' => 'feature_spot',
        'feedapi_node' => 'feedapi_node',
        'file' => 'file',
        'front_picture' => 'front_picture',
        'group' => 'group',
        'healthcare_facility' => 'healthcare_facility',
        'link' => 'link',
        'news' => 'news',
        'page' => 'page',
        'place' => 'place',
        'simplenews' => 'simplenews',
        'spirit_and_mind' => 'spirit_and_mind',
        'video' => 'video',
        'webform' => 'webform',
        'gallery' => 0,
      ),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<?php return views_embed_view("gallery","node_content_1",$object->nid) ?>',
        'token' => 0,
      ),
    ),
    'custom_pager_top' => array(
      'title' => 'Custom Pager (Top)',
      'exclude' => array(
        'image' => 0,
        'gallery' => 0,
        'gallery_image' => 0,
        'article' => 0,
        'audio' => 0,
        'embmedia' => 0,
        'environmental_resource' => 0,
        'event' => 0,
        'feature_spot' => 0,
        'feedapi_node' => 0,
        'file' => 0,
        'front_picture' => 0,
        'group' => 0,
        'healthcare_facility' => 0,
        'link' => 0,
        'news' => 0,
        'page' => 0,
        'place' => 0,
        'simplenews' => 0,
        'spirit_and_mind' => 0,
        'video' => 0,
        'webform' => 0,
      ),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<?php 
$custom_pager_id=array_shift($object->custom_pagers);
echo $object->content[\'custom_pager_top\'][$custom_pager_id->pid]["#value"]; 
?>',
        'token' => 0,
      ),
    ),
    'nodes_header' => array(
      'title' => 'Nodes Header',
      'exclude' => array(
        'group' => 'group',
        'webform' => 'webform',
        'image' => 0,
        'gallery' => 0,
        'gallery_image' => 0,
        'article' => 0,
        'audio' => 0,
        'event' => 0,
        'feedapi_node' => 0,
        'file' => 0,
        'link' => 0,
        'news' => 0,
        'page' => 0,
        'place' => 0,
        'simplenews' => 0,
        'video' => 0,
      ),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<?php return views_embed_view("node_details","block_1",$object->nid) ?>',
        'token' => 0,
      ),
    ),
    'nodes_slideshow' => array(
      'title' => 'Nodes Slideshow',
      'exclude' => array(
        'image' => 'image',
        'gallery' => 'gallery',
        'gallery_image' => 'gallery_image',
        'group' => 'group',
        'webform' => 'webform',
        'article' => 0,
        'audio' => 0,
        'event' => 0,
        'feedapi_node' => 0,
        'file' => 0,
        'link' => 0,
        'news' => 0,
        'page' => 0,
        'place' => 0,
        'simplenews' => 0,
        'video' => 0,
      ),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<?php 
  $module_path = drupal_get_path(\'module\', \'mc_defaultimg\');
  if ( $object->field_list_image && count($object->field_list_image) == 1 && strpos($object->field_list_image[0][\'filepath\'], $module_path) === 0){
    // only default image found, do not show slideshow
    return \'\';
  }
    return views_embed_view("node_details","block_2",$object->nid);
?>',
        'token' => 0,
      ),
    ),
    'nodes_print_email' => array(
      'title' => 'Nodes Print and Email',
      'exclude' => array(
        'group' => 'group',
        'gallery' => 'gallery',
        'gallery_image' => 'gallery_image',
        'webform' => 'webform',
        'article' => 0,
        'audio' => 0,
        'event' => 0,
        'file' => 0,
        'link' => 0,
        'nnews' => 0,
        'npage' => 0,
        'place' => 0,
        'video' => 0,
        'event_feed' => 0,
        'forum' => 0,
        'profile' => 0,
      ),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<?php print l(t(\'Print\'), \'print/\' . $object->nid, array(\'attributes\'=>array(\'class\' => \'button-like button-print\') ) ); ?>
<?php 
$query = array();
  $query[\'subject\'] = \'Found a great \' . $object->type .\' in \' . variable_get("site_name","");
  $query[\'body\'] =  \'I just wanted to share with you a great \' . $object->type . \' I found: \' . url(\'node/\' . $object->nid, array(\'absolute\' => TRUE));
  $emailurl = url("mailto:",array("absolute" => true, "query" => $query));
?>
<a class="button-like button-email" href="<?php print $emailurl ?>">Email</a>',
        'token' => 0,
        'css-class' => 'field-print-email',
      ),
    ),
    'nodes_event_dates' => array(
      'title' => 'Event Dates',
      'exclude' => array(
        'image' => 'image',
        'gallery' => 'gallery',
        'gallery_image' => 'gallery_image',
        'article' => 'article',
        'audio' => 'audio',
        'embmedia' => 'embmedia',
        'environmental_resource' => 'environmental_resource',
        'feature_spot' => 'feature_spot',
        'feedapi_node' => 'feedapi_node',
        'file' => 'file',
        'front_picture' => 'front_picture',
        'group' => 'group',
        'healthcare_facility' => 'healthcare_facility',
        'link' => 'link',
        'news' => 'news',
        'page' => 'page',
        'place' => 'place',
        'simplenews' => 'simplenews',
        'spirit_and_mind' => 'spirit_and_mind',
        'video' => 'video',
        'webform' => 'webform',
        'event' => 0,
      ),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<?php return views_embed_view("node_details","block_3",$object->nid) ?>',
        'token' => 0,
      ),
    ),
    'nodes_slideshow_code' => array(
      'title' => 'Slideshow (Images list field)',
      'exclude' => array(
        'image' => 0,
        'gallery' => 0,
        'gallery_image' => 0,
        'article' => 0,
        'audio' => 0,
        'event' => 0,
        'feedapi_node' => 0,
        'file' => 0,
        'group' => 0,
        'link' => 0,
        'news' => 0,
        'page' => 0,
        'place' => 0,
        'simplenews' => 0,
        'video' => 0,
        'webform' => 0,
      ),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<?php
dsm($object);
?>',
        'token' => 0,
        'css-class' => 'slideshow',
      ),
    ),
    'address_formatted' => array(
      'title' => 'Address Formatted',
      'exclude' => array(
        'article' => 0,
        'audio' => 0,
        'event' => 0,
        'file' => 0,
        'group' => 0,
        'link' => 0,
        'nnews' => 0,
        'npage' => 0,
        'place' => 0,
        'video' => 0,
        'gallery' => 0,
        'gallery_image' => 0,
        'event_feed' => 0,
        'webform' => 0,
        'forum' => 0,
      ),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<?php if((isset($object->location[\'street\']) && !empty($object->location[\'street\'])) || (isset($object->location[\'city\']) && !empty($object->location[\'city\'])) || (isset($object->location[\'province\']) && !empty($object->location[\'province\'])) || (isset($object->location[\'postal_code\']) && !empty($object->location[\'postal_code\'])) ): ?>

<?php if(isset($object->location[\'street\']) && !empty($object->location[\'street\'])): ?>
   [location-street_0]<br/>
   <?php endif; ?>
   <?php if(isset($object->location[\'city\']) && !empty($object->location[\'city\'])): ?>[location-city_0]<?php if((isset($object->location[\'province\']) && !empty($object->location[\'province\'])) || (isset($object->location[\'postal_code\']) && !empty($object->location[\'postal_code\']))): ?>,<?php endif; ?> <?php endif; ?><?php if(isset($object->location[\'province\']) && !empty($object->location[\'province\'])): ?>[location-province_name_0] <?php endif; ?><?php if(isset($object->location[\'postal_code\']) && !empty($object->location[\'postal_code\'])): ?>[location-postal_code_0]<?php endif; ?>
<?php elseif(!empty($object->location[\'latitude\']) && !empty($object->location[\'longitude\']) ): ?>
<?php else: ?>
<div class="no-location">
A location wasn\'t provided.
</div>
<?php endif; ?>',
        'token' => 1,
      ),
    ),
    'album_public' => array(
      'title' => 'Public Album Add Photo Link',
      'exclude' => array(
        'image' => 'image',
        'gallery_image' => 'gallery_image',
        'article' => 'article',
        'audio' => 'audio',
        'event' => 'event',
        'feedapi_node' => 'feedapi_node',
        'file' => 'file',
        'group' => 'group',
        'link' => 'link',
        'news' => 'news',
        'page' => 'page',
        'place' => 'place',
        'simplenews' => 'simplenews',
        'video' => 'video',
        'webform' => 'webform',
        'gallery' => 0,
      ),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<?php
  if ($object->field_public_album[0][\'value\']){
    global $user;
    if ($user->uid){
      $link = l("Add your photos", "node/add/gallery-image/" . $object->nid);
    }else{
      $addLinkOptions[\'query\'][\'message\'] = \'register-first\';
      $link = l("Add your photos", "user/register", $addLinkOptions);
    }
    print "This is an <strong>open album</strong>. $link now!";
  }
?>',
        'token' => 0,
        'css-class' => 'light-text',
      ),
    ),
    'nodes_header_simpler' => array(
      'title' => 'Node Header simpler',
      'exclude' => array(
        'image' => 'image',
        'gallery' => 'gallery',
        'gallery_image' => 'gallery_image',
        'article' => 'article',
        'audio' => 'audio',
        'event' => 'event',
        'feedapi_node' => 'feedapi_node',
        'file' => 'file',
        'group' => 'group',
        'link' => 'link',
        'news' => 'news',
        'page' => 'page',
        'place' => 'place',
        'simplenews' => 'simplenews',
        'video' => 'video',
        'webform' => 0,
      ),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<?php return views_embed_view("node_details","block_4",$object->nid) ?>',
        'token' => 0,
      ),
    ),
    'related_stuff' => array(
      'title' => 'Related Stuff',
      'exclude' => array(
        'image' => 'image',
        'feedapi_node' => 'feedapi_node',
        'group' => 'group',
        'page' => 'page',
        'webform' => 'webform',
        'gallery' => 0,
        'gallery_image' => 0,
        'article' => 0,
        'audio' => 0,
        'event' => 0,
        'file' => 0,
        'link' => 0,
        'news' => 0,
        'place' => 0,
        'simplenews' => 0,
        'video' => 0,
      ),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<?php
// display only on nodes that are part of a group
if (!empty($object->og_groups)){
  $display_id = \'block_2\';
  $view = views_get_view(\'node_related\');
  if (!$view || !$view->access($display_id)) {
    return;
  }
  $args = array($object->nid);
  $view->execute_display($display_id);
  if (count($view->result)){
    print \'<div class="block-title">Related Stuff</div>\';
    print $view->preview($display_id, $args);
  }
}
?>',
        'token' => 0,
      ),
    ),
    'series' => array(
      'title' => 'More From',
      'exclude' => array(
        'image' => 'image',
        'gallery' => 'gallery',
        'gallery_image' => 'gallery_image',
        'article' => 'article',
        'event' => 'event',
        'feedapi_node' => 'feedapi_node',
        'file' => 'file',
        'group' => 'group',
        'link' => 'link',
        'news' => 'news',
        'page' => 'page',
        'place' => 'place',
        'simplenews' => 'simplenews',
        'video' => 'video',
        'webform' => 'webform',
        'audio' => 0,
      ),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<?php 
$series = \'\';
foreach($object->taxonomy as $term) {
  if ($term->vid == 8){
    $description = "Listen to more from " . $term->name;
    $series .= l($term->name, \'latest/category/\' . $term->tid, array(\'attributes\' => array(\'alt\' => $description, \'title\' => $description) ));
    break;
  }
}
?>
<?php if ($series) : ?>
  <?php print $series; ?>
<?php endif; ?>',
        'token' => 0,
      ),
    ),
    'feed_from' => array(
      'title' => 'Feed From',
      'exclude' => array(
        'image' => 'image',
        'gallery' => 'gallery',
        'gallery_image' => 'gallery_image',
        'article' => 'article',
        'audio' => 'audio',
        'event' => 'event',
        'feedapi_node' => 'feedapi_node',
        'file' => 'file',
        'group' => 'group',
        'link' => 'link',
        'page' => 'page',
        'place' => 'place',
        'simplenews' => 'simplenews',
        'video' => 'video',
        'webform' => 'webform',
        'news' => 0,
      ),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<?php
if ( !empty($object->feedapi_node->feed_nids) ){
  foreach($object->feedapi_node->feed_nids as $nid){
     $feed_nid = $nid;
     break;
  }
  $feed = node_load ($feed_nid);
  if (is_object($feed)){
    print $feed->title;
  }
}
?>',
        'token' => 0,
      ),
    ),
    'feed_read_more' => array(
      'title' => 'Feed Read More',
      'exclude' => array(
        'image' => 'image',
        'gallery' => 'gallery',
        'gallery_image' => 'gallery_image',
        'article' => 'article',
        'audio' => 'audio',
        'event' => 'event',
        'feedapi_node' => 'feedapi_node',
        'file' => 'file',
        'group' => 'group',
        'link' => 'link',
        'page' => 'page',
        'place' => 'place',
        'simplenews' => 'simplenews',
        'video' => 'video',
        'webform' => 'webform',
        'news' => 0,
      ),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<?php
if ( !empty($object->feedapi_node->feed_nids) ){
  foreach($object->feedapi_node->feed_nids as $nid){
     $feed_nid = $nid;
     break;
  }
  $feed = node_load ($feed_nid);
  $text = \'Continue reading\';
  if (is_object($feed)){
    $text .= \' at \' . $feed->title;
  }
  if ( !empty($object->feedapi_node->guid) ){
    print l($text, $object->feedapi_node->guid);    
  }

}
?>',
        'token' => 0,
      ),
    ),
    'facebook_like' => array(
      'type' => 6,
      'status' => 3,
      'title' => 'Facebook Like',
      'exclude' => array(
        'gallery' => 0,
        'gallery_image' => 0,
        'group' => 0,
        'image' => 0,
        'feedapi_node' => 0,
        'link' => 0,
        'news' => 0,
        'simplenews' => 0,
        'webform' => 0,
        'article' => 0,
        'audio' => 0,
        'event' => 0,
        'file' => 0,
        'npage' => 0,
        'place' => 0,
        'video' => 0,
        'forum' => 0,
      ),
      'properties' => array(
        'block' => 'boxes|facebook_like',
        'render' => '1',
      ),
    ),
    'google_plus' => array(
      'type' => 6,
      'status' => 3,
      'title' => 'Google Plus',
      'exclude' => array(
        'gallery' => 0,
        'gallery_image' => 0,
        'group' => 0,
        'image' => 0,
        'feedapi_node' => 0,
        'link' => 0,
        'news' => 0,
        'simplenews' => 0,
        'webform' => 0,
        'article' => 0,
        'audio' => 0,
        'event' => 0,
        'file' => 0,
        'npage' => 0,
        'place' => 0,
        'video' => 0,
        'forum' => 0,
      ),
      'properties' => array(
        'block' => 'boxes|google_plusone',
        'render' => '1',
      ),
    ),
    'album_title' => array(
      'title' => 'Album Title',
      'exclude' => array(
        'image' => 'image',
        'gallery' => 'gallery',
        'article' => 'article',
        'audio' => 'audio',
        'event' => 'event',
        'feedapi_node' => 'feedapi_node',
        'file' => 'file',
        'group' => 'group',
        'link' => 'link',
        'news' => 'news',
        'page' => 'page',
        'place' => 'place',
        'simplenews' => 'simplenews',
        'video' => 'video',
        'webform' => 'webform',
        'gallery_image' => 0,
      ),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<h1><?php echo $object->field_gallery[0][\'safe\'][\'title\']?></h1>',
        'token' => 0,
      ),
    ),
    'file_view' => array(
      'type' => 6,
      'status' => 3,
      'title' => 'Field View',
      'exclude' => array(
        'group' => 0,
        'image' => 0,
        'gallery' => 0,
        'gallery_image' => 0,
        'article' => 0,
        'audio' => 0,
        'event' => 0,
        'feedapi_node' => 0,
        'file' => 0,
        'link' => 0,
        'news' => 0,
        'page' => 0,
        'place' => 0,
        'simplenews' => 0,
        'video' => 0,
        'webform' => 0,
      ),
      'properties' => array(
        'block' => 'views|node_files-block_1',
        'render' => '1',
      ),
    ),
    'node_event_dates_print' => array(
      'title' => 'Event Dates Print',
      'exclude' => array(
        'article' => 'article',
        'audio' => 'audio',
        'file' => 'file',
        'group' => 'group',
        'link' => 'link',
        'nnews' => 'nnews',
        'npage' => 'npage',
        'place' => 'place',
        'video' => 'video',
        'gallery' => 'gallery',
        'gallery_image' => 'gallery_image',
        'event_feed' => 'event_feed',
        'webform' => 'webform',
        'forum' => 'forum',
        'event' => 0,
      ),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<?php return views_embed_view("node_details","block_5",$object->nid) ?>',
        'token' => 0,
      ),
    ),
    'tweet_button' => array(
      'type' => 6,
      'status' => 3,
      'title' => 'Tweet button',
      'exclude' => array(
        'group' => 'group',
        'article' => 0,
        'audio' => 0,
        'event' => 0,
        'file' => 0,
        'link' => 0,
        'nnews' => 0,
        'npage' => 0,
        'place' => 0,
        'video' => 0,
        'gallery' => 0,
        'gallery_image' => 0,
        'event_feed' => 0,
        'webform' => 0,
        'forum' => 0,
      ),
      'properties' => array(
        'block' => 'boxes|tweet_button',
        'render' => '3',
      ),
    ),
  );
  $export['nd_fields'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nd_plugin_settings';
  $strongarm->value = array(
    'regiontoblock' => array(
      'title' => 'Region to block',
      'class' => 'ds_regiontoblock',
      'description' => 'Render a display suite region into a theme region. That region will be made available as a block.',
      'file' => 'ds_regiontoblock.inc',
      'path' => 'sites/all/modules/ds/plugins',
      'target' => 'all',
      'key' => 'regiontoblock',
      'filename' => 'sites/all/modules/ds/plugins/ds_regiontoblock.inc',
      'status' => '1',
    ),
  );
  $export['nd_plugin_settings'] = $strongarm;

  return $export;
}
