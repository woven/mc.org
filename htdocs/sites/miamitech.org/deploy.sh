git pull origin mt
cd ../../../scripts
sudo sh fix-permissions.sh ../htdocs samer
cd ../htdocs/sites/miamitech.org
drush updb -y && drush fra -y
