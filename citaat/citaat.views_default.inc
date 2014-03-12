<?php
/**
 * @file
 * citaat.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function citaat_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'citaat';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Citaat';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Citaat';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Afbeelding */
  $handler->display->display_options['fields']['field_citaat_afbeelding']['id'] = 'field_citaat_afbeelding';
  $handler->display->display_options['fields']['field_citaat_afbeelding']['table'] = 'field_data_field_citaat_afbeelding';
  $handler->display->display_options['fields']['field_citaat_afbeelding']['field'] = 'field_citaat_afbeelding';
  $handler->display->display_options['fields']['field_citaat_afbeelding']['label'] = '';
  $handler->display->display_options['fields']['field_citaat_afbeelding']['element_type'] = '0';
  $handler->display->display_options['fields']['field_citaat_afbeelding']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_citaat_afbeelding']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_citaat_afbeelding']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_citaat_afbeelding']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_citaat_afbeelding']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_citaat_afbeelding']['settings'] = array(
    'image_style' => 'citaat_homepage',
    'image_link' => '',
  );
  /* Field: Content: Auteur */
  $handler->display->display_options['fields']['field_auteur']['id'] = 'field_auteur';
  $handler->display->display_options['fields']['field_auteur']['table'] = 'field_data_field_auteur';
  $handler->display->display_options['fields']['field_auteur']['field'] = 'field_auteur';
  $handler->display->display_options['fields']['field_auteur']['label'] = '';
  $handler->display->display_options['fields']['field_auteur']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_auteur']['alter']['text'] = '<div>
[field_citaat]
[field_auteur]
</div>';
  $handler->display->display_options['fields']['field_auteur']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_auteur']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_auteur']['type'] = 'text_plain';
  /* Field: Content: Citaat */
  $handler->display->display_options['fields']['field_citaat']['id'] = 'field_citaat';
  $handler->display->display_options['fields']['field_citaat']['table'] = 'field_data_field_citaat';
  $handler->display->display_options['fields']['field_citaat']['field'] = 'field_citaat';
  $handler->display->display_options['fields']['field_citaat']['label'] = '';
  $handler->display->display_options['fields']['field_citaat']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_citaat']['alter']['text'] = '<blockquote>
<p>[field_citaat]<br>
<cite>[field_auteur]</cite></p>
</blockquote>';
  $handler->display->display_options['fields']['field_citaat']['element_type'] = '0';
  $handler->display->display_options['fields']['field_citaat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_citaat']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_citaat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_citaat']['type'] = 'text_plain';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'citaat' => 'citaat',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Citaat';
  $export['citaat'] = $view;

  return $export;
}
