<?php
/**
 * @file
 * express_editor_notes_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function express_editor_notes_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'express_editor_notes';
  $view->description = 'List view of editor notes.';
  $view->tag = 'default';
  $view->base_table = 'express_editor_notes';
  $view->human_name = 'Editor Notes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Editor Notes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'add editor notes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'title' => 'title',
    'id_1' => 'id_1',
    'author' => 'author',
    'changed' => 'changed',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'author' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no editor notes.';
  $handler->display->display_options['empty']['area']['format'] = 'wysiwyg';
  /* Field: Editor Note: Editor note ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'express_editor_notes';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Editor Note: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'express_editor_notes';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Editor Note: Editor note ID */
  $handler->display->display_options['fields']['id_1']['id'] = 'id_1';
  $handler->display->display_options['fields']['id_1']['table'] = 'express_editor_notes';
  $handler->display->display_options['fields']['id_1']['field'] = 'id';
  $handler->display->display_options['fields']['id_1']['label'] = 'Page Title';
  $handler->display->display_options['fields']['id_1']['separator'] = '';
  /* Field: Editor Note: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'express_editor_notes';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: Editor Note: Author */
  $handler->display->display_options['fields']['author']['id'] = 'author';
  $handler->display->display_options['fields']['author']['table'] = 'express_editor_notes';
  $handler->display->display_options['fields']['author']['field'] = 'author';
  /* Field: Editor Note: Changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'express_editor_notes';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Updated';
  $handler->display->display_options['fields']['changed']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'admin/notes/edit/[id]';
  /* Sort criterion: Editor Note: Changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'express_editor_notes';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Editor Note: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'express_editor_notes';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value']['value'] = '1';
  /* Filter criterion: Editor Note: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'express_editor_notes';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/editor-notes';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Editor Notes';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['express_editor_notes'] = $view;

  return $export;
}
