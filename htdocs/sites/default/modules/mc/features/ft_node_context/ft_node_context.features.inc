<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ft_node_context_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}