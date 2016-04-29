<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
    'title' => t('Two Columns, Left Sidebar for Grantee Map'),
    'category' => t('CHI New'),
    'icon' => 'twocol-grantee-map.png',
    'theme' => 'twocol-grantee-map',
    'admin css' => '../chi-admin.css',
    'regions' => array(
      'top' => t('Top title'),
      'left' => t('Left side'),
      'middle' => t('Middle column')
    ),
);