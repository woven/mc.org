<div id="footer">
  <div class='limiter clear-block'>
  
    <?php if (isset($primary_links)) : ?>
      <div class="block-multiblock">
        <?php print theme('links', $primary_links, array('class' => 'menu links primary-links')) ?>
      </div>
    <?php endif; ?>
  
    <div id="sitemap">
      <?php print $footer_above ?>
    </div>

    <?php if($footer || $footer_message){ ?>
    <div class="prose">
      <?php if($footer): ?>
        <div class="logos">
          <?php print $footer ?>
        </div>
      <?php endif; ?>

      <?php if($footer_message){ ?>
        <p><?php print $footer_message ?></p>
      <?php } ?>

      <div class="field field-mt-add-group-ical field-group-ical">
        <span class="ical-group-ico"> </span>
        <a class="ical-link" href="webcal://<?php echo $_SERVER["SERVER_NAME"] ?>/events/ical">Subscribe to all upcoming events (iCal)</a>
      </div>

      <?php } //end of prose existance?>

    </div> <!-- .prose -->
   </div> <!---.limiter -->
</div> <!---#footer -->

  <div id="highlight"></div>