<?php if ($tabs || $tabs2): ?>
      <div id='tabs'><div class='limiter clear-block'>
        <?php if ($tabs) print $tabs ?>
        <?php if ($tabs2) print $tabs2 ?>
      </div></div>
    <?php endif; ?>

    <?php if ($help) : ?>
      <div id='help-console'><div class='limiter clear-block'>
        <?php print $help; ?>
      </div></div>
    <?php endif; ?>
    
    <?php if ($show_messages && $messages){ print $messages; } ?>