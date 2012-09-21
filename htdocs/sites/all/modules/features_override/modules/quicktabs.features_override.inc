<?php

/**
 * Implementation of hook_quicktabs_default_quicktabs_alter().
 */
function features_override_quicktabs_default_quicktabs_alter(&$items) {
  features_override_features_default_alter($items, "quicktabs");
}
