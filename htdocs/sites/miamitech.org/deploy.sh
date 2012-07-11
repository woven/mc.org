git pull
#sudo sh /srv/www/miamitech/dev.miamitech.org/scripts/fix-permissions.sh /srv/www/miamitech/dev.miamitech.org/htdocs $2
drush cc all
drush updb -y
#sudo sh /srv/www/miamitech/dev.miamitech.org/scripts/fix-permissions.sh /srv/www/miamitech/dev.miamitech.org/htdoc $2
drush cc all
drush fra -y
#sudo sh /srv/www/miamitech/dev.miamitech.org/scripts/fix-permissions.sh /srv/www/miamitech/dev.miamitech.org/htdocs $2
