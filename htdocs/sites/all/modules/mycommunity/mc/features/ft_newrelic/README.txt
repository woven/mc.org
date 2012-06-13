https://newrelic.com/docs/php/php-agent-phpini-settings

* Required: at vhosts or htaccess
php_value newrelic.appname = "PHP Application Name"

* Enable these settings at php.ini or htaccess of the current site:
- Example in the .htaccess format
php_value newrelic.transaction_tracer.top100 1
php_value newrelic.enable_params 1

* i think these two is required on the vhost level or htaccess so it would not conflict with other sites that is not drupal
php_value newrelic.framework "drupal"
php_value newrelic.framework.drupal.modules 1