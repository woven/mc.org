<?php
// $Id: comment-wrapper.tpl.php,v 1.2 2007/08/07 08:39:35 goba Exp $

/**
 * @file comment-wrapper.tpl.php
 * Default theme implementation to wrap comments.
 *
 * Available variables:
 * - $content: All comments for a given page. Also contains sorting controls
 *   and comment forms if the site is configured for it.
 *
 * The following variables are provided for contextual information.
 * - $node: Node object the comments are attached to.
 * The constants below the variables show the possible values and should be
 * used for comparison.
 * - $display_mode
 *   - COMMENT_MODE_FLAT_COLLAPSED
 *   - COMMENT_MODE_FLAT_EXPANDED
 *   - COMMENT_MODE_THREADED_COLLAPSED
 *   - COMMENT_MODE_THREADED_EXPANDED
 * - $display_order
 *   - COMMENT_ORDER_NEWEST_FIRST
 *   - COMMENT_ORDER_OLDEST_FIRST
 * - $comment_controls_state
 *   - COMMENT_CONTROLS_ABOVE
 *   - COMMENT_CONTROLS_BELOW
 *   - COMMENT_CONTROLS_ABOVE_BELOW
 *   - COMMENT_CONTROLS_HIDDEN
 *
 * @see template_preprocess_comment_wrapper()
 * @see theme_comment_wrapper()
 */
 ?>
 
 <?php 
 $result = "result"; 
  if(!empty($node->og_groups_both)){
  global $user;
  
  $grupo = array_pop($node->og_groups);
  //echo $grupo[0];
  
  $result = db_result(db_query("SELECT * FROM og_uid WHERE nid=".$grupo." AND uid = ".$user->uid));
  //drupal_set_message("<pre>".print_r($node, true)."</pre>"); 
  }
  ?>
<div class="block" id="comments">
  <?php if ($node->comment_count > 0) : ?>
    <div class="block-title">
      <h3><?php print $node->comment_count; ?> <?php print $node->comment_count == 1?'Comment':'Comments';?></h3>
      <span class="arrow"></span>
    </div>
  <?php endif; ?>
  <div class="block-content clear-block">
    <?php print $content; ?>
  </div>
</div>

<?php if($grupo!="") {?>
<div class="block" id="follow-comments"<?php if ($result!="") echo 'style="display: none;"'; ?>>
    <div class="block-title">
      <h3>Follow Group</h3>
      <span class="arrow"></span>
    </div>

  <div class="block-content clear-block">
    <div class="subscribe">
<?php
   //print l('<span>' . t('Follow') . '</span>', "og/subscribe/$data->nid", array('html' => TRUE, 'attributes' => array('rel' => 'nofollow', 'class' => 'button'), 'query' => drupal_get_destination()));
   print '<a href="javascript: void(0);" onClick="follow_group_comments('.$grupo.');" class="button" style="width: 200px;"><span>Follow</span></a>';
   //print '<a rel="nofollow" href="/og/unsubscribe/'.$data->nid.'/'.$user->uid.'?'.drupal_get_destination().'" class="button" id="unfollow"><span>Unfollow</span></a>';
    print '<p>Follow us in order to post a comment.</p>';
    //print '<p class="member-count">' . l($count, "og/users/$data->nid/faces") . ' following</p>';
?>
</div>
  </div>
</div>
<?php } //drupal_set_message("<pre>".print_r($node, true)."</pre>"); ?>
