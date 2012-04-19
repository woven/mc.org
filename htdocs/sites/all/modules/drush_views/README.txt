// $Id $

DESCRIPTION
-----------

Drush Views (The Drupal Shell Views interface) allows you to
list, import, export and delete views from the command line.

It provides the following commands: "views list", "views import",
"views export" and "views delete".

Run "drush help <command>" to see supported command line options
and arguments.

REQUIREMENTS
------------
No special requirements on unix-like systems.
Drush Views uses the ordinary PHP commands for file and directory
handling, but it is still untested on Windows.
Drush Views 3.x will only work with Drush 3.x or later and with
Views 2.x.

INSTALLATION
-------------------------------
Installation of drush_views is consistent with most Drupal modules.
It is NOT the same as installing the Drush tool.

Since you are already using Drush (a prerequisite for this module)
you may use the Drush install method.
* drush dl drush_views (download, extract and place the module)
* drush en drush_views (enable the module)

Alternatively, you may also download drush_views manually,
place it in one of the appropriate 'modules' directories and
enable it in the administrative area of Drupal. More information
on this method may be found in the Drupal documentation
"Installing contributed modules":
For Drupal 6: http://drupal.org/getting-started/install-contrib/modules
For Drupal 7: http://drupal.org/node/895232

LICENSE
-------
Drush Views, Copyright (C) 2009-2012 Andrea Pescetti

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 or, at your option, any
later version of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

------------
Written by Andrea Pescetti http://drupal.org/user/436244
Sponsored by Youth Agora http://www.youthagora.org
Sponsored by Nuvole http://nuvole.org

