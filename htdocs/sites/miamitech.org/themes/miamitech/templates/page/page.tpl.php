<?php include_once ('inc/page.start.inc'); ?>

  <body <?php print drupal_attributes($attr) ?>>
 
  <?php include_once ('inc/page.head.inc'); ?>
    
  <div id='branding'><div class='limiter clear-block'>
    
    <?php 
      if ($logo || $site_title) {
        print '<h1 class="site-name"><a href="'. check_url($front_page) .'" title="'. $site_title .'">';
        if ($logo) {
          print '<img src="'. check_url($logo) .'" alt="'. $site_title .'" id="logo" />';
        }
        print $site_html .'</a></h1>';
      }
    ?>
    <div id="search-bar">
        <?php print $branding ?>
    </div>
  </div></div>

  

  <div id='navigation'><div class='limiter clear-block'>
    <?php if (isset($primary_links)) : ?>
      <?php print theme('links', $primary_links, array('class' => 'links primary-links')) ?>
    <?php endif; ?>
  </div></div>

  <div id='page' class="<?php print $page_classes; ?>">
    <div class='limiter clear-block'>

      <?php include_once ('inc/page.drupal.inc'); ?> 
    
    <?php if ($group_logo) : ?>
      <!-- <div id="group-page-block"> -->
              <?php print $group_logo; ?>
    <?php endif; ?>

    <?php if ($featured) : ?>
      <div id="featured">
        <?php print $featured; ?>
      </div>
    <?php endif; ?>

    <?php if ($left): ?>
      <div id='left' class='clear-block'><?php print $left ?></div>
    <?php endif; ?>

    <div id='main'>
      <?php if(arg(0)=='node' && is_numeric(arg(1))): ?>
        <input type="hidden" id="nid" value=<?php echo arg(1); ?> />
      <?php endif; ?>
        <?php if ($above_content) : ?>
          <div id="first-block">
            <?php print $above_content; ?>
          </div>      
        <?php endif; ?>
    
        <?php if ( !(is_array($node->field_page_type) && $node->field_page_type[0]['value'] == 'landing' && ( arg(2) == 'view' || arg(2) == '') ) ) : ?>
    
        <?php if(!empty($content_top) || !empty($content) || !empty($content_bottom)): ?>
        <div id="content-wrapper" class="block-content block clear-block">
          <div id='content' class='clear-block block-content'>
            <?php if ($content_top) : ?>
              <div id="content-top"><?php print $content_top ?></div>
            <?php endif; ?>
            
            <?php if ( $title && !( isset($node) && is_null(arg(2)) ) ): ?><h1 class='page-title'><?php print $title ?></h1><?php endif; ?>
            
            <?php if($content){ ?>
            <div class="clear-block">
                <?php print $content ?>       
                <?php print $feed_icons ?>
            </div>
           	<?php } ?>

            <?php if ($content_bottom) : ?>
              <div id="content-bottom"><?php print $content_bottom ?></div>
            <?php endif; ?>
          </div>
        </div>
        <?php endif; ?>
        
        <?php endif; ?>
        
        <?php if ($below_content) : ?>
          <div id="latest-block">
            <?php print $below_content; ?>
          </div>      
        <?php endif; ?>
    </div> <!--/#main-->
	    <?php if ($right): ?>
	      <div id='right' class='clear-block'>
	        <?php print $right ?>
	      </div>
	    <?php endif; ?>
  </div><!--/#limiter-->
  </div><!--/#page-->

 <?php include_once ('inc/page.footer.inc'); ?> 
  
  <?php if (!empty($overlay)): ?>
  <div id="overlay">
    <?php print $overlay ?>
  </div>
  <?php endif;?>
 
  <?php include_once ('inc/page.closure.inc'); ?>