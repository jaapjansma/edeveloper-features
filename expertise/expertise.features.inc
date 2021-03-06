<?php
/**
 * @file
 * expertise.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function expertise_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function expertise_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function expertise_node_info() {
  $items = array(
    'expertise' => array(
      'name' => t('Expertise'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Expertise'),
      'help' => '',
    ),
  );
  return $items;
}
