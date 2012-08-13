// $Id: README.txt,v 1.3 2008/07/07 16:16:14 incanus Exp $

NOTE: this module is primarily intended for use by system administrators and
developers, and the available documentation (or lack thereof) reflects that
in the set of implicit assumptions it makes. Please post a support request
in the module's issue tracker (see below) if anything is unclear.

DESCRIPTION
-----------
This is a sysadmin & developer tool that adds extensive tracing facilities
for Drupal hook invocations, database queries and PHP errors.

FEATURES
--------
* Outputs trace messages to a file or the syslog (on Unix platforms).
* Traces Drupal hook invocations with an optional filter and stack trace.
* Traces PHP warnings and errors with an optional full stack trace and
  including the source code for the line that caused the error.
* Traces watchdog messages with optional filtering by message type (TODO).
* Traces SQL database queries with optional filtering by query type.
* Trace output includes microsecond-level timing information.
* Stack traces include the function's passed arguments in PHP syntax.
* Optional debug output includes PHP superglobals and HTTP headers.
* Defines a hook allowing other modules to extend the trace output targets.

INSTALLATION
------------
Please refer to the accompanying file INSTALL.txt for installation
requirements and instructions.

IMPORTANT NOTES
---------------
* The trace output file can quickly grow extremely large, especially with
  stack tracing enabled. Anyone who leaves this module activated on a
  production server, without tuning down the output parameters, deserves the
  ensuing chaos.

LIMITATIONS
-----------
* Due to limitations of the database query debug mechanism provided in
  Drupal 6.x, the time delta on SQL query trace messages is only a
  best-effort guess. It should be approximate enough for most uses, though.

MANUAL TOGGLE
-------------
In case you wish to manually enable/disable tracing directly from MySQL,
here's how to do that using the `mysql' command-line tool (or phpMyAdmin):

* Enable tracing:
  UPDATE variable SET value = 's:1:"1";' WHERE name = 'trace_enabled';
  DELETE FROM cache WHERE cid = 'variables';

* Disable tracing:
  UPDATE variable SET value = 's:1:"0";' WHERE name = 'trace_enabled';
  DELETE FROM cache WHERE cid = 'variables';

The above presupposes that the module itself has already been enabled via
Drupal's admin/modules screen, of course; so the above only toggles the
tracing option ("Activate tracing") itself.

BUG REPORTS
-----------
Post feature requests and bug reports to the issue tracking system at:
  http://drupal.org/node/add/project_issue/trace

CREDITS
-------
Developed and maintained by Arto Bendiken <http://bendiken.net/>
Ported to Drupal 6 by Justin Miller <http://codesorcery.net/>
Sponsored by MakaluMedia Group <http://www.makalumedia.com/>
Sponsored by M.C. Dean, Inc. <http://www.mcdean.com/>
Sponsored by SPAWAR <http://www.spawar.navy.mil/>
