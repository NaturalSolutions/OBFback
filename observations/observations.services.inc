<?php
/**
 * @file
 * observations.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function observations_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'obfmobileapi';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'obfmobileapi';
  $endpoint->authentication = array(
    'services' => 'services',
  );
  $endpoint->server_settings = array();
  $endpoint->resources = array(
    'obfmobile_user' => array(
      'operations' => array(
        'create' => array(
          'enabled' => '1',
        ),
      ),
    ),
    'user' => array(
      'actions' => array(
        'login' => array(
          'enabled' => '1',
          'settings' => array(
            'services' => array(
              'resource_api_version' => '1.1',
            ),
          ),
        ),
        'logout' => array(
          'enabled' => '1',
          'settings' => array(
            'services' => array(
              'resource_api_version' => '1.1',
            ),
          ),
        ),
        'token' => array(
          'enabled' => '1',
        ),
        'request_new_password' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 1;
  $export['obfmobileapi'] = $endpoint;

  return $export;
}
