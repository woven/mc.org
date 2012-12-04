<?php

/**
 * @file
 * Rate widget theme
 *
 * This is the default template for rate widgets. See section 3 of the README
 * file for information on theming widgets.
 */

print '<div class="buttons">';
	print theme('item_list', $buttons_updown);
print '</div>';

if ($info) {
  //print '<div class="rate-info">' . $info . '</div>';
}

?>

<?php //print "Rating: " . $results['rating'] ." - " . time(); ?>