<?php
// $Id: views-view-unformatted.tpl.php,v 1.6 2008/10/01 20:52:11 merlinofchaos Exp $
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="items">
<?php $count = 0; $opened = false; ?>
<?php foreach ($rows as $id => $row): ?>
  <?php if ($count % 3 == 0) : ?><div class="pane"><?php $opened = TRUE; ?><?php endif; ?>
    <div class="featured-item <?php print $classes[$id]; ?>">
      <?php print $row; ?>
    </div>
  <?php if (($count + 1) % 3 == 0) : ?></div><?php $opened = FALSE; ?><?php endif; ?>
  <?php $count++; ?>
<?php endforeach; ?>
<?php if ($opened) : ?></div><?php endif; ?>
</div>