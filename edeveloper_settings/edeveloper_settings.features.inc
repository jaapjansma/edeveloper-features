<?php
/**
 * @file
 * edeveloper_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function edeveloper_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function edeveloper_settings_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Pagina'),
      'base' => 'node_content',
      'description' => t('Standaard pagina voor statische informatie'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
