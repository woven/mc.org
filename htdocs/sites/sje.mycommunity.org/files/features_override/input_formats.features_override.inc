<?php

/**
 * Implementation of hook_input_formats_alter().
 */
function features_override_input_formats_alter(&$items) {
  features_override_features_default_alter($items, "filter_formats");
}
