<?php

/**
 * Implementation of hook_default_box().
 */
function ft_account_ui_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'header_links';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Header Links';
  $box->options = array(
    'body' => '<div class="limiter clear-block">
      <div id="block-user-0" class="block block-user">
        <div class="block-content">
          <?php
            global $user;
            if (!$user->uid){ ?>
              <ul>
                <?php if (function_exists(\'_ghh_social_post_get_fbuid\') && _ghh_social_post_get_fbuid() && count(_ghh_social_post_count_friends_that_are_in_the_site())>0){ ?>
                  <li><a href="fb-friends-ghh" class="colorbox-load" id="fb-friends"> <?php print count(_ghh_social_post_count_friends_that_are_in_the_site()) . \' of your friends are here!\';?> </a></li>
                <?php  
                }
                ?>
                <?php if(function_exists(\'fbconnect_render_button\')): ?>
                <li><a href="#" id="fbconnect"> <?php print fbconnect_render_button(array(\'scope\' => \'email\', \'text\'=> \'Connect to Facebook\', \'size\' => \'small\'));?> </a></li>
                <?php endif; ?>
                <li><a href="#" id="register-button">Join</a></li>
                <li><a href="#" id="login-button">Sign in</a></li>
              </ul>
            
            <?php }else{ ?>
                     
              <ul>
                
                <?php if (function_exists(\'_ghh_social_post_get_fbuid\') && _ghh_social_post_get_fbuid() && count(_ghh_social_post_count_friends_that_are_in_the_site())>0){ ?>
                  <li><a href="fb-friends-ghh" class="colorbox-load" id="fb-friends"> <?php print count(_ghh_social_post_count_friends_that_are_in_the_site()) . \' of your friends are here!\';?> </a></li>
                <?php  
                }
                ?>
                <?php if (function_exists(\'fbconnect_get_fbuid\') && !fbconnect_get_fbuid()){ ?>
                  <li><a href="#" id="fbconnect"> <?php print fbconnect_render_button(array(\'text\'=> \'Connect to Facebook\', \'size\' => \'small\'));?> </a></li>
                <?php  
                }
                ?>          
                <li class="first">
                  <?php if ($user->picture && file_exists($user->picture)){
                    print theme(\'imagecache\', \'header_mini_avatar\', $user->picture);
                  }elseif(function_exists(\'_fbconnect_get_user_fbuid\') && function_exists(\'fbconnect_get_fbuid\') &&  _fbconnect_get_user_fbuid($user->uid) == fbconnect_get_fbuid()){
                    $pictureUrl = "https://graph.facebook.com/" . fbconnect_get_fbuid() . "/picture?type=square"; ?>
                    <img src="<?php print $pictureUrl; ?>" width="13" height="13" alt="<?php print ucfirst($user->name); ?>\'s avatar" />
                  <?php }else{
                     $pictureUrl = \'/\' . drupal_get_path(\'theme\', \'mc_base\') . "/images/common/pic-user-default-avatar.jpg"; ?>
                    <img src="<?php print $pictureUrl; ?>" width="13" height="13" alt="<?php print ucfirst($user->name); ?>\'s avatar" />
                  <?php  
                  }
                  ?>
                <?php profile_load_profile($user); if($user->profile_firstname){ ?>
                  Welcome, <?php print ucfirst($user->profile_firstname); ?>!</li>
              <?php }else{ ?>
                  Welcome, <?php print ucfirst($user->nameprofile_firstname); ?>!</li>
                <?php } ?>
                <li><span class="ico-small ico-profile"></span><?php print l(t(\'My Profile\'), \'user/\' . $user->uid); ?></li>
                <li class="last"><a href="/logout">Sign out</a></li>
              </ul>
            
            <?php
              }
            ?>
        </div>
      </div>
    </div>',
    'format' => '3',
  );
  $export['header_links'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'join_overlay_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Join Overlay Box';
  $box->options = array(
    'body' => '<?php if(user_is_anonymous()){ ?>
      <div id="register" class="block block-overlay" >
        <div class="block-content">
          <div class="block block-signup clear-block">
                <h1><?php echo theme("mc_page_register_title"); ?></h1>
			<p>Once you\'ve joined, you can enjoy the full benefits of our community.</p>
            <div class="why">
              <ul>
					<li>Add stuff like articles, videos and more</li>
					<li>Follow groups and join discussions</li>
					<li>Get notifications and stay connected</li>
					<li>Interact with others in our community</li>
					<li>We\'re adding new things all the time!</li>
              </ul>
            </div> <!-- /why -->
            
            <div class="user-register">
              <?php
                print drupal_get_form(\'user_register\');
              ?>
            </div> <!-- /user-register -->
            
          </div> <!-- /.block-sign up -->
        </div> <!-- /.block-content -->
      </div> <!-- /@register -->
<?php } //end user_is_anonymous ?>',
    'format' => '3',
  );
  $export['join_overlay_box'] = $box;

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'login_overlay_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Login Overlay Box';
  $box->options = array(
    'body' => '<?php
    global $user;
    if (!$user->uid) : ?>
<div style="display: none;">
      <div id="login" class="block block-overlay">
        <div class="block-content">
          <div class="block block-login clear-block">
            <?php print drupal_get_form(\'user_login_block\'); ?>
          </div>
        </div>
      </div>
      </div>
  <?php endif; ?>',
    'format' => '3',
  );
  $export['login_overlay_box'] = $box;

  return $export;
}
