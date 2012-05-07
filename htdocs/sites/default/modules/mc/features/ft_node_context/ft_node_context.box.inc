<?php

/**
 * Implementation of hook_default_box().
 */
function ft_node_context_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'join_mc';
  $box->plugin_key = 'simple';
  $box->title = 'Join MyCommunity.org';
  $box->description = 'Join MC - right block';
  $box->options = array(
    'body' => '<h5>Joining is quick, easy and free.</h5>
<p>Once you\'ve joined, you can enjoy the full benefits of the site. Get involved!</p>
<ul>
  <li>Share your tips and comments</li>
  <li>Add stuff like articles, videos and more</li>
  <li>Follow groups to show your support</li>
  <li>Get notifications and stay connected</li>
</ul>
<div class="clear-block"><a href="/user/register" class="button overlay" rel="#register"><span>Join now!</span></a></div>',
    'format' => '3',
  );
  $export['join_mc'] = $box;

  return $export;
}
