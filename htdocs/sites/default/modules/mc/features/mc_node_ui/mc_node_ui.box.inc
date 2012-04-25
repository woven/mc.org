<?php

/**
 * Implementation of hook_default_box().
 */
function mc_node_ui_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'browse_by_type';
  $box->plugin_key = 'simple';
  $box->title = 'Browse By - Type';
  $box->description = 'Browse By - Type';
  $box->options = array(
    'body' => '<div class="block-browse">
<div class="first">
<?php print theme(\'ghh_browse_menu\',\'menu-browse-by-type\'); ?>
</div>

<div class="second">
<?php print theme(\'ghh_browse_menu\',\'menu-by-editorial-content\'); ?>
</div>
</div>',
    'format' => '3',
  );
  $export['browse_by_type'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'facebook_like';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Facebook Like';
  $box->options = array(
    'body' => '<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_US/all.js#xfbml=1";
  fjs.parentNode.insertBefore(js, fjs);
}(document, \'script\', \'facebook-jssdk\'));</script>


<?php
$myUrl = $_SERVER[\'HTTP_HOST\'];
?>

<fb:like send="false" width="450" show_faces="false"></fb:like>',
    'format' => '3',
  );
  $export['facebook_like'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'google_plusone';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Google Plus One';
  $box->options = array(
    'body' => '<g:plusone size="medium"></g:plusone>',
    'format' => '4',
  );
  $export['google_plusone'] = $box;

  return $export;
}
