<?php
// $Id: comment.tpl.php,v 1.4.2.1 2008/03/21 21:58:28 goba Exp $

/**
 * @file comment.tpl.php
 * Default theme implementation for comments.
 *
 * Available variables:
 * - $author: Comment author. Can be link or plain text.
 * - $content: Body of the post.
 * - $date: Date and time of posting.
 * - $links: Various operational links.
 * - $new: New comment marker.
 * - $picture: Authors picture.
 * - $signature: Authors signature.
 * - $status: Comment status. Possible values are:
 *   comment-unpublished, comment-published or comment-preview.
 * - $submitted: By line with date and time.
 * - $title: Linked title.
 *
 * These two variables are provided for context.
 * - $comment: Full comment object.
 * - $node: Node object the comments are attached to.
 *
 * @see template_preprocess_comment()
 * @see theme_comment()
 */
?>
<div class="comment-block <?php print ($comment->new) ? ' comment-new' : ''; print ' '. $status ?> clear-block">
  <div class="image">
    <?php $account = user_load($comment->uid); ?>
    <?php 
      if ($account->picture){
        $img = '<img width="49" height="49" src="/'.$account->picture.'" />';
      }else{
        $img = '<img width="49" height="49" src="/' . $directory . '/media/profile/pic-user-default-avatar.jpg" />';
      }
    ?>
    <?php print l($img, 'user/'.$comment->uid, array('html' => TRUE)); ?>
  </div>
  <div class="comment">
    <p class="author-link">
	  <cite>
	    <?php print $author ?>
	  </cite>
	  <?php print $date ?>
	</p>
    <?php print $flag ?>

    <?php print $picture; ?>

    <div class='cite'><?php print $content ?></div>

    <?php if ($signature): ?>
    <div class="user-signature clear-block">
      <?php print $signature ?>
    </div>
    <?php endif; ?>

    <?php //print $links ?>
  </div>
</div>
