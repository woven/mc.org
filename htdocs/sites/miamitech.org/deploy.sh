git pull origin $1
sudo sh /srv/www/miamitech/dev.miamitech.org/scripts/fix-permissions.sh /srv/www/miamitech/dev.miamitech.org/htdocs $2
drush cc all
drush updb -y
drush fra -y
drush cc all
sudo sh /srv/www/miamitech/dev.miamitech.org/scripts/fix-permissions.sh /srv/www/miamitech/dev.miamitech.org/htdocs $2
