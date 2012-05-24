<?php

/**
 * Implementation of hook_default_box().
 */
function ft_profile_ui_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'user_header';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'User Header';
  $box->options = array(
    'body' => '<?php //if (arg(0) == \'user\' && is_numeric(arg(1)) ) : ?>
  <?php
    $user = user_load(arg(1)); 
    print theme_ghh_user_picture($user->uid, \'article_thumbnail_medium\', FALSE); 
  ?>
  <div class="short">
    <h1><?php print $user->name; ?></h1>
  </div>
<?php //endif; ?>',
    'format' => '3',
  );
  $export['user_header'] = $box;

  return $export;
}
