// Do some initial setup.
if (Drupal.jsEnabled) {
  $(document).ready(function() {
    // Uniquely identify the user;
    mpq.push(["identify", Drupal.settings.mixpanel.defaults.uid]);

    // Register properties about the user.
    mpq.push(["register_once", Drupal.settings.mixpanel.defaults]);

    mpq.name_tag(Drupal.settings.mixpanel.defaults.email);
  });
}
