git pull origin $1
drush cc all
drush updb -y
drush cc all
drush fras -y
drush cron
drush cc all