<?php

$plugin = array(
  'label' => t('Observations'),
  'resource' => 'observations',
  'name' => 'observations__1_0',
  'entity_type' => 'node',
  'bundle' => 'observation',
  'description' => t('Export the observation content type.'),
  'class' => 'ObservationsResource__1_0',
  //@todo: authentification
   'authentication_types' => TRUE,
   'authentication_optional' => TRUE
);
