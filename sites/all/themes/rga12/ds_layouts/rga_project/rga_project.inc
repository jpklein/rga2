<?php

/**
 * Implements ds_hook() to declare additional layouts
 */
function ds_rga_project() {
  return array(
    'label' => t('RGA Project'),
    'regions' => array(
      'gallery' => t('Gallery'),
      'description' => t('Description'),
    ),
  );
}
