#!/bin/bash -ex

path="${1%/}";
user="$2";
group="$3";

if [[ -z "$group" ]]; then
	group="woven";
fi;

help="\nHelp: This script is used to fix permissions of a drupal installation\nyou need to provide the following arguments:\n\t 1) Path to your drupal installation\n\t 2) Username of the user that you want to give files/directories ownership\nNote: \"www-data\" (apache default) is assumed as the group the server is belonging to, if this is different you need to modify it manually by editing this script\n\nUsage: (sudo) bash ${0##*/} drupal_path user_name\n";

if [[ -z "$path" ]] || [[ ! -d "$path/sites" ]] ||
   [[ ! -f "$path/modules/system/system.module" ]]; then
	echo "Please provide a valid drupal path";
	echo -e "$help";
	exit 1;
fi;

if ! getent passwd "$user" >/dev/null 2>/dev/null; then
	echo "Please provide a valid user";
	echo -e "$help";
	exit 1;
fi;

pushd "$path";

echo "Resetting all permissions";
setfacl -Rb ".";
chown -Rh "$user:$group" ".";
find . -type d -exec chmod ug=rwx,o= '{}' '+';
find . -type f -exec chmod ug=rw,o= '{}' '+';
find . -type d -exec setfacl -d -m "g::rwx" '{}' '+';

echo "Adding read permissions for webserver";
find . -type d -exec setfacl -m g:www:rx '{}' '+';
find . -type f -exec setfacl -m g:www:r '{}' '+';

pushd sites/;

echo "Adding write permissions for webserver";
find */files/ -type d -exec setfacl -d -m g:www:rwx '{}' '+';
find */files/ -type d -exec setfacl -m g:www:rwx '{}' '+';
find */files/ -type f -exec setfacl -m g:www:rw '{}' '+';

popd;
popd;
