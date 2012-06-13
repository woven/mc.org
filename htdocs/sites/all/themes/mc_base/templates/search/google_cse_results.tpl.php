<?php
// $Id: google_cse_results.tpl.php,v 1.1.1.1 2009/05/29 21:43:23 shk9012 Exp $
?>

<?php if ($prefix): ?>
  <div class="google-cse-results-prefix"><?php print $prefix; ?></div>
<?php endif; ?>

<?php print $results_searchbox_form; ?>

<div id="google-cse-results">
  <noscript>
    <?php print $noscript; ?>
  </noscript>
</div>

<script type="text/javascript">
  //<![CDATA[
    var googleSearchIframeName = 'google-cse-results';
    var googleSearchFormName = 'google-cse-results-searchbox-form';
    var googleSearchFrameWidth = 875;
    var googleSearchFrameborder = 0;
    var googleSearchDomain = 'www.google.com';//Drupal.settings.googleCSE.domain;
    var googleSearchPath = '/cse';
  //]]>
</script>

<script type="text/javascript" src="http://www.google.com/afsonline/show_afs_search.js"></script>

<?php if ($suffix): ?>
  <div class="google-cse-results-suffix"><?php print $suffix; ?></div>
<?php endif; ?>
