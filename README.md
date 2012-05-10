# My Community.org Drupal 6 Base

This project contains the latest "initial files" for setting up a Drupal project using the Drupal 6 core.

It must be used for creating any new Drupal project.

Contains files and folders like:

* .gitignore
* db/ > scripts for database handling
* scripts/ > common scripts
* htdocs/ > folder where Drupal must be installed

## Drupal Installation:

* Go through the regular drupal installer at /install.php
* Select "My Community" install profile
* Follow the regular install steps
* Once you are done.. you have to clear cache TWICE with admin/settings/performance OR drush cc all
* Review features and make sure evertyhing is reverted. (revert manually or use drush)
* To make Group Forums/Discussions work properly, modules femail, mc_femail_ext ft_discussion and ft_discussion_ui need to be enabled. The file mc_femail_ext.sh needs to be copied, renamed to local.mc_femail_ext.sh and edit it to make it point to the drupal installation path (For more details please look at the mc_femail_ext Readme file).
