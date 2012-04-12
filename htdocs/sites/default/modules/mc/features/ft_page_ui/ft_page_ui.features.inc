<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ft_page_ui_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}
