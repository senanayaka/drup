<?php
/**
 * @file
 * Drush command file.
 */

/**
 * Implements hook_drush_command().
 */
function php_server_drush_command() {
  $items['php-server-start'] = array(
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    'description' => dt('Start PHP embedded server'),
    'examples' => array(
      'drush php-server',
    ),
    'aliases' => array('ss'),
  );
  return $items;
}


/**
 * Start PHP Server and handle drupal routing.
 */
function drush_php_server_start() {
  // Verify PHP Version.
  if (version_compare(PHP_VERSION, '5.4.0') < 0) {
    die("Requires PHP 5.4\n");
  }
  $host = drush_prompt(dt('Server address?'), '0.0.0.0', FALSE);
  $port = drush_prompt(dt('Server port?'), '8181', FALSE);

  $server = $host . ':' . $port;

  drush_print(dt('You are using Drupal PHP Server'));
  drush_print(dt('You can visit your page at: http://@server', array('@server' => $server)));

  popen(PHP_BINARY . " -S $server " . realpath(__DIR__ . DIRECTORY_SEPARATOR . 'php_server.router.inc'), 'r');

}
