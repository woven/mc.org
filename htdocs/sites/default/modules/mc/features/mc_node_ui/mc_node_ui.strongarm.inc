<?php

/**
 * Implementation of hook_strongarm().
 */
function mc_node_ui_strongarm() {
  $export = array();

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
        'code' => '<?php echo $object->content[\'custom_pager_top\'][1]["#value"]; ?>',
        'token' => 0,
      ),
    ),
    'corner_peel' => array(
      'title' => 'Corner Peel',
      'exclude' => array(
        'image' => 'image',
        'feature_spot' => 'feature_spot',
        'front_picture' => 'front_picture',
        'group' => 'group',
        'link' => 'link',
        'news' => 'news',
        'webform' => 'webform',
        'gallery' => 0,
        'gallery_image' => 0,
        'article' => 0,
        'audio' => 0,
        'embmedia' => 0,
        'environmental_resource' => 0,
        'event' => 0,
        'feedapi_node' => 0,
        'file' => 0,
        'healthcare_facility' => 0,
        'page' => 0,
        'place' => 0,
        'simplenews' => 0,
        'spirit_and_mind' => 0,
        'video' => 0,
      ),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<?php 
$node = $object;
$terms = taxonomy_node_get_terms_by_vocabulary($node, 7);
$name = NULL;
foreach($terms as $term){
  $name = $term->name;
  break;
}
if ($name){
  $name = strtolower($name);
  $name = str_replace(\'?\', \'\', $name);
  $name = str_replace(\' \', \'-\', $name);
  print (\'<span class="corner-left \' . $name  .\'-l"></span>\');
}
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
  $module_path = drupal_get_path(\'module\', \'ghh_default_images\');
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
        'image' => 'image',
        'gallery' => 'gallery',
        'gallery_image' => 'gallery_image',
        'feature_spot' => 'feature_spot',
        'front_picture' => 'front_picture',
        'group' => 'group',
        'webform' => 'webform',
        'article' => 0,
        'audio' => 0,
        'embmedia' => 0,
        'environmental_resource' => 0,
        'event' => 0,
        'feedapi_node' => 0,
        'file' => 0,
        'healthcare_facility' => 0,
        'link' => 0,
        'news' => 0,
        'page' => 0,
        'place' => 0,
        'simplenews' => 0,
        'spirit_and_mind' => 0,
        'video' => 0,
      ),
      'type' => 5,
      'status' => 3,
      'properties' => array(
        'formatters' => array(
          'ds_eval_code' => 'Default',
        ),
        'code' => '<?php print l(t(\'Print\'), \'print/\' . $object->nid, array(\'attributes\'=>array(\'class\' => \'button-like button-print\') ) ); ?>
<?php 
  $emailSubject = \'Found a great article in gethealthyharlem.org\'; 
  $emailBody =  \'I just wanted to share with you a great article I found: \' . urlencode( url(\'node/\' . $object->nid, array(\'absolute\' => TRUE) ) );
?>
<a class="button-like button-email" href="mailto: ?subject=<?php print $emailSubject; ?>&amp;body=<?php print $emailBody ?>">Email</a>',
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
        'code' => '[location-street_0]<br/>
[location-city_0], [location-province_name_0] [location-postal_code_0]',
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
    'editorial_content_tagline' => array(
      'title' => 'Editorial Content Tagline',
      'exclude' => array(
        'image' => 'image',
        'feedapi_node' => 'feedapi_node',
        'group' => 'group',
        'link' => 'link',
        'page' => 'page',
        'webform' => 'webform',
        'gallery' => 0,
        'gallery_image' => 0,
        'article' => 0,
        'audio' => 0,
        'event' => 0,
        'file' => 0,
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
  foreach ($object->taxonomy as $term){
    if ($term->vid == 7){
       if ($term->name == \'Did You Know?\'){
         $tagline = t(\'Did you know? is a series of health articles written by HHPC and approved by our Health Advisory Board.\');
         $iconClass = \'ico-big ico-dyk\';
       }elseif($term->name == \'Harlem Word\'){
         $tagline = t(\'Harlem Word is a series of interviews with Northern Manhattan health experts, written by HHPC and reviewed by our Health Advisory Board.\');
         $iconClass = \'ico-big ico-hw\';
       }elseif($term->name == \'Profiles of Hope\'){
         $tagline = t(\'Profiles of Hope are health testimonials with Northern Manhattan community members written by HHPC and reviewed by our Health Advisory Board.\');
         $iconClass = \'ico-big ico-poh\';
       }
       $link = l (\' \', \'latest/category/\' . $term->tid, array(\'attributes\'=>array(\'class\'=>$iconClass)) );
       print \'<span class="tagline-icon">\' . $link .\'</span>\';
       print \'<span class="tagline-text">\' . $tagline . \'</span>\';
    }
  }
?>',
        'token' => 0,
        'css-class' => 'editorial-tagline',
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
  $view = views_get_view(\'related_stuff\');
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
        'block' => 'views|files-block_1',
        'render' => '1',
      ),
    ),
  );
  $export['nd_fields'] = $strongarm;

  return $export;
}
