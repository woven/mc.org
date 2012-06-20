<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function mt_access_user_default_permissions() {
  $permissions = array();

  // Exported permission: Use PHP input for field settings (dangerous - grant with care)
  $permissions['Use PHP input for field settings (dangerous - grant with care)'] = array(
    'name' => 'Use PHP input for field settings (dangerous - grant with care)',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: View IP addresses
  $permissions['View IP addresses'] = array(
    'name' => 'View IP addresses',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: View statistics
  $permissions['View statistics'] = array(
    'name' => 'View statistics',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access admin theme
  $permissions['access admin theme'] = array(
    'name' => 'access admin theme',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: access administration menu
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: access all views
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: access all webform results
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: access comments
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: access devel information
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access display suite
  $permissions['access display suite'] = array(
    'name' => 'access display suite',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access own webform results
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: access own webform submissions
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: access security review list
  $permissions['access security review list'] = array(
    'name' => 'access security review list',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: access site reports
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
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
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: add group content
  $permissions['add group content'] = array(
    'name' => 'add group content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: add photos in any album
  $permissions['add photos in any album'] = array(
    'name' => 'add photos in any album',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: add photos in any album of the groups I manage
  $permissions['add photos in any album of the groups I manage'] = array(
    'name' => 'add photos in any album of the groups I manage',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'group manager',
    ),
  );

  // Exported permission: add photos in any public album
  $permissions['add photos in any public album'] = array(
    'name' => 'add photos in any public album',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: administer actions
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer comments
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer conditional fields
  $permissions['administer conditional fields'] = array(
    'name' => 'administer conditional fields',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer content types
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer custom pagers
  $permissions['administer custom pagers'] = array(
    'name' => 'administer custom pagers',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer dummyimage
  $permissions['administer dummyimage'] = array(
    'name' => 'administer dummyimage',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer feedapi
  $permissions['administer feedapi'] = array(
    'name' => 'administer feedapi',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer files
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer flash
  $permissions['administer flash'] = array(
    'name' => 'administer flash',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer form filters
  $permissions['administer form filters'] = array(
    'name' => 'administer form filters',
    'roles' => array(),
  );

  // Exported permission: administer forums
  $permissions['administer forums'] = array(
    'name' => 'administer forums',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'group manager',
    ),
  );

  // Exported permission: administer group main page
  $permissions['administer group main page'] = array(
    'name' => 'administer group main page',
    'roles' => array(),
  );

  // Exported permission: administer imageapi
  $permissions['administer imageapi'] = array(
    'name' => 'administer imageapi',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer imagecache
  $permissions['administer imagecache'] = array(
    'name' => 'administer imagecache',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer jquery media
  $permissions['administer jquery media'] = array(
    'name' => 'administer jquery media',
    'roles' => array(),
  );

  // Exported permission: administer less
  $permissions['administer less'] = array(
    'name' => 'administer less',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer menu
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer module filter
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer nd
  $permissions['administer nd'] = array(
    'name' => 'administer nd',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: administer og menu
  $permissions['administer og menu'] = array(
    'name' => 'administer og menu',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'group manager',
    ),
  );

  // Exported permission: administer organic groups
  $permissions['administer organic groups'] = array(
    'name' => 'administer organic groups',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer pathauto
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer permissions
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer quicktabs
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer rules
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(),
  );

  // Exported permission: administer site configuration
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer spaces
  $permissions['administer spaces'] = array(
    'name' => 'administer spaces',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer styles
  $permissions['administer styles'] = array(
    'name' => 'administer styles',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer url aliases
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer user stats
  $permissions['administer user stats'] = array(
    'name' => 'administer user stats',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: administer views
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: advanced feedapi options
  $permissions['advanced feedapi options'] = array(
    'name' => 'advanced feedapi options',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
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
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: configure heartbeat
  $permissions['configure heartbeat'] = array(
    'name' => 'configure heartbeat',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: configure heartbeat messages
  $permissions['configure heartbeat messages'] = array(
    'name' => 'configure heartbeat messages',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: configure layout for nd
  $permissions['configure layout for nd'] = array(
    'name' => 'configure layout for nd',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create article content
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create article sitewide
  $permissions['create article sitewide'] = array(
    'name' => 'create article sitewide',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create audio content
  $permissions['create audio content'] = array(
    'name' => 'create audio content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create audio sitewide
  $permissions['create audio sitewide'] = array(
    'name' => 'create audio sitewide',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create event content
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: create event sitewide
  $permissions['create event sitewide'] = array(
    'name' => 'create event sitewide',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: create event_feed content
  $permissions['create event_feed content'] = array(
    'name' => 'create event_feed content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: create event_feed sitewide
  $permissions['create event_feed sitewide'] = array(
    'name' => 'create event_feed sitewide',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: create file content
  $permissions['create file content'] = array(
    'name' => 'create file content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create file sitewide
  $permissions['create file sitewide'] = array(
    'name' => 'create file sitewide',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create forum sitewide
  $permissions['create forum sitewide'] = array(
    'name' => 'create forum sitewide',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create forum topics
  $permissions['create forum topics'] = array(
    'name' => 'create forum topics',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'group manager',
    ),
  );

  // Exported permission: create gallery content
  $permissions['create gallery content'] = array(
    'name' => 'create gallery content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create gallery sitewide
  $permissions['create gallery sitewide'] = array(
    'name' => 'create gallery sitewide',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create gallery_image content
  $permissions['create gallery_image content'] = array(
    'name' => 'create gallery_image content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create gallery_image sitewide
  $permissions['create gallery_image sitewide'] = array(
    'name' => 'create gallery_image sitewide',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create group content
  $permissions['create group content'] = array(
    'name' => 'create group content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: create group sitewide
  $permissions['create group sitewide'] = array(
    'name' => 'create group sitewide',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: create link content
  $permissions['create link content'] = array(
    'name' => 'create link content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create link sitewide
  $permissions['create link sitewide'] = array(
    'name' => 'create link sitewide',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create nnews content
  $permissions['create nnews content'] = array(
    'name' => 'create nnews content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create nnews sitewide
  $permissions['create nnews sitewide'] = array(
    'name' => 'create nnews sitewide',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create npage content
  $permissions['create npage content'] = array(
    'name' => 'create npage content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create npage sitewide
  $permissions['create npage sitewide'] = array(
    'name' => 'create npage sitewide',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create place content
  $permissions['create place content'] = array(
    'name' => 'create place content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create place sitewide
  $permissions['create place sitewide'] = array(
    'name' => 'create place sitewide',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create video content
  $permissions['create video content'] = array(
    'name' => 'create video content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create video sitewide
  $permissions['create video sitewide'] = array(
    'name' => 'create video sitewide',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create webform content
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: create webform sitewide
  $permissions['create webform sitewide'] = array(
    'name' => 'create webform sitewide',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete all webform submissions
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any article content
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any audio content
  $permissions['delete any audio content'] = array(
    'name' => 'delete any audio content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any event content
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any event_feed content
  $permissions['delete any event_feed content'] = array(
    'name' => 'delete any event_feed content',
    'roles' => array(),
  );

  // Exported permission: delete any file content
  $permissions['delete any file content'] = array(
    'name' => 'delete any file content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any forum topic
  $permissions['delete any forum topic'] = array(
    'name' => 'delete any forum topic',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'group manager',
    ),
  );

  // Exported permission: delete any gallery content
  $permissions['delete any gallery content'] = array(
    'name' => 'delete any gallery content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any gallery_image content
  $permissions['delete any gallery_image content'] = array(
    'name' => 'delete any gallery_image content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any group content
  $permissions['delete any group content'] = array(
    'name' => 'delete any group content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any link content
  $permissions['delete any link content'] = array(
    'name' => 'delete any link content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any nnews content
  $permissions['delete any nnews content'] = array(
    'name' => 'delete any nnews content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any npage content
  $permissions['delete any npage content'] = array(
    'name' => 'delete any npage content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any place content
  $permissions['delete any place content'] = array(
    'name' => 'delete any place content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any video content
  $permissions['delete any video content'] = array(
    'name' => 'delete any video content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete any webform content
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete heartbeat activity logs
  $permissions['delete heartbeat activity logs'] = array(
    'name' => 'delete heartbeat activity logs',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own article content
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: delete own audio content
  $permissions['delete own audio content'] = array(
    'name' => 'delete own audio content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'group manager',
    ),
  );

  // Exported permission: delete own event content
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: delete own event_feed content
  $permissions['delete own event_feed content'] = array(
    'name' => 'delete own event_feed content',
    'roles' => array(),
  );

  // Exported permission: delete own file content
  $permissions['delete own file content'] = array(
    'name' => 'delete own file content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: delete own forum topics
  $permissions['delete own forum topics'] = array(
    'name' => 'delete own forum topics',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: delete own gallery content
  $permissions['delete own gallery content'] = array(
    'name' => 'delete own gallery content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'group manager',
    ),
  );

  // Exported permission: delete own gallery_image content
  $permissions['delete own gallery_image content'] = array(
    'name' => 'delete own gallery_image content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: delete own group content
  $permissions['delete own group content'] = array(
    'name' => 'delete own group content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: delete own heartbeat activity logs
  $permissions['delete own heartbeat activity logs'] = array(
    'name' => 'delete own heartbeat activity logs',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own link content
  $permissions['delete own link content'] = array(
    'name' => 'delete own link content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: delete own nnews content
  $permissions['delete own nnews content'] = array(
    'name' => 'delete own nnews content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: delete own npage content
  $permissions['delete own npage content'] = array(
    'name' => 'delete own npage content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: delete own place content
  $permissions['delete own place content'] = array(
    'name' => 'delete own place content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: delete own video content
  $permissions['delete own video content'] = array(
    'name' => 'delete own video content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: delete own webform content
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'group manager',
    ),
  );

  // Exported permission: delete own webform submissions
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: display drupal links
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: display source code
  $permissions['display source code'] = array(
    'name' => 'display source code',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit all webform submissions
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: edit any article content
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: edit any audio content
  $permissions['edit any audio content'] = array(
    'name' => 'edit any audio content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: edit any event content
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'group manager',
    ),
  );

  // Exported permission: edit any event_feed content
  $permissions['edit any event_feed content'] = array(
    'name' => 'edit any event_feed content',
    'roles' => array(),
  );

  // Exported permission: edit any file content
  $permissions['edit any file content'] = array(
    'name' => 'edit any file content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: edit any forum topic
  $permissions['edit any forum topic'] = array(
    'name' => 'edit any forum topic',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'group manager',
    ),
  );

  // Exported permission: edit any gallery content
  $permissions['edit any gallery content'] = array(
    'name' => 'edit any gallery content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: edit any gallery_image content
  $permissions['edit any gallery_image content'] = array(
    'name' => 'edit any gallery_image content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: edit any group content
  $permissions['edit any group content'] = array(
    'name' => 'edit any group content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: edit any link content
  $permissions['edit any link content'] = array(
    'name' => 'edit any link content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: edit any nnews content
  $permissions['edit any nnews content'] = array(
    'name' => 'edit any nnews content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: edit any npage content
  $permissions['edit any npage content'] = array(
    'name' => 'edit any npage content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: edit any place content
  $permissions['edit any place content'] = array(
    'name' => 'edit any place content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: edit any video content
  $permissions['edit any video content'] = array(
    'name' => 'edit any video content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: edit any webform content
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'group manager',
    ),
  );

  // Exported permission: edit field_about
  $permissions['edit field_about'] = array(
    'name' => 'edit field_about',
    'roles' => array(),
  );

  // Exported permission: edit field_addphoto
  $permissions['edit field_addphoto'] = array(
    'name' => 'edit field_addphoto',
    'roles' => array(),
  );

  // Exported permission: edit field_block_body
  $permissions['edit field_block_body'] = array(
    'name' => 'edit field_block_body',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: edit field_block_link
  $permissions['edit field_block_link'] = array(
    'name' => 'edit field_block_link',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: edit field_block_title
  $permissions['edit field_block_title'] = array(
    'name' => 'edit field_block_title',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: edit field_computer_cost
  $permissions['edit field_computer_cost'] = array(
    'name' => 'edit field_computer_cost',
    'roles' => array(),
  );

  // Exported permission: edit field_computers_with_internet
  $permissions['edit field_computers_with_internet'] = array(
    'name' => 'edit field_computers_with_internet',
    'roles' => array(),
  );

  // Exported permission: edit field_contact_name
  $permissions['edit field_contact_name'] = array(
    'name' => 'edit field_contact_name',
    'roles' => array(),
  );

  // Exported permission: edit field_cost_per_session
  $permissions['edit field_cost_per_session'] = array(
    'name' => 'edit field_cost_per_session',
    'roles' => array(),
  );

  // Exported permission: edit field_editorial
  $permissions['edit field_editorial'] = array(
    'name' => 'edit field_editorial',
    'roles' => array(),
  );

  // Exported permission: edit field_email
  $permissions['edit field_email'] = array(
    'name' => 'edit field_email',
    'roles' => array(),
  );

  // Exported permission: edit field_embedtest
  $permissions['edit field_embedtest'] = array(
    'name' => 'edit field_embedtest',
    'roles' => array(),
  );

  // Exported permission: edit field_fax
  $permissions['edit field_fax'] = array(
    'name' => 'edit field_fax',
    'roles' => array(),
  );

  // Exported permission: edit field_featured_audio_video_items
  $permissions['edit field_featured_audio_video_items'] = array(
    'name' => 'edit field_featured_audio_video_items',
    'roles' => array(),
  );

  // Exported permission: edit field_featured_events
  $permissions['edit field_featured_events'] = array(
    'name' => 'edit field_featured_events',
    'roles' => array(),
  );

  // Exported permission: edit field_featured_group
  $permissions['edit field_featured_group'] = array(
    'name' => 'edit field_featured_group',
    'roles' => array(),
  );

  // Exported permission: edit field_featured_groups
  $permissions['edit field_featured_groups'] = array(
    'name' => 'edit field_featured_groups',
    'roles' => array(),
  );

  // Exported permission: edit field_featured_items
  $permissions['edit field_featured_items'] = array(
    'name' => 'edit field_featured_items',
    'roles' => array(),
  );

  // Exported permission: edit field_featured_members
  $permissions['edit field_featured_members'] = array(
    'name' => 'edit field_featured_members',
    'roles' => array(),
  );

  // Exported permission: edit field_featured_photo
  $permissions['edit field_featured_photo'] = array(
    'name' => 'edit field_featured_photo',
    'roles' => array(),
  );

  // Exported permission: edit field_featured_place
  $permissions['edit field_featured_place'] = array(
    'name' => 'edit field_featured_place',
    'roles' => array(),
  );

  // Exported permission: edit field_featured_places
  $permissions['edit field_featured_places'] = array(
    'name' => 'edit field_featured_places',
    'roles' => array(),
  );

  // Exported permission: edit field_gallery
  $permissions['edit field_gallery'] = array(
    'name' => 'edit field_gallery',
    'roles' => array(),
  );

  // Exported permission: edit field_gallery_image
  $permissions['edit field_gallery_image'] = array(
    'name' => 'edit field_gallery_image',
    'roles' => array(),
  );

  // Exported permission: edit field_group_featured_items
  $permissions['edit field_group_featured_items'] = array(
    'name' => 'edit field_group_featured_items',
    'roles' => array(),
  );

  // Exported permission: edit field_group_manager
  $permissions['edit field_group_manager'] = array(
    'name' => 'edit field_group_manager',
    'roles' => array(),
  );

  // Exported permission: edit field_header_color
  $permissions['edit field_header_color'] = array(
    'name' => 'edit field_header_color',
    'roles' => array(),
  );

  // Exported permission: edit field_header_title_color
  $permissions['edit field_header_title_color'] = array(
    'name' => 'edit field_header_title_color',
    'roles' => array(),
  );

  // Exported permission: edit field_health_insurance
  $permissions['edit field_health_insurance'] = array(
    'name' => 'edit field_health_insurance',
    'roles' => array(),
  );

  // Exported permission: edit field_health_services
  $permissions['edit field_health_services'] = array(
    'name' => 'edit field_health_services',
    'roles' => array(),
  );

  // Exported permission: edit field_hours
  $permissions['edit field_hours'] = array(
    'name' => 'edit field_hours',
    'roles' => array(),
  );

  // Exported permission: edit field_link
  $permissions['edit field_link'] = array(
    'name' => 'edit field_link',
    'roles' => array(),
  );

  // Exported permission: edit field_list_image
  $permissions['edit field_list_image'] = array(
    'name' => 'edit field_list_image',
    'roles' => array(),
  );

  // Exported permission: edit field_logo
  $permissions['edit field_logo'] = array(
    'name' => 'edit field_logo',
    'roles' => array(),
  );

  // Exported permission: edit field_media
  $permissions['edit field_media'] = array(
    'name' => 'edit field_media',
    'roles' => array(),
  );

  // Exported permission: edit field_open_in_evening
  $permissions['edit field_open_in_evening'] = array(
    'name' => 'edit field_open_in_evening',
    'roles' => array(),
  );

  // Exported permission: edit field_open_on_weekends
  $permissions['edit field_open_on_weekends'] = array(
    'name' => 'edit field_open_on_weekends',
    'roles' => array(),
  );

  // Exported permission: edit field_page_subtype
  $permissions['edit field_page_subtype'] = array(
    'name' => 'edit field_page_subtype',
    'roles' => array(),
  );

  // Exported permission: edit field_page_type
  $permissions['edit field_page_type'] = array(
    'name' => 'edit field_page_type',
    'roles' => array(),
  );

  // Exported permission: edit field_phone_number
  $permissions['edit field_phone_number'] = array(
    'name' => 'edit field_phone_number',
    'roles' => array(),
  );

  // Exported permission: edit field_place
  $permissions['edit field_place'] = array(
    'name' => 'edit field_place',
    'roles' => array(),
  );

  // Exported permission: edit field_place_type
  $permissions['edit field_place_type'] = array(
    'name' => 'edit field_place_type',
    'roles' => array(),
  );

  // Exported permission: edit field_public_album
  $permissions['edit field_public_album'] = array(
    'name' => 'edit field_public_album',
    'roles' => array(),
  );

  // Exported permission: edit field_related
  $permissions['edit field_related'] = array(
    'name' => 'edit field_related',
    'roles' => array(),
  );

  // Exported permission: edit field_small_name
  $permissions['edit field_small_name'] = array(
    'name' => 'edit field_small_name',
    'roles' => array(),
  );

  // Exported permission: edit field_special_features
  $permissions['edit field_special_features'] = array(
    'name' => 'edit field_special_features',
    'roles' => array(),
  );

  // Exported permission: edit field_tech_center_type
  $permissions['edit field_tech_center_type'] = array(
    'name' => 'edit field_tech_center_type',
    'roles' => array(),
  );

  // Exported permission: edit field_upload_file
  $permissions['edit field_upload_file'] = array(
    'name' => 'edit field_upload_file',
    'roles' => array(),
  );

  // Exported permission: edit field_video
  $permissions['edit field_video'] = array(
    'name' => 'edit field_video',
    'roles' => array(),
  );

  // Exported permission: edit field_website
  $permissions['edit field_website'] = array(
    'name' => 'edit field_website',
    'roles' => array(),
  );

  // Exported permission: edit field_wireless_cost
  $permissions['edit field_wireless_cost'] = array(
    'name' => 'edit field_wireless_cost',
    'roles' => array(),
  );

  // Exported permission: edit field_wireless_hotspot
  $permissions['edit field_wireless_hotspot'] = array(
    'name' => 'edit field_wireless_hotspot',
    'roles' => array(),
  );

  // Exported permission: edit own article content
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: edit own audio content
  $permissions['edit own audio content'] = array(
    'name' => 'edit own audio content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: edit own event content
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: edit own event_feed content
  $permissions['edit own event_feed content'] = array(
    'name' => 'edit own event_feed content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: edit own file content
  $permissions['edit own file content'] = array(
    'name' => 'edit own file content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: edit own forum topics
  $permissions['edit own forum topics'] = array(
    'name' => 'edit own forum topics',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: edit own gallery content
  $permissions['edit own gallery content'] = array(
    'name' => 'edit own gallery content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: edit own gallery_image content
  $permissions['edit own gallery_image content'] = array(
    'name' => 'edit own gallery_image content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: edit own group content
  $permissions['edit own group content'] = array(
    'name' => 'edit own group content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: edit own link content
  $permissions['edit own link content'] = array(
    'name' => 'edit own link content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: edit own nnews content
  $permissions['edit own nnews content'] = array(
    'name' => 'edit own nnews content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: edit own npage content
  $permissions['edit own npage content'] = array(
    'name' => 'edit own npage content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: edit own place content
  $permissions['edit own place content'] = array(
    'name' => 'edit own place content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: edit own video content
  $permissions['edit own video content'] = array(
    'name' => 'edit own video content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: edit own webform content
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: edit own webform submissions
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
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

  // Exported permission: execute php code
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: export and import settings
  $permissions['export and import settings'] = array(
    'name' => 'export and import settings',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: flush imagecache
  $permissions['flush imagecache'] = array(
    'name' => 'flush imagecache',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: import input formats
  $permissions['import input formats'] = array(
    'name' => 'import input formats',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: maintain own activity
  $permissions['maintain own activity'] = array(
    'name' => 'maintain own activity',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: post by femail
  $permissions['post by femail'] = array(
    'name' => 'post by femail',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
      '3' => 'group manager',
    ),
  );

  // Exported permission: post comments
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: post comments without approval
  $permissions['post comments without approval'] = array(
    'name' => 'post comments without approval',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: revert overridden settings
  $permissions['revert overridden settings'] = array(
    'name' => 'revert overridden settings',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: run security checks
  $permissions['run security checks'] = array(
    'name' => 'run security checks',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: search Google CSE
  $permissions['search Google CSE'] = array(
    'name' => 'search Google CSE',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: submit latitude/longitude
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: switch users
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: use PHP in custom fields
  $permissions['use PHP in custom fields'] = array(
    'name' => 'use PHP in custom fields',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: use admin toolbar
  $permissions['use admin toolbar'] = array(
    'name' => 'use admin toolbar',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: use permission select
  $permissions['use permission select'] = array(
    'name' => 'use permission select',
    'roles' => array(),
  );

  // Exported permission: use php in custom pagers
  $permissions['use php in custom pagers'] = array(
    'name' => 'use php in custom pagers',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: use realname
  $permissions['use realname'] = array(
    'name' => 'use realname',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view advanced help index
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view advanced help popup
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view advanced help topic
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view field_about
  $permissions['view field_about'] = array(
    'name' => 'view field_about',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_addphoto
  $permissions['view field_addphoto'] = array(
    'name' => 'view field_addphoto',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_block_body
  $permissions['view field_block_body'] = array(
    'name' => 'view field_block_body',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view field_block_link
  $permissions['view field_block_link'] = array(
    'name' => 'view field_block_link',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view field_block_title
  $permissions['view field_block_title'] = array(
    'name' => 'view field_block_title',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view field_computer_cost
  $permissions['view field_computer_cost'] = array(
    'name' => 'view field_computer_cost',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_computers_with_internet
  $permissions['view field_computers_with_internet'] = array(
    'name' => 'view field_computers_with_internet',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_contact_name
  $permissions['view field_contact_name'] = array(
    'name' => 'view field_contact_name',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_cost_per_session
  $permissions['view field_cost_per_session'] = array(
    'name' => 'view field_cost_per_session',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_editorial
  $permissions['view field_editorial'] = array(
    'name' => 'view field_editorial',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_email
  $permissions['view field_email'] = array(
    'name' => 'view field_email',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_embedtest
  $permissions['view field_embedtest'] = array(
    'name' => 'view field_embedtest',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_fax
  $permissions['view field_fax'] = array(
    'name' => 'view field_fax',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_featured_audio_video_items
  $permissions['view field_featured_audio_video_items'] = array(
    'name' => 'view field_featured_audio_video_items',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_featured_events
  $permissions['view field_featured_events'] = array(
    'name' => 'view field_featured_events',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_featured_group
  $permissions['view field_featured_group'] = array(
    'name' => 'view field_featured_group',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_featured_groups
  $permissions['view field_featured_groups'] = array(
    'name' => 'view field_featured_groups',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_featured_items
  $permissions['view field_featured_items'] = array(
    'name' => 'view field_featured_items',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_featured_members
  $permissions['view field_featured_members'] = array(
    'name' => 'view field_featured_members',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_featured_photo
  $permissions['view field_featured_photo'] = array(
    'name' => 'view field_featured_photo',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_featured_place
  $permissions['view field_featured_place'] = array(
    'name' => 'view field_featured_place',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_featured_places
  $permissions['view field_featured_places'] = array(
    'name' => 'view field_featured_places',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_gallery
  $permissions['view field_gallery'] = array(
    'name' => 'view field_gallery',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_gallery_image
  $permissions['view field_gallery_image'] = array(
    'name' => 'view field_gallery_image',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_group_featured_items
  $permissions['view field_group_featured_items'] = array(
    'name' => 'view field_group_featured_items',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_group_manager
  $permissions['view field_group_manager'] = array(
    'name' => 'view field_group_manager',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_header_color
  $permissions['view field_header_color'] = array(
    'name' => 'view field_header_color',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_header_title_color
  $permissions['view field_header_title_color'] = array(
    'name' => 'view field_header_title_color',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_health_insurance
  $permissions['view field_health_insurance'] = array(
    'name' => 'view field_health_insurance',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_health_services
  $permissions['view field_health_services'] = array(
    'name' => 'view field_health_services',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_hours
  $permissions['view field_hours'] = array(
    'name' => 'view field_hours',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_link
  $permissions['view field_link'] = array(
    'name' => 'view field_link',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_list_image
  $permissions['view field_list_image'] = array(
    'name' => 'view field_list_image',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_logo
  $permissions['view field_logo'] = array(
    'name' => 'view field_logo',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_media
  $permissions['view field_media'] = array(
    'name' => 'view field_media',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_open_in_evening
  $permissions['view field_open_in_evening'] = array(
    'name' => 'view field_open_in_evening',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_open_on_weekends
  $permissions['view field_open_on_weekends'] = array(
    'name' => 'view field_open_on_weekends',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_page_subtype
  $permissions['view field_page_subtype'] = array(
    'name' => 'view field_page_subtype',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_page_type
  $permissions['view field_page_type'] = array(
    'name' => 'view field_page_type',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_phone_number
  $permissions['view field_phone_number'] = array(
    'name' => 'view field_phone_number',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_place
  $permissions['view field_place'] = array(
    'name' => 'view field_place',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_place_type
  $permissions['view field_place_type'] = array(
    'name' => 'view field_place_type',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_public_album
  $permissions['view field_public_album'] = array(
    'name' => 'view field_public_album',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_related
  $permissions['view field_related'] = array(
    'name' => 'view field_related',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_small_name
  $permissions['view field_small_name'] = array(
    'name' => 'view field_small_name',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_special_features
  $permissions['view field_special_features'] = array(
    'name' => 'view field_special_features',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_tech_center_type
  $permissions['view field_tech_center_type'] = array(
    'name' => 'view field_tech_center_type',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_upload_file
  $permissions['view field_upload_file'] = array(
    'name' => 'view field_upload_file',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_video
  $permissions['view field_video'] = array(
    'name' => 'view field_video',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_website
  $permissions['view field_website'] = array(
    'name' => 'view field_website',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_wireless_cost
  $permissions['view field_wireless_cost'] = array(
    'name' => 'view field_wireless_cost',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view field_wireless_hotspot
  $permissions['view field_wireless_hotspot'] = array(
    'name' => 'view field_wireless_hotspot',
    'roles' => array(
      '0' => 'anonymous user',
    ),
  );

  // Exported permission: view forms without filtering
  $permissions['view forms without filtering'] = array(
    'name' => 'view forms without filtering',
    'roles' => array(),
  );

  // Exported permission: view heartbeat messages
  $permissions['view heartbeat messages'] = array(
    'name' => 'view heartbeat messages',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view imagecache comment_image
  $permissions['view imagecache comment_image'] = array(
    'name' => 'view imagecache comment_image',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view imagecache featured_item
  $permissions['view imagecache featured_item'] = array(
    'name' => 'view imagecache featured_item',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view imagecache featured_photo
  $permissions['view imagecache featured_photo'] = array(
    'name' => 'view imagecache featured_photo',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view imagecache featured_slideshow
  $permissions['view imagecache featured_slideshow'] = array(
    'name' => 'view imagecache featured_slideshow',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view imagecache group-page-logo
  $permissions['view imagecache group-page-logo'] = array(
    'name' => 'view imagecache group-page-logo',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view imagecache group_logo
  $permissions['view imagecache group_logo'] = array(
    'name' => 'view imagecache group_logo',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view imagecache medium
  $permissions['view imagecache medium'] = array(
    'name' => 'view imagecache medium',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view imagecache mt_home_event
  $permissions['view imagecache mt_home_event'] = array(
    'name' => 'view imagecache mt_home_event',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view imagecache node_image
  $permissions['view imagecache node_image'] = array(
    'name' => 'view imagecache node_image',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view imagecache photo_gallery_big
  $permissions['view imagecache photo_gallery_big'] = array(
    'name' => 'view imagecache photo_gallery_big',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view imagecache photo_gallery_thumbnail
  $permissions['view imagecache photo_gallery_thumbnail'] = array(
    'name' => 'view imagecache photo_gallery_thumbnail',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view imagecache reg
  $permissions['view imagecache reg'] = array(
    'name' => 'view imagecache reg',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view imagecache short
  $permissions['view imagecache short'] = array(
    'name' => 'view imagecache short',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view imagecache submitted_avatar
  $permissions['view imagecache submitted_avatar'] = array(
    'name' => 'view imagecache submitted_avatar',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view imagecache thumb
  $permissions['view imagecache thumb'] = array(
    'name' => 'view imagecache thumb',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view imagecache thumbnail
  $permissions['view imagecache thumbnail'] = array(
    'name' => 'view imagecache thumbnail',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view imagecache tiny
  $permissions['view imagecache tiny'] = array(
    'name' => 'view imagecache tiny',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view imagecache user_comment_image
  $permissions['view imagecache user_comment_image'] = array(
    'name' => 'view imagecache user_comment_image',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
      '2' => 'anonymous user',
      '3' => 'authenticated user',
      '4' => 'group manager',
    ),
  );

  // Exported permission: view location directory
  $permissions['view location directory'] = array(
    'name' => 'view location directory',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view node location table
  $permissions['view node location table'] = array(
    'name' => 'view node location table',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view node map
  $permissions['view node map'] = array(
    'name' => 'view node map',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view personal heartbeat activity
  $permissions['view personal heartbeat activity'] = array(
    'name' => 'view personal heartbeat activity',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view post access counter
  $permissions['view post access counter'] = array(
    'name' => 'view post access counter',
    'roles' => array(),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view user location details
  $permissions['view user location details'] = array(
    'name' => 'view user location details',
    'roles' => array(
      '0' => 'Publisher',
      '1' => 'administrator',
    ),
  );

  // Exported permission: view user location table
  $permissions['view user location table'] = array(
    'name' => 'view user location table',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view user map
  $permissions['view user map'] = array(
    'name' => 'view user map',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
