<?php
/**
 * @file
 * test_perf_1.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function test_perf_1_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'test_perf_1';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'test perf 1';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'test perf 1';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: test-date */
  $handler->display->display_options['fields']['field_test_date']['id'] = 'field_test_date';
  $handler->display->display_options['fields']['field_test_date']['table'] = 'field_data_field_test_date';
  $handler->display->display_options['fields']['field_test_date']['field'] = 'field_test_date';
  $handler->display->display_options['fields']['field_test_date']['label'] = '';
  $handler->display->display_options['fields']['field_test_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_test_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Sort criterion: Content: test-date (field_test_date) */
  $handler->display->display_options['sorts']['field_test_date_value']['id'] = 'field_test_date_value';
  $handler->display->display_options['sorts']['field_test_date_value']['table'] = 'field_data_field_test_date';
  $handler->display->display_options['sorts']['field_test_date_value']['field'] = 'field_test_date_value';
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
    'test_perf_1' => 'test_perf_1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'test perf 2';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: test-date (field_test_date) */
  $handler->display->display_options['sorts']['field_test_date_value']['id'] = 'field_test_date_value';
  $handler->display->display_options['sorts']['field_test_date_value']['table'] = 'field_data_field_test_date';
  $handler->display->display_options['sorts']['field_test_date_value']['field'] = 'field_test_date_value';
  $handler->display->display_options['sorts']['field_test_date_value']['order'] = 'DESC';
  $export['test_perf_1'] = $view;

  return $export;
}
