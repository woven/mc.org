<?php

/**
 * Implementation of hook_default_box().
 */
function ft_group_ui_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'follow_form';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Follow Form';
  $box->options = array(
    'body' => '<?php 
echo drupal_get_form(\'mc_og_follow_group_form\');
?>',
    'format' => '3',
  );
  $export['follow_form'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'group_follow_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Follow Box';
  $box->options = array(
    'body' => '<div class="follow-block">
<?php 
global $user;
if(in_array(\'authenticated user\' ,$user->roles)){
  echo views_embed_view(\'og_details\', \'block_4\'); 
}
else {
  echo views_embed_view(\'og_details\', \'block_6\'); 
}
?>
</div>',
    'format' => '3',
  );
  $export['group_follow_box'] = $box;

  return $export;
}
