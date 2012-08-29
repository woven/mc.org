README file for the OG Audience Drupal module for 5.x

Requires the Organic Groups module.

Description
***********

The OG Audience module allows Organic Groups (OG) users to change a node's
audience without having to edit the node.

This module works by providing a new "change audience" permission, and an
"Audience" tab and/or block on node pages that allows users to change the
audience of existing content. A user can add any node to one or more of the
groups he/she has subscribed to. A group manager can remove a node from his/her
group(s). A node's author can remove the node from one or more of the groups
he/she has subscribed to.


Installation and configuration
******************************

1. Copy the 'og_audience' directory and its content into your Drupal modules
   directory.

2. Grant the "change audience" permission to the desired roles.

3. Visit the settings page at admin/og/og-audience.

4. If desired, enable the block at admin/build/block.


Usage
*****

Select a node to view, then go to the "Audience" tab or use the block.

In the "Add" section, select groups to add the node to. The only groups
appearing in this list are those you are a subscriber of, and to which the node
is not already associated with.

In the "Remove" section, select groups to remove the node from. If you are the
node's author, this list contains groups you are a subscriber of, and that are
currently associated with the node. If you are a group manager, this list shows
groups you are responsible of, and that are currently associated with the node.

When the Organic groups access control module is enabled: If a node was not
already associated with any group, you will have the option to make it public or
private to the group(s) you are adding it to. If a node was already associated
to one or more groups, its visibility outside groups will remain unchanged.


Credits
*******

- Initially developed on behalf of Koumbit.org (http://koumbit.org).

- Sponsored in part by:
  - http://www.geekomatik.com
  - http://www.geekmenow.com
  - Initiatives of Change International (http://www.iofc.org)
