<?php

/**
 * @file
 * Cache backport administration pages.
 */

/**
 * Entry point for cache backend configuration.
 */
function cache_backport_admin_backend() {
  global $conf;

  $headers = array(t("Bin"), t("Backend"), t("Status"), t("Has data"), t("Env."), t("Operations"));
  $rows = array();

  $default_class = variable_get('cache_default_class', 'DrupalDatabaseCache');
  // Set the default before getting the real default being used.
  // Used default could itself be a downgrade.
  $found_backends = array('default' => $default_class);

  $has_missing = FALSE;

  if (!class_exists($default_class)) {
    drupal_set_message(t("Default backend named '@class' does not exists, the system is gracefully downgrading to '@default'. You should fix your settings.php file.", array(
      '@class' => $default_class,
      '@default' => 'DrupalDatabaseCache',
    )), 'warning');
    // Set the real default for later display.
    $default_class = 'DrupalDatabaseCache';
  }

  foreach ($conf as $name => $value) {
    if (substr($name, 0, 12) === 'cache_class_') {
      $found_backends[substr($name, 12)] = $value;
    }
  }
  ksort($found_backends);

  foreach ($found_backends as $bin => $class) {
    $row = array();

    $row[] = '<strong>' . $bin . '</strong>';
    $row[] = $class;

    if (class_exists($class)) {
      $row[] = '<em>' . t("OK") . '</em>';
    }
    else {
      $row[] = '<strong>' . t("Missing, dowgrading to default") . '</strong>';
      $has_missing = TRUE;
      $class = $default_class;
    }

    // Empty state.
    if ($bin === 'default') {
      $row[] = '<em><small>' . t("N/A") . '</small></em>';
    }
    else {
      $bin = _cache_get_object($bin);
      $row[] = $bin->isEmpty() ? '' : '<em>' . t("Yes") . '</em>';
    }

    // Environment runtime.
    $instance = new $class('cache');
    if ($instance instanceof DrupalEnvRelatedPlugin) {
      $row[] = $instance->checkEnv() ? '<em>' . t("OK") . '</em>' : '<strong>' . t("Broken") . '</strong>';
    }
    else {
      $row[] = '';
    }
    unset($instance);

    // FIXME: Operations, todo.
    $row[] = '';

    $rows[] = $row;
  }

  if ($has_missing) {
    drupal_set_message(t("Some backends are missing, please verify your settings.php file and your current installation."), 'warning');
  }

  return theme('table', $headers, $rows);
}
