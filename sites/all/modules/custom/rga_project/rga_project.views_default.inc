<?php
/**
 * @file
 * rga_project.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rga_project_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'edit_projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'View/Edit Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = 1;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'project_type' => 'project_type',
    'tags' => 0,
  );
  /* Field: Content: Teaser Image */
  $handler->display->display_options['fields']['field_project_teaser_image']['id'] = 'field_project_teaser_image';
  $handler->display->display_options['fields']['field_project_teaser_image']['table'] = 'field_data_field_project_teaser_image';
  $handler->display->display_options['fields']['field_project_teaser_image']['field'] = 'field_project_teaser_image';
  $handler->display->display_options['fields']['field_project_teaser_image']['label'] = '';
  $handler->display->display_options['fields']['field_project_teaser_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_project_teaser_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_project_teaser_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_project_teaser_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_project_teaser_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_project_teaser_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_project_teaser_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_project_teaser_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_project_teaser_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_project_teaser_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_project_teaser_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_project_teaser_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_project_teaser_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_project_teaser_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_project_teaser_image']['element_class'] = 'field-content field-teaser-image';
  $handler->display->display_options['fields']['field_project_teaser_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_teaser_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_project_teaser_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_project_teaser_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_project_teaser_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_project_teaser_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_teaser_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_project_teaser_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_class'] = 'field-content field-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location']['element_class'] = 'field-location';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location']['field_api_classes'] = 0;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'node_weight';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['name']['title_enable'] = 1;
  $handler->display->display_options['arguments']['name']['title'] = '<a href="/projects/!1">%1</a>';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_skip_url'] = 1;
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['glossary'] = 0;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'ucfirst';
  $handler->display->display_options['arguments']['name']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['name']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['name']['add_table'] = 0;
  $handler->display->display_options['arguments']['name']['require_value'] = 0;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: View */
  $handler = $view->new_display('page', 'View', 'page_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['name']['title_enable'] = 1;
  $handler->display->display_options['arguments']['name']['title'] = '%1';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_skip_url'] = 1;
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['glossary'] = 0;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'ucfirst';
  $handler->display->display_options['arguments']['name']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['name']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['name']['add_table'] = 0;
  $handler->display->display_options['arguments']['name']['require_value'] = 0;
  $handler->display->display_options['path'] = 'projects/%';
  $handler->display->display_options['menu']['title'] = 'Scrapbook';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Edit */
  $handler = $view->new_display('block', 'Edit', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'weight';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'name' => 'name',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'weight' => 'weight',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'weight' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<ul class="action-links" style="margin-bottom:0"><li><a href="/node/add/project">Add Project</a></li></ul>';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['delete_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['delete_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['delete_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['delete_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['delete_node']['hide_alter_empty'] = 1;
  /* Field: Weight: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'node_weight';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['label'] = '';
  $handler->display->display_options['fields']['weight']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['external'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['weight']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['weight']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['weight']['alter']['html'] = 0;
  $handler->display->display_options['fields']['weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['weight']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['weight']['hide_empty'] = 0;
  $handler->display->display_options['fields']['weight']['empty_zero'] = 0;
  $handler->display->display_options['fields']['weight']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['weight']['separator'] = '';
  $handler->display->display_options['fields']['weight']['format_plural'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $export['edit_projects'] = $view;

  return $export;
}
