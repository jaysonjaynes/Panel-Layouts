<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
    'title' => t('Three Columns with Top T-1 Header'),
    'category' => t('CHI New'),
    'icon' => 'threecol-t1.png',
    'theme' => 'threecol-t1',
    'admin css' => '../chi-admin.css',
    'regions' => array(
      'top' => t('Top title'),
      'left' => t('Left side'),
      'middle' => t('Middle column'),
      'right' => t('Right side')
    ),
);