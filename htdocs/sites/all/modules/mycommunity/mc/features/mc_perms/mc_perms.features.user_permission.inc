<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function mc_perms_user_default_permissions() {
  $permissions = array();

  // Exported permission: Allow Reordering
  $permissions['Allow Reordering'] = array(
    'name' => 'Allow Reordering',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: Use PHP input for field settings (dangerous - grant with care)
  $permissions['Use PHP input for field settings (dangerous - grant with care)'] = array(
    'name' => 'Use PHP input for field settings (dangerous - grant with care)',
    'roles' => array(),
  );

  // Exported permission: View IP addresses
  $permissions['View IP addresses'] = array(
    'name' => 'View IP addresses',
    'roles' => array(),
  );

  // Exported permission: View statistics
  $permissions['View statistics'] = array(
    'name' => 'View statistics',
    'roles' => array(),
  );

  // Exported permission: access admin theme
  $permissions['access admin theme'] = array(
    'name' => 'access admin theme',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: access administration menu
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(),
  );

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(),
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
  );

  // Exported permission: access all webform results
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      '0' => 'community manager',
    ),
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: access environment indicator
  $permissions['access environment indicator'] = array(
    'name' => 'access environment indicator',
    'roles' => array(),
  );

  // Exported permission: access own webform results
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(),
  );

  // Exported permission: access own webform submissions
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(),
  );

  // Exported permission: access security review list
  $permissions['access security review list'] = array(
    'name' => 'access security review list',
    'roles' => array(),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(),
  );

  // Exported permission: access statistics
  $permissions['access statistics'] = array(
    'name' => 'access statistics',
    'roles' => array(),
  );

  // Exported permission: access user profiles
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'community manager',
    ),
  );

  // Exported permission: act as a member for any group
  $permissions['act as a member for any group'] = array(
    'name' => 'act as a member for any group',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: act as a visitor for any group
  $permissions['act as a visitor for any group'] = array(
    'name' => 'act as a visitor for any group',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: act as an admin for any group
  $permissions['act as an admin for any group'] = array(
    'name' => 'act as an admin for any group',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: act as the manager for any group
  $permissions['act as the manager for any group'] = array(
    'name' => 'act as the manager for any group',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: add group content
  $permissions['add group content'] = array(
    'name' => 'add group content',
    'roles' => array(),
  );

  // Exported permission: add photos in any album
  $permissions['add photos in any album'] = array(
    'name' => 'add photos in any album',
    'roles' => array(),
  );

  // Exported permission: add photos in any album of the groups I manage
  $permissions['add photos in any album of the groups I manage'] = array(
    'name' => 'add photos in any album of the groups I manage',
    'roles' => array(),
  );

  // Exported permission: add photos in any public album
  $permissions['add photos in any public album'] = array(
    'name' => 'add photos in any public album',
    'roles' => array(),
  );

  // Exported permission: add stuff article
  $permissions['add stuff article'] = array(
    'name' => 'add stuff article',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: add stuff audio
  $permissions['add stuff audio'] = array(
    'name' => 'add stuff audio',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: add stuff event
  $permissions['add stuff event'] = array(
    'name' => 'add stuff event',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: add stuff file
  $permissions['add stuff file'] = array(
    'name' => 'add stuff file',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: add stuff forum
  $permissions['add stuff forum'] = array(
    'name' => 'add stuff forum',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: add stuff gallery
  $permissions['add stuff gallery'] = array(
    'name' => 'add stuff gallery',
    'roles' => array(),
  );

  // Exported permission: add stuff gallery_image
  $permissions['add stuff gallery_image'] = array(
    'name' => 'add stuff gallery_image',
    'roles' => array(),
  );

  // Exported permission: add stuff group
  $permissions['add stuff group'] = array(
    'name' => 'add stuff group',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: add stuff link
  $permissions['add stuff link'] = array(
    'name' => 'add stuff link',
    'roles' => array(),
  );

  // Exported permission: add stuff nnews
  $permissions['add stuff nnews'] = array(
    'name' => 'add stuff nnews',
    'roles' => array(),
  );

  // Exported permission: add stuff npage
  $permissions['add stuff npage'] = array(
    'name' => 'add stuff npage',
    'roles' => array(),
  );

  // Exported permission: add stuff page_general
  $permissions['add stuff page_general'] = array(
    'name' => 'add stuff page_general',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: add stuff place
  $permissions['add stuff place'] = array(
    'name' => 'add stuff place',
    'roles' => array(),
  );

  // Exported permission: add stuff taxonomy_feature
  $permissions['add stuff taxonomy_feature'] = array(
    'name' => 'add stuff taxonomy_feature',
    'roles' => array(),
  );

  // Exported permission: add stuff taxonomy_topic
  $permissions['add stuff taxonomy_topic'] = array(
    'name' => 'add stuff taxonomy_topic',
    'roles' => array(),
  );

  // Exported permission: add stuff video
  $permissions['add stuff video'] = array(
    'name' => 'add stuff video',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: add stuff webform
  $permissions['add stuff webform'] = array(
    'name' => 'add stuff webform',
    'roles' => array(),
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(),
  );

  // Exported permission: administer conditional fields
  $permissions['administer conditional fields'] = array(
    'name' => 'administer conditional fields',
    'roles' => array(),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
  );

  // Exported permission: administer custom pagers
  $permissions['administer custom pagers'] = array(
    'name' => 'administer custom pagers',
    'roles' => array(),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(),
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
  );

  // Exported permission: administer flash
  $permissions['administer flash'] = array(
    'name' => 'administer flash',
    'roles' => array(),
  );

  // Exported permission: administer forums
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(),
  );

  // Exported permission: administer group main page
  $permissions['administer group main page'] = array(
    'name' => 'administer group main page',
    'roles' => array(),
  );

  // Exported permission: administer groupadmin
  $permissions['administer groupadmin'] = array(
    'name' => 'administer groupadmin',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: administer imageapi
  $permissions['administer imageapi'] = array(
    'name' => 'administer imageapi',
    'roles' => array(),
  );

  // Exported permission: administer imagecache
  $permissions['administer imagecache'] = array(
    'name' => 'administer imagecache',
    'roles' => array(),
  );

  // Exported permission: administer jquery media
  $permissions['administer jquery media'] = array(
    'name' => 'administer jquery media',
    'roles' => array(),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(),
  );

  // Exported permission: administer meta tags
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(),
  );

  // Exported permission: administer module filter
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: administer og menu
  $permissions['administer og menu'] = array(
    'name' => 'administer og menu',
    'roles' => array(),
  );

  // Exported permission: administer organic groups
  $permissions['administer organic groups'] = array(
    'name' => 'administer organic groups',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: administer page titles
  $permissions['administer page titles'] = array(
    'name' => 'administer page titles',
    'roles' => array(),
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
  );

  // Exported permission: administer quicktabs
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(),
  );

  // Exported permission: administer search
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(),
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(),
  );

  // Exported permission: administer theme assignments
  $permissions['administer theme assignments'] = array(
    'name' => 'administer theme assignments',
    'roles' => array(),
  );

  // Exported permission: administer themekey settings
  $permissions['administer themekey settings'] = array(
    'name' => 'administer themekey settings',
    'roles' => array(),
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(),
  );

  // Exported permission: administer user stats
  $permissions['administer user stats'] = array(
    'name' => 'administer user stats',
    'roles' => array(),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
  );

  // Exported permission: administer xmlsitemap
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(),
  );

  // Exported permission: bypass advanced aggregation
  $permissions['bypass advanced aggregation'] = array(
    'name' => 'bypass advanced aggregation',
    'roles' => array(),
  );

  // Exported permission: change own username
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: collapse format fieldset by default
  $permissions['collapse format fieldset by default'] = array(
    'name' => 'collapse format fieldset by default',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: collapsible format selection
  $permissions['collapsible format selection'] = array(
    'name' => 'collapsible format selection',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: configure heartbeat
  $permissions['configure heartbeat'] = array(
    'name' => 'configure heartbeat',
    'roles' => array(),
  );

  // Exported permission: configure heartbeat messages
  $permissions['configure heartbeat messages'] = array(
    'name' => 'configure heartbeat messages',
    'roles' => array(),
  );

  // Exported permission: create article content
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: create article sitewide
  $permissions['create article sitewide'] = array(
    'name' => 'create article sitewide',
    'roles' => array(),
  );

  // Exported permission: create audio content
  $permissions['create audio content'] = array(
    'name' => 'create audio content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: create audio sitewide
  $permissions['create audio sitewide'] = array(
    'name' => 'create audio sitewide',
    'roles' => array(),
  );

  // Exported permission: create event content
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create event sitewide
  $permissions['create event sitewide'] = array(
    'name' => 'create event sitewide',
    'roles' => array(),
  );

  // Exported permission: create file content
  $permissions['create file content'] = array(
    'name' => 'create file content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: create file sitewide
  $permissions['create file sitewide'] = array(
    'name' => 'create file sitewide',
    'roles' => array(),
  );

  // Exported permission: create forum sitewide
  $permissions['create forum sitewide'] = array(
    'name' => 'create forum sitewide',
    'roles' => array(),
  );

  // Exported permission: create forum topics
  $permissions['create forum topics'] = array(
    'name' => 'create forum topics',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create gallery content
  $permissions['create gallery content'] = array(
    'name' => 'create gallery content',
    'roles' => array(),
  );

  // Exported permission: create gallery sitewide
  $permissions['create gallery sitewide'] = array(
    'name' => 'create gallery sitewide',
    'roles' => array(),
  );

  // Exported permission: create gallery_image content
  $permissions['create gallery_image content'] = array(
    'name' => 'create gallery_image content',
    'roles' => array(),
  );

  // Exported permission: create gallery_image sitewide
  $permissions['create gallery_image sitewide'] = array(
    'name' => 'create gallery_image sitewide',
    'roles' => array(),
  );

  // Exported permission: create group content
  $permissions['create group content'] = array(
    'name' => 'create group content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create group sitewide
  $permissions['create group sitewide'] = array(
    'name' => 'create group sitewide',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: create link content
  $permissions['create link content'] = array(
    'name' => 'create link content',
    'roles' => array(),
  );

  // Exported permission: create link sitewide
  $permissions['create link sitewide'] = array(
    'name' => 'create link sitewide',
    'roles' => array(),
  );

  // Exported permission: create nnews content
  $permissions['create nnews content'] = array(
    'name' => 'create nnews content',
    'roles' => array(),
  );

  // Exported permission: create nnews sitewide
  $permissions['create nnews sitewide'] = array(
    'name' => 'create nnews sitewide',
    'roles' => array(),
  );

  // Exported permission: create npage content
  $permissions['create npage content'] = array(
    'name' => 'create npage content',
    'roles' => array(),
  );

  // Exported permission: create npage sitewide
  $permissions['create npage sitewide'] = array(
    'name' => 'create npage sitewide',
    'roles' => array(),
  );

  // Exported permission: create page_general content
  $permissions['create page_general content'] = array(
    'name' => 'create page_general content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: create page_general sitewide
  $permissions['create page_general sitewide'] = array(
    'name' => 'create page_general sitewide',
    'roles' => array(),
  );

  // Exported permission: create place content
  $permissions['create place content'] = array(
    'name' => 'create place content',
    'roles' => array(),
  );

  // Exported permission: create place sitewide
  $permissions['create place sitewide'] = array(
    'name' => 'create place sitewide',
    'roles' => array(),
  );

  // Exported permission: create taxonomy_feature content
  $permissions['create taxonomy_feature content'] = array(
    'name' => 'create taxonomy_feature content',
    'roles' => array(),
  );

  // Exported permission: create taxonomy_feature sitewide
  $permissions['create taxonomy_feature sitewide'] = array(
    'name' => 'create taxonomy_feature sitewide',
    'roles' => array(),
  );

  // Exported permission: create taxonomy_topic content
  $permissions['create taxonomy_topic content'] = array(
    'name' => 'create taxonomy_topic content',
    'roles' => array(),
  );

  // Exported permission: create taxonomy_topic sitewide
  $permissions['create taxonomy_topic sitewide'] = array(
    'name' => 'create taxonomy_topic sitewide',
    'roles' => array(),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(),
  );

  // Exported permission: create video content
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create video sitewide
  $permissions['create video sitewide'] = array(
    'name' => 'create video sitewide',
    'roles' => array(),
  );

  // Exported permission: create webform content
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
  );

  // Exported permission: create webform sitewide
  $permissions['create webform sitewide'] = array(
    'name' => 'create webform sitewide',
    'roles' => array(),
  );

  // Exported permission: delete all webform submissions
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(),
  );

  // Exported permission: delete any article content
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: delete any audio content
  $permissions['delete any audio content'] = array(
    'name' => 'delete any audio content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: delete any event content
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: delete any file content
  $permissions['delete any file content'] = array(
    'name' => 'delete any file content',
    'roles' => array(),
  );

  // Exported permission: delete any forum topic
  $permissions['delete any forum topic'] = array(
    'name' => 'delete any forum topic',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: delete any gallery content
  $permissions['delete any gallery content'] = array(
    'name' => 'delete any gallery content',
    'roles' => array(),
  );

  // Exported permission: delete any gallery_image content
  $permissions['delete any gallery_image content'] = array(
    'name' => 'delete any gallery_image content',
    'roles' => array(),
  );

  // Exported permission: delete any group content
  $permissions['delete any group content'] = array(
    'name' => 'delete any group content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: delete any link content
  $permissions['delete any link content'] = array(
    'name' => 'delete any link content',
    'roles' => array(),
  );

  // Exported permission: delete any nnews content
  $permissions['delete any nnews content'] = array(
    'name' => 'delete any nnews content',
    'roles' => array(),
  );

  // Exported permission: delete any npage content
  $permissions['delete any npage content'] = array(
    'name' => 'delete any npage content',
    'roles' => array(),
  );

  // Exported permission: delete any page_general content
  $permissions['delete any page_general content'] = array(
    'name' => 'delete any page_general content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: delete any place content
  $permissions['delete any place content'] = array(
    'name' => 'delete any place content',
    'roles' => array(),
  );

  // Exported permission: delete any taxonomy_feature content
  $permissions['delete any taxonomy_feature content'] = array(
    'name' => 'delete any taxonomy_feature content',
    'roles' => array(),
  );

  // Exported permission: delete any taxonomy_topic content
  $permissions['delete any taxonomy_topic content'] = array(
    'name' => 'delete any taxonomy_topic content',
    'roles' => array(),
  );

  // Exported permission: delete any video content
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: delete any webform content
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
  );

  // Exported permission: delete heartbeat activity logs
  $permissions['delete heartbeat activity logs'] = array(
    'name' => 'delete heartbeat activity logs',
    'roles' => array(),
  );

  // Exported permission: delete own article content
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own audio content
  $permissions['delete own audio content'] = array(
    'name' => 'delete own audio content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own event content
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own file content
  $permissions['delete own file content'] = array(
    'name' => 'delete own file content',
    'roles' => array(),
  );

  // Exported permission: delete own forum topics
  $permissions['delete own forum topics'] = array(
    'name' => 'delete own forum topics',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own gallery content
  $permissions['delete own gallery content'] = array(
    'name' => 'delete own gallery content',
    'roles' => array(),
  );

  // Exported permission: delete own gallery_image content
  $permissions['delete own gallery_image content'] = array(
    'name' => 'delete own gallery_image content',
    'roles' => array(),
  );

  // Exported permission: delete own group content
  $permissions['delete own group content'] = array(
    'name' => 'delete own group content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: delete own heartbeat activity logs
  $permissions['delete own heartbeat activity logs'] = array(
    'name' => 'delete own heartbeat activity logs',
    'roles' => array(),
  );

  // Exported permission: delete own link content
  $permissions['delete own link content'] = array(
    'name' => 'delete own link content',
    'roles' => array(),
  );

  // Exported permission: delete own nnews content
  $permissions['delete own nnews content'] = array(
    'name' => 'delete own nnews content',
    'roles' => array(),
  );

  // Exported permission: delete own npage content
  $permissions['delete own npage content'] = array(
    'name' => 'delete own npage content',
    'roles' => array(),
  );

  // Exported permission: delete own page_general content
  $permissions['delete own page_general content'] = array(
    'name' => 'delete own page_general content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own place content
  $permissions['delete own place content'] = array(
    'name' => 'delete own place content',
    'roles' => array(),
  );

  // Exported permission: delete own taxonomy_feature content
  $permissions['delete own taxonomy_feature content'] = array(
    'name' => 'delete own taxonomy_feature content',
    'roles' => array(),
  );

  // Exported permission: delete own taxonomy_topic content
  $permissions['delete own taxonomy_topic content'] = array(
    'name' => 'delete own taxonomy_topic content',
    'roles' => array(),
  );

  // Exported permission: delete own video content
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own webform content
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
  );

  // Exported permission: delete own webform submissions
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(),
  );

  // Exported permission: display drupal links
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
  );

  // Exported permission: edit all webform submissions
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(),
  );

  // Exported permission: edit any article content
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: edit any audio content
  $permissions['edit any audio content'] = array(
    'name' => 'edit any audio content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: edit any event content
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: edit any file content
  $permissions['edit any file content'] = array(
    'name' => 'edit any file content',
    'roles' => array(),
  );

  // Exported permission: edit any forum topic
  $permissions['edit any forum topic'] = array(
    'name' => 'edit any forum topic',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: edit any gallery content
  $permissions['edit any gallery content'] = array(
    'name' => 'edit any gallery content',
    'roles' => array(),
  );

  // Exported permission: edit any gallery_image content
  $permissions['edit any gallery_image content'] = array(
    'name' => 'edit any gallery_image content',
    'roles' => array(),
  );

  // Exported permission: edit any group content
  $permissions['edit any group content'] = array(
    'name' => 'edit any group content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: edit any link content
  $permissions['edit any link content'] = array(
    'name' => 'edit any link content',
    'roles' => array(),
  );

  // Exported permission: edit any nnews content
  $permissions['edit any nnews content'] = array(
    'name' => 'edit any nnews content',
    'roles' => array(),
  );

  // Exported permission: edit any npage content
  $permissions['edit any npage content'] = array(
    'name' => 'edit any npage content',
    'roles' => array(
      '0' => 'community manager',
    ),
  );

  // Exported permission: edit any page_general content
  $permissions['edit any page_general content'] = array(
    'name' => 'edit any page_general content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: edit any place content
  $permissions['edit any place content'] = array(
    'name' => 'edit any place content',
    'roles' => array(),
  );

  // Exported permission: edit any taxonomy_feature content
  $permissions['edit any taxonomy_feature content'] = array(
    'name' => 'edit any taxonomy_feature content',
    'roles' => array(),
  );

  // Exported permission: edit any taxonomy_topic content
  $permissions['edit any taxonomy_topic content'] = array(
    'name' => 'edit any taxonomy_topic content',
    'roles' => array(),
  );

  // Exported permission: edit any video content
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: edit any webform content
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
  );

  // Exported permission: edit canonical URL meta tag
  $permissions['edit canonical URL meta tag'] = array(
    'name' => 'edit canonical URL meta tag',
    'roles' => array(),
  );

  // Exported permission: edit meta tag ABSTRACT
  $permissions['edit meta tag ABSTRACT'] = array(
    'name' => 'edit meta tag ABSTRACT',
    'roles' => array(),
  );

  // Exported permission: edit meta tag COPYRIGHT
  $permissions['edit meta tag COPYRIGHT'] = array(
    'name' => 'edit meta tag COPYRIGHT',
    'roles' => array(),
  );

  // Exported permission: edit meta tag DESCRIPTION
  $permissions['edit meta tag DESCRIPTION'] = array(
    'name' => 'edit meta tag DESCRIPTION',
    'roles' => array(),
  );

  // Exported permission: edit meta tag KEYWORDS
  $permissions['edit meta tag KEYWORDS'] = array(
    'name' => 'edit meta tag KEYWORDS',
    'roles' => array(),
  );

  // Exported permission: edit meta tag REVISIT-AFTER
  $permissions['edit meta tag REVISIT-AFTER'] = array(
    'name' => 'edit meta tag REVISIT-AFTER',
    'roles' => array(),
  );

  // Exported permission: edit meta tag ROBOTS
  $permissions['edit meta tag ROBOTS'] = array(
    'name' => 'edit meta tag ROBOTS',
    'roles' => array(),
  );

  // Exported permission: edit own article content
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own audio content
  $permissions['edit own audio content'] = array(
    'name' => 'edit own audio content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own event content
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own file content
  $permissions['edit own file content'] = array(
    'name' => 'edit own file content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own forum topics
  $permissions['edit own forum topics'] = array(
    'name' => 'edit own forum topics',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own gallery content
  $permissions['edit own gallery content'] = array(
    'name' => 'edit own gallery content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own gallery_image content
  $permissions['edit own gallery_image content'] = array(
    'name' => 'edit own gallery_image content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own group content
  $permissions['edit own group content'] = array(
    'name' => 'edit own group content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own link content
  $permissions['edit own link content'] = array(
    'name' => 'edit own link content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own nnews content
  $permissions['edit own nnews content'] = array(
    'name' => 'edit own nnews content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own npage content
  $permissions['edit own npage content'] = array(
    'name' => 'edit own npage content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own page_general content
  $permissions['edit own page_general content'] = array(
    'name' => 'edit own page_general content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own place content
  $permissions['edit own place content'] = array(
    'name' => 'edit own place content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own taxonomy_feature content
  $permissions['edit own taxonomy_feature content'] = array(
    'name' => 'edit own taxonomy_feature content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own taxonomy_topic content
  $permissions['edit own taxonomy_topic content'] = array(
    'name' => 'edit own taxonomy_topic content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own video content
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own webform content
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
  );

  // Exported permission: edit own webform submissions
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(),
  );

  // Exported permission: exclude visits from counters
  $permissions['exclude visits from counters'] = array(
    'name' => 'exclude visits from counters',
    'roles' => array(),
  );

  // Exported permission: exclude visits from the access log
  $permissions['exclude visits from the access log'] = array(
    'name' => 'exclude visits from the access log',
    'roles' => array(),
  );

  // Exported permission: flush imagecache
  $permissions['flush imagecache'] = array(
    'name' => 'flush imagecache',
    'roles' => array(),
  );

  // Exported permission: import input formats
  $permissions['import input formats'] = array(
    'name' => 'import input formats',
    'roles' => array(),
  );

  // Exported permission: maintain own activity
  $permissions['maintain own activity'] = array(
    'name' => 'maintain own activity',
    'roles' => array(),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
  );

  // Exported permission: post by femail
  $permissions['post by femail'] = array(
    'name' => 'post by femail',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'community manager',
      '3' => 'group manager',
    ),
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: post comments without approval
  $permissions['post comments without approval'] = array(
    'name' => 'post comments without approval',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: post to all the groups
  $permissions['post to all the groups'] = array(
    'name' => 'post to all the groups',
    'roles' => array(
      '0' => 'community manager',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(),
  );

  // Exported permission: run security checks
  $permissions['run security checks'] = array(
    'name' => 'run security checks',
    'roles' => array(),
  );

  // Exported permission: search Google CSE
  $permissions['search Google CSE'] = array(
    'name' => 'search Google CSE',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(),
  );

  // Exported permission: set page title
  $permissions['set page title'] = array(
    'name' => 'set page title',
    'roles' => array(),
  );

  // Exported permission: show format selection for blocks
  $permissions['show format selection for blocks'] = array(
    'name' => 'show format selection for blocks',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: show format selection for comments
  $permissions['show format selection for comments'] = array(
    'name' => 'show format selection for comments',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: show format selection for nodes
  $permissions['show format selection for nodes'] = array(
    'name' => 'show format selection for nodes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: show format tips
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: show more format tips link
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: submit latitude/longitude
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(),
  );

  // Exported permission: use admin toolbar
  $permissions['use admin toolbar'] = array(
    'name' => 'use admin toolbar',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(),
  );

  // Exported permission: use php in custom pagers
  $permissions['use php in custom pagers'] = array(
    'name' => 'use php in custom pagers',
    'roles' => array(),
  );

  // Exported permission: use realname
  $permissions['use realname'] = array(
    'name' => 'use realname',
    'roles' => array(),
  );

  // Exported permission: view advanced help index
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(),
  );

  // Exported permission: view advanced help popup
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(),
  );

  // Exported permission: view advanced help topic
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(),
  );

  // Exported permission: view heartbeat messages
  $permissions['view heartbeat messages'] = array(
    'name' => 'view heartbeat messages',
    'roles' => array(),
  );

  // Exported permission: view imagecache comment_image
  $permissions['view imagecache comment_image'] = array(
    'name' => 'view imagecache comment_image',
    'roles' => array(),
  );

  // Exported permission: view imagecache featured_item
  $permissions['view imagecache featured_item'] = array(
    'name' => 'view imagecache featured_item',
    'roles' => array(),
  );

  // Exported permission: view imagecache featured_photo
  $permissions['view imagecache featured_photo'] = array(
    'name' => 'view imagecache featured_photo',
    'roles' => array(),
  );

  // Exported permission: view imagecache featured_slideshow
  $permissions['view imagecache featured_slideshow'] = array(
    'name' => 'view imagecache featured_slideshow',
    'roles' => array(),
  );

  // Exported permission: view imagecache group-page-logo
  $permissions['view imagecache group-page-logo'] = array(
    'name' => 'view imagecache group-page-logo',
    'roles' => array(),
  );

  // Exported permission: view imagecache group_logo
  $permissions['view imagecache group_logo'] = array(
    'name' => 'view imagecache group_logo',
    'roles' => array(),
  );

  // Exported permission: view imagecache header_mini_avatar
  $permissions['view imagecache header_mini_avatar'] = array(
    'name' => 'view imagecache header_mini_avatar',
    'roles' => array(),
  );

  // Exported permission: view imagecache medium
  $permissions['view imagecache medium'] = array(
    'name' => 'view imagecache medium',
    'roles' => array(),
  );

  // Exported permission: view imagecache node_image
  $permissions['view imagecache node_image'] = array(
    'name' => 'view imagecache node_image',
    'roles' => array(),
  );

  // Exported permission: view imagecache photo_gallery_big
  $permissions['view imagecache photo_gallery_big'] = array(
    'name' => 'view imagecache photo_gallery_big',
    'roles' => array(),
  );

  // Exported permission: view imagecache photo_gallery_thumbnail
  $permissions['view imagecache photo_gallery_thumbnail'] = array(
    'name' => 'view imagecache photo_gallery_thumbnail',
    'roles' => array(),
  );

  // Exported permission: view imagecache reg
  $permissions['view imagecache reg'] = array(
    'name' => 'view imagecache reg',
    'roles' => array(),
  );

  // Exported permission: view imagecache search_result_image
  $permissions['view imagecache search_result_image'] = array(
    'name' => 'view imagecache search_result_image',
    'roles' => array(),
  );

  // Exported permission: view imagecache short
  $permissions['view imagecache short'] = array(
    'name' => 'view imagecache short',
    'roles' => array(),
  );

  // Exported permission: view imagecache submitted_avatar
  $permissions['view imagecache submitted_avatar'] = array(
    'name' => 'view imagecache submitted_avatar',
    'roles' => array(),
  );

  // Exported permission: view imagecache tagline_ico
  $permissions['view imagecache tagline_ico'] = array(
    'name' => 'view imagecache tagline_ico',
    'roles' => array(),
  );

  // Exported permission: view imagecache thumb
  $permissions['view imagecache thumb'] = array(
    'name' => 'view imagecache thumb',
    'roles' => array(),
  );

  // Exported permission: view imagecache thumbnail
  $permissions['view imagecache thumbnail'] = array(
    'name' => 'view imagecache thumbnail',
    'roles' => array(),
  );

  // Exported permission: view imagecache tiny
  $permissions['view imagecache tiny'] = array(
    'name' => 'view imagecache tiny',
    'roles' => array(),
  );

  // Exported permission: view imagecache user_account_thum
  $permissions['view imagecache user_account_thum'] = array(
    'name' => 'view imagecache user_account_thum',
    'roles' => array(),
  );

  // Exported permission: view imagecache user_comment_image
  $permissions['view imagecache user_comment_image'] = array(
    'name' => 'view imagecache user_comment_image',
    'roles' => array(),
  );

  // Exported permission: view location directory
  $permissions['view location directory'] = array(
    'name' => 'view location directory',
    'roles' => array(),
  );

  // Exported permission: view node location table
  $permissions['view node location table'] = array(
    'name' => 'view node location table',
    'roles' => array(),
  );

  // Exported permission: view node map
  $permissions['view node map'] = array(
    'name' => 'view node map',
    'roles' => array(),
  );

  // Exported permission: view personal heartbeat activity
  $permissions['view personal heartbeat activity'] = array(
    'name' => 'view personal heartbeat activity',
    'roles' => array(),
  );

  // Exported permission: view post access counter
  $permissions['view post access counter'] = array(
    'name' => 'view post access counter',
    'roles' => array(),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(),
  );

  // Exported permission: view user location details
  $permissions['view user location details'] = array(
    'name' => 'view user location details',
    'roles' => array(),
  );

  // Exported permission: view user location table
  $permissions['view user location table'] = array(
    'name' => 'view user location table',
    'roles' => array(),
  );

  // Exported permission: view user map
  $permissions['view user map'] = array(
    'name' => 'view user map',
    'roles' => array(),
  );

  // Exported permission: view/search email addresses
  $permissions['view/search email addresses'] = array(
    'name' => 'view/search email addresses',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  // Exported permission: view/search real names
  $permissions['view/search real names'] = array(
    'name' => 'view/search real names',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'community manager',
    ),
  );

  return $permissions;
}
