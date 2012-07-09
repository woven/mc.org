dbfile=http://dev.miamitech.org/db.sql.gz
branch=mt
#
#remove db file if already existing
rm -f db.sql.gz
rm -f db.sql
#download the db from the host
wget $dbfile
gunzip db.sql.gz
#drop existing tables
drush sql-drop -y
#import the database
drush sql-cli < db.sql
rm -f db.sql.gz
rm -f db.sql
#do some drupal clean up and cache cleaning
drush cc all
drush updb -y
drush cc all