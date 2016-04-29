<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
    'title' => t('Four Columns, Left Sidebar with Top T-1 Header'),
    'category' => t('CHI New'),
    'icon' => 'fourcol-t1-library.png',
    'theme' => 'fourcol-t1-library',
    'admin css' => '../chi-admin.css',
    'regions' => array(
      'top' => t('Top title'),
      'maincolone' => t('Main Column one'),
      'maincoltwo' => t('Main Column two'),
      'maincolthree' => t('Main Column three'),
      'left' => t('Left side'),
    ),
);