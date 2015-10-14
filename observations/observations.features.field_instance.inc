<?php
/**
 * @file
 * observations.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function observations_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-observation-field_observation_code_dept'
  $field_instances['node-observation-field_observation_code_dept'] = array(
    'bundle' => 'observation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Code département',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_observation_code_dept',
    'label' => 'Observation_code_departement',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-observation-field_observation_id_mission'
  $field_instances['node-observation-field_observation_id_mission'] = array(
    'bundle' => 'observation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Id de la mission pour lequel a été réalisé l\'observation.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_observation_id_mission',
    'label' => 'Observation_id_mission',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-observation-field_observation_image'
  $field_instances['node-observation-field_observation_image'] = array(
    'bundle' => 'observation',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_observation_image',
    'label' => 'Observation_image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'observation_image',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '5 Mo',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-observation-field_observation_name_mission'
  $field_instances['node-observation-field_observation_name_mission'] = array(
    'bundle' => 'observation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Nom de la mission pour lequel à été faite l\'observation',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_observation_name_mission',
    'label' => 'Observation_name_mission',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-observation-field_observation_note'
  $field_instances['node-observation-field_observation_note'] = array(
    'bundle' => 'observation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Note',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_observation_note',
    'label' => 'Observation_note',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 250,
      ),
      'type' => 'text_textfield',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-observation-field_observation_timestamp'
  $field_instances['node-observation-field_observation_timestamp'] = array(
    'bundle' => 'observation',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'timestamp',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_observation_timestamp',
    'label' => 'Observation_timestamp',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Code département');
  t('Id de la mission pour lequel a été réalisé l\'observation.');
  t('Nom de la mission pour lequel à été faite l\'observation');
  t('Note');
  t('Observation_code_departement');
  t('Observation_id_mission');
  t('Observation_image');
  t('Observation_name_mission');
  t('Observation_note');
  t('Observation_timestamp');
  t('timestamp');

  return $field_instances;
}
