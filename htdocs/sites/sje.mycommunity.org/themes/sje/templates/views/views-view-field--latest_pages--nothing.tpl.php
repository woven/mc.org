<?php
// $Id: views-view-field.tpl.php,v 1.1 2008/05/16 22:22:32 merlinofchaos Exp $
 /**
  * This template is used to print a single field in a view. It is not
  * actually used in default Views, as this is registered as a theme
  * function which has better performance. For single overrides, the
  * template is perfectly okay.
  *
  * Variables available:
  * - $view: The view object
  * - $field: The field handler object that can process the input
  * - $row: The raw SQL result that can be used
  * - $output: The processed output that will normally be used.
  *
  * When fetching output from the $row, this construct should be used:
  * $data = $row->{$field->field_alias}
  *
  * The above will guarantee that you'll always get the correct data,
  * regardless of any changes in the aliasing that might happen if
  * the view is modified.
  */
?>
<?php
  if (strpos($view->current_display, 'block_') !== FALSE){
    $size = 83;
  }else{
    $size = 124;
  }
  if (strpos($output, 'img') === FALSE){
    $generic_fid = variable_get('default_img_generic','');

    if($generic_fid!=''){
      $file = field_file_load($generic_fid);
      $image = file_create_url(imagecache_create_path('medium', $file['filepath']));
      $img = '<img width="' . $size . '" height="'. $size .'" class="imagecache imagecache-article_thumbnail_medium" title="" alt="" src="' . $image . '">';
      print l($img, 'node/'. $row->nid, array('html' => TRUE));
    }
  }else{
    print $output;
  }
?>