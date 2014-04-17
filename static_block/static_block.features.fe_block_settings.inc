<?php
/**
 * @file
 * static_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function static_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-edeveloper_topbar'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'edeveloper_topbar',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'edeveloper' => array(
        'region' => 'top',
        'status' => 1,
        'theme' => 'edeveloper',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-footer_contact'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'footer_contact',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer_firstcolumn',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'edeveloper' => array(
        'region' => 'footer_secondcolumn',
        'status' => 1,
        'theme' => 'edeveloper',
        'weight' => -13,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Contact',
    'visibility' => 0,
  );

  $export['block-footer_partner'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'footer_partner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer_secondcolumn',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'edeveloper' => array(
        'region' => 'footer_thirdcolumn',
        'status' => 1,
        'theme' => 'edeveloper',
        'weight' => -13,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Partners',
    'visibility' => 0,
  );

  $export['block-footer_socialmedia'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'footer_socialmedia',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer_thirdcolumn',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'edeveloper' => array(
        'region' => 'footer_thirdcolumn',
        'status' => 1,
        'theme' => 'edeveloper',
        'weight' => -12,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Social media',
    'visibility' => 0,
  );

  $export['menu_block-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'edeveloper' => array(
        'region' => 'footer_firstcolumn',
        'status' => 1,
        'theme' => 'edeveloper',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Sitemap',
    'visibility' => 0,
  );

  $export['menu_block-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 2,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'edeveloper' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'edeveloper',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
