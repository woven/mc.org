git pull origin $1
sudo sh /srv/www/miamitech/dev.miamitech.org/scripts/fix-permissions.sh /srv/www/miamitech/dev.miamitech.org/htdocs $2
drush updb -y && drush fra -y
sudo sh /srv/www/miamitech/dev.miamitech.org/scripts/fix-permissions.sh /srv/www/miamitech/dev.miamitech.org/htdocs $2