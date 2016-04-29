<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
    'title' => t('Two Columns, Left Sidebar'),
    'category' => t('CHI New'),
    'icon' => 'twocol-left.png',
    'theme' => 'twocol-left',
    'admin css' => '../chi-admin.css',
    'regions' => array(
      'left' => t('Left side'),
      'middle' => t('Middle column')
    ),
);