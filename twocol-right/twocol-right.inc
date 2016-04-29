<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
    'title' => t('Two Columns, Right Sidebar'),
    'category' => t('CHI New'),
    'icon' => 'twocol-right.png',
    'theme' => 'twocol-right',
    'admin css' => '../chi-admin.css',
    'regions' => array(
      'middle' => t('Middle column'),
      'right' => t('Right side')
    ),
);