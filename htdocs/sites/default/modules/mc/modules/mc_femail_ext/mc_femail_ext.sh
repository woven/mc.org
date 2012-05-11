#!/bin/bash

# NOTE: This file should be customized for EVERY website!

# In order for the script to work properly, the "drush" script MUST be in the
# path, and drushrc.php MUST be set up with the root directory of the Drupal
# install.

SCRIPTNAME=`basename $0`
TMPFILE=`mktemp -t ${SCRIPTNAME}.XXXXXXXX` || exit 1
# Is the following step required?
chmod 700 $TMPFILE
# Populate the temp file
cat <&0 > $TMPFILE
# Find the domain name
DOMAIN=`cat $TMPFILE | grep ^envelope-to -i | head -n1 | sed -r "s/.*@//;s/([a-zA-Z0-9\-\.\-]*).*/\1/"`
if [ -z $DOMAIN ]
then
  DOMAIN=`cat $TMPFILE | grep ^x-original-to -i  | head -n1 | sed -r "s/.*@//;s/([a-zA-Z0-9\-\.\-]*).*/\1/"`
  if [ -z $DOMAIN ]
  then
    DOMAIN=`cat $TMPFILE | grep ^to -i  | head -n1 | sed -r "s/.*@//;s/([a-zA-Z0-9\-\.\-]*).*/\1/"`
  fi
fi

# Please replace the following with the path for your drupal installation i.e. /srv/www/woven/mycommunity.org/htdocs/
echo -n $TMPFILE | drush -r /path/to/drupal_installation -l http://$DOMAIN femail


# Finally, delete the temporary file
rm $TMPFILE