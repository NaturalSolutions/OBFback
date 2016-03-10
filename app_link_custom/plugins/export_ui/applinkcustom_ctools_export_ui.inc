<?php
/**
 * @file
 * Export UI plugin to define an App Link custom.
 */

$plugin = array(
  'schema' => 'applinkcustom',
  'access' => 'administer app link custom',

  // Define the menu item.
  'menu' => array(
    'menu prefix' => 'admin/config/search',
    'menu item' => 'applinkcustom',
    'menu title' => 'App Link custom',
    'menu description' => 'Add Mobile App Links custom.',
  ),

  // Define user interface texts.
  'title singular' => t('app link custom'),
  'title plural' => t('app links custom'),
  'title singular proper' => t('Mobile App Link custom'),
  'title plural proper' => t('Mobile App Links custom'),

  // Define the names of the functions that provide the add/edit forms.
  'form' => array(
    'settings' => 'app_link_custom_ctools_export_ui_form',
  ),
);
