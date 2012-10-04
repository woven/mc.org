dbfile=$1
branch=$2
#
#remove db file if already existing
rm -f db.sql.gz
rm -f db.sql
#download the db from the host
if which wget -s; then
  wget $dbfile
else
  curl -O $dbfile
fi
gunzip db.sql.gz
#drop existing tables
drush sql-drop -y
#import the database
drush sql-cli < db.sql
rm -f db.sql.gz
rm -f db.sql
#do some drupal clean up and cache cleaning
#drush cc all
#drush updb -y
#drush cc all
