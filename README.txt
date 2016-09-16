CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Recommended modules
 * Installation
 * Troubleshooting
 * FAQ
 * Maintainers


INTRODUCTION
------------
The PHP Server module allows to use the PHP Embedded Server with a
Drupal local installation. This module provides a Drush global command to start
a PHP Embedded Server. It handles the Drupal request in order to make it works
the routing system and handle clean URLS.

REQUIREMENTS
------------
 * Drush module
 * PHP >= 5.4.0 >

INSTALLATION
------------
This module does not depend on a Drupal installation. It should be not located
into your project modules folder.
In order to make it works verify it is locate at folder ~/.drush.
Ex: ~/.drush/php_server


TROUBLESHOOTING
---------------
This module has been tested on UNIX system

FAQ
---
Why use this module?
This module holds the necessary configuration to run a Drupal installation using
PHP Embedded Server.

MAINTAINERS
-----------
andrefy<andres.yajamin@gmail.com>


REVIEWERS
-----------
arijits.drush
klausi
mattdanger
casivaagustin

