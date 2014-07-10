<?php
/**
 * @file
 * eesc_publishing_proposal.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function eesc_publishing_proposal_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'master_proposal_list';
  $view->description = 'Displays submitted proposals';
  $view->tag = 'webform';
  $view->base_table = 'webform_submissions';
  $view->human_name = 'Master proposal list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Master Proposal List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'sid' => 'sid',
    'view_submission' => 'sid',
    'edit_submission' => 'sid',
    'project_title' => 'project_title',
    'submitted' => 'submitted',
    'new_or_revision' => 'new_or_revision',
    'project_manager' => 'project_manager',
    'corresponding_author_name' => 'corresponding_author_name',
    'status' => 'status',
    'status_date' => 'status_date',
    'notes' => 'notes',
  );
  $handler->display->display_options['style_options']['default'] = 'sid';
  $handler->display->display_options['style_options']['info'] = array(
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'view_submission' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_submission' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'project_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'submitted' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'new_or_revision' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'project_manager' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'corresponding_author_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'notes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Proposal submissions list';
  $handler->display->display_options['style_options']['summary'] = 'Displays list of project proposals';
  /* Relationship: Webform submissions: Node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Field: Proposal ID */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['ui_name'] = 'Proposal ID';
  $handler->display->display_options['fields']['sid']['label'] = 'Proposal ID';
  $handler->display->display_options['fields']['sid']['separator'] = '';
  /* Field: View link */
  $handler->display->display_options['fields']['view_submission']['id'] = 'view_submission';
  $handler->display->display_options['fields']['view_submission']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['view_submission']['field'] = 'view_submission';
  $handler->display->display_options['fields']['view_submission']['ui_name'] = 'View link';
  $handler->display->display_options['fields']['view_submission']['element_label_colon'] = FALSE;
  /* Field: Edit link */
  $handler->display->display_options['fields']['edit_submission']['id'] = 'edit_submission';
  $handler->display->display_options['fields']['edit_submission']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['edit_submission']['field'] = 'edit_submission';
  $handler->display->display_options['fields']['edit_submission']['ui_name'] = 'Edit link';
  $handler->display->display_options['fields']['edit_submission']['element_label_colon'] = FALSE;
  /* Field: Project title */
  $handler->display->display_options['fields']['project_title']['id'] = 'project_title';
  $handler->display->display_options['fields']['project_title']['table'] = 'webform_views_eesc_project_proposal_237';
  $handler->display->display_options['fields']['project_title']['field'] = 'project_title';
  $handler->display->display_options['fields']['project_title']['ui_name'] = 'Project title';
  /* Field: Submit date */
  $handler->display->display_options['fields']['submitted']['id'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['submitted']['field'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['ui_name'] = 'Submit date';
  $handler->display->display_options['fields']['submitted']['label'] = 'Submit Date';
  $handler->display->display_options['fields']['submitted']['date_format'] = 'custom';
  $handler->display->display_options['fields']['submitted']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['submitted']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['submitted']['format_date_sql'] = 0;
  /* Field: New or revision */
  $handler->display->display_options['fields']['new_or_revision']['id'] = 'new_or_revision';
  $handler->display->display_options['fields']['new_or_revision']['table'] = 'webform_views_eesc_project_proposal_237';
  $handler->display->display_options['fields']['new_or_revision']['field'] = 'new_or_revision';
  $handler->display->display_options['fields']['new_or_revision']['ui_name'] = 'New or revision';
  /* Field: Project manager */
  $handler->display->display_options['fields']['project_manager']['id'] = 'project_manager';
  $handler->display->display_options['fields']['project_manager']['table'] = 'webform_views_eesc_project_proposal_237';
  $handler->display->display_options['fields']['project_manager']['field'] = 'project_manager';
  $handler->display->display_options['fields']['project_manager']['ui_name'] = 'Project manager';
  $handler->display->display_options['fields']['project_manager']['empty'] = 'Not assigned';
  $handler->display->display_options['fields']['project_manager']['empty_zero'] = TRUE;
  /* Field: Corresponding author name */
  $handler->display->display_options['fields']['corresponding_author_name']['id'] = 'corresponding_author_name';
  $handler->display->display_options['fields']['corresponding_author_name']['table'] = 'webform_views_eesc_project_proposal_237';
  $handler->display->display_options['fields']['corresponding_author_name']['field'] = 'corresponding_author_name';
  $handler->display->display_options['fields']['corresponding_author_name']['ui_name'] = 'Corresponding author name';
  /* Field: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'webform_views_eesc_project_proposal_237';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['ui_name'] = 'Status';
  /* Field: Status date */
  $handler->display->display_options['fields']['status_date']['id'] = 'status_date';
  $handler->display->display_options['fields']['status_date']['table'] = 'webform_views_eesc_project_proposal_237';
  $handler->display->display_options['fields']['status_date']['field'] = 'status_date';
  $handler->display->display_options['fields']['status_date']['ui_name'] = 'Status date';
  /* Field: Notes */
  $handler->display->display_options['fields']['notes']['id'] = 'notes';
  $handler->display->display_options['fields']['notes']['table'] = 'webform_views_eesc_project_proposal_237';
  $handler->display->display_options['fields']['notes']['field'] = 'notes';
  $handler->display->display_options['fields']['notes']['ui_name'] = 'Notes';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'Filter by proposal ID, project title, corresponding author, project manager or notes';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'sid' => 'sid',
    'project_title' => 'project_title',
    'project_manager' => 'project_manager',
    'corresponding_author_name' => 'corresponding_author_name',
    'notes' => 'notes',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/proposal-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Master proposal list';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'proposals');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Proposal ID */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['ui_name'] = 'Proposal ID';
  $handler->display->display_options['fields']['sid']['label'] = 'Proposal ID';
  $handler->display->display_options['fields']['sid']['separator'] = '';
  /* Field: Project title */
  $handler->display->display_options['fields']['project_title']['id'] = 'project_title';
  $handler->display->display_options['fields']['project_title']['table'] = 'webform_views_eesc_project_proposal_237';
  $handler->display->display_options['fields']['project_title']['field'] = 'project_title';
  $handler->display->display_options['fields']['project_title']['ui_name'] = 'Project title';
  /* Field: Submit date */
  $handler->display->display_options['fields']['submitted']['id'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['submitted']['field'] = 'submitted';
  $handler->display->display_options['fields']['submitted']['ui_name'] = 'Submit date';
  $handler->display->display_options['fields']['submitted']['label'] = 'Submit Date';
  $handler->display->display_options['fields']['submitted']['date_format'] = 'custom';
  $handler->display->display_options['fields']['submitted']['custom_date_format'] = 'Y-m-d';
  $handler->display->display_options['fields']['submitted']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['submitted']['format_date_sql'] = 0;
  /* Field: New or revision */
  $handler->display->display_options['fields']['new_or_revision']['id'] = 'new_or_revision';
  $handler->display->display_options['fields']['new_or_revision']['table'] = 'webform_views_eesc_project_proposal_237';
  $handler->display->display_options['fields']['new_or_revision']['field'] = 'new_or_revision';
  $handler->display->display_options['fields']['new_or_revision']['ui_name'] = 'New or revision';
  /* Field: Project manager */
  $handler->display->display_options['fields']['project_manager']['id'] = 'project_manager';
  $handler->display->display_options['fields']['project_manager']['table'] = 'webform_views_eesc_project_proposal_237';
  $handler->display->display_options['fields']['project_manager']['field'] = 'project_manager';
  $handler->display->display_options['fields']['project_manager']['ui_name'] = 'Project manager';
  $handler->display->display_options['fields']['project_manager']['empty'] = 'Not assigned';
  $handler->display->display_options['fields']['project_manager']['empty_zero'] = TRUE;
  /* Field: Corresponding author name */
  $handler->display->display_options['fields']['corresponding_author_name']['id'] = 'corresponding_author_name';
  $handler->display->display_options['fields']['corresponding_author_name']['table'] = 'webform_views_eesc_project_proposal_237';
  $handler->display->display_options['fields']['corresponding_author_name']['field'] = 'corresponding_author_name';
  $handler->display->display_options['fields']['corresponding_author_name']['ui_name'] = 'Corresponding author name';
  /* Field: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'webform_views_eesc_project_proposal_237';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['ui_name'] = 'Status';
  /* Field: Status date */
  $handler->display->display_options['fields']['status_date']['id'] = 'status_date';
  $handler->display->display_options['fields']['status_date']['table'] = 'webform_views_eesc_project_proposal_237';
  $handler->display->display_options['fields']['status_date']['field'] = 'status_date';
  $handler->display->display_options['fields']['status_date']['ui_name'] = 'Status date';
  /* Field: Notes */
  $handler->display->display_options['fields']['notes']['id'] = 'notes';
  $handler->display->display_options['fields']['notes']['table'] = 'webform_views_eesc_project_proposal_237';
  $handler->display->display_options['fields']['notes']['field'] = 'notes';
  $handler->display->display_options['fields']['notes']['ui_name'] = 'Notes';
  $handler->display->display_options['path'] = 'admin/content/proposal-list/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'proposals' => 0,
  );
  $export['master_proposal_list'] = $view;

  return $export;
}
