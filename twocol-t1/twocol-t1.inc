<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
    'title' => t('Two Columns, Left Sidebar with Top T-1 Header'),
    'category' => t('CHI New'),
    'icon' => 'twocol-t1.png',
    'theme' => 'twocol-t1',
    'admin css' => '../chi-admin.css',
    'regions' => array(
      'top' => t('Top title'),
      'left' => t('Left side'),
      'middle' => t('Middle column')
    ),
);