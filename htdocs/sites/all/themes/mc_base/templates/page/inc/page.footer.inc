<div id="footer"><div class='limiter clear-block'>
  
    <?php if (isset($primary_links)) : ?>
      <div class="block-multiblock">
        <?php print theme('links', $primary_links, array('class' => 'menu links primary-links')) ?>
      </div>
    <?php endif; ?>
  
    <div id="sitemap">
      <?php print $footer_above ?>
    </div>
    
    <div class="prose">
      <div class="logos">
        <?php print $footer ?>
        
      </div>
      <?php print $footer_message ?>
    </div>
    
  </div></div>

  <div id="highlight"></div>