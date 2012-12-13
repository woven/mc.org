<div class="limiter clear-block">
      <div id="block-user-0" class="block block-user">
        <div class="block-content">
          <?php if (!$user->uid){ ?>
              <ul>
                <li><div class="fb-login-button" scope="!perms" data-show-faces="false"></div></li>
                <li><a href="/user/register" id="register-button">Join</a></li>
                <li><a href="/user" id="login-button">Sign in</a></li>
              </ul>
          <?php }else{ ?>
              <ul>
                <li class="first">
                  <?php
                  if ($user->picture && file_exists($user->picture)){
                    print theme('imagecache', 'header_mini_avatar', $user->picture);
                  }else{
                    $pictureUrl = '/' . drupal_get_path('theme', 'mc_base') . "/images/common/pic-user-default-avatar.jpg";
                  ?>
                    <img src="<?php print $pictureUrl; ?>" width="13" height="13" alt="<?php print ucfirst($user->name); ?>'s avatar" />
                  <?php } ?>

		  <?php
				profile_load_profile($user);
				if($user->profile_firstname){ ?>
					Welcome, <?php print ucfirst($user->profile_firstname); ?>!</li>
				<?php }else{ ?>
					Welcome, <?php print ucfirst($user->name); ?>!</li>
          <?php } ?>
                <li><span class="ico-small ico-profile"></span><?php print l(t('My Profile'), 'user/' . $user->uid); ?></li>
                <li class="last"><?php echo l("Sign out","logout"); ?></li>
              </ul>
          <?php } ?>
        </div>
      </div>
    </div>