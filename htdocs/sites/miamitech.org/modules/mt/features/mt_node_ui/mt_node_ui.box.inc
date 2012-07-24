<?php

/**
 * Implementation of hook_default_box().
 */
function mt_node_ui_default_box() {
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
<?php print views_embed_view(\'list_tx_features\', \'block_1\'); ?>
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
    'body' => '<g:plusone size="medium"></g:plusone>
<script type="text/javascript">
  (function() {
    var po = document.createElement(\'script\'); po.type = \'text/javascript\'; po.async = true;
    po.src = \'https://apis.google.com/js/plusone.js\';
    var s = document.getElementsByTagName(\'script\')[0]; s.parentNode.insertBefore(po, s);
  })();
</script>
    ',
    'format' => '3',
  );
  $export['google_plusone'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'tweet_button';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Tweet Button';
  $box->options = array(
    'body' => '<a href="https://twitter.com/share" class="twitter-share-button">Tweet</a>
<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0];if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src="//platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>',
    'format' => '3',
  );
  $export['tweet_button'] = $box;

  return $export;
}
