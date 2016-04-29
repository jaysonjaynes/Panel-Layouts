<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
    'title' => t('Three Columns'),
    'category' => t('CHI New'),
    'icon' => 'threecol.png',
    'theme' => 'threecol',
    'admin css' => '../chi-admin.css',
    'regions' => array(
      'left' => t('Left side'),
      'middle' => t('Middle column'),
      'right' => t('Right side')
    ),
);