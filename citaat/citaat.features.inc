<?php
/**
 * @file
 * citaat.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function citaat_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function citaat_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function citaat_image_default_styles() {
  $styles = array();

  // Exported image style: citaat_homepage.
  $styles['citaat_homepage'] = array(
    'name' => 'citaat_homepage',
    'label' => 'Citaat homepage',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 710,
          'height' => 310,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function citaat_node_info() {
  $items = array(
    'citaat' => array(
      'name' => t('Citaat'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Auteur'),
      'help' => '',
    ),
  );
  return $items;
}
