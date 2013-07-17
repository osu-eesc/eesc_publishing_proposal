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
    'view_submission' => 'view_submission',
    'edit_submission' => 'edit_submission',
    'nothing' => 'sid',
    'project_title' => 'project_title',
    'submitted_1' => 'submitted_1',
    'new_or_revision' => 'new_or_revision',
    'corresponding_author_name' => 'corresponding_author_name',
    'project_manager' => 'project_manager',
    'status' => 'status',
    'due_date' => 'due_date',
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
      'empty_column' => 1,
    ),
    'edit_submission' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'nothing' => array(
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
    'submitted_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
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
    'corresponding_author_name' => array(
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
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'due_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'notes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Webform submissions: Node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Field: Webform submissions: Sid */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Proposal ID';
  /* Field: Webform submissions: View link */
  $handler->display->display_options['fields']['view_submission']['id'] = 'view_submission';
  $handler->display->display_options['fields']['view_submission']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['view_submission']['field'] = 'view_submission';
  $handler->display->display_options['fields']['view_submission']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_submission']['element_label_colon'] = FALSE;
  /* Field: Webform submissions: Edit link */
  $handler->display->display_options['fields']['edit_submission']['id'] = 'edit_submission';
  $handler->display->display_options['fields']['edit_submission']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['edit_submission']['field'] = 'edit_submission';
  $handler->display->display_options['fields']['edit_submission']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_submission']['element_label_colon'] = FALSE;
  /* Field: view/edit links */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'view/edit links';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/catalog/node/237/submission/[sid]">view</a>&nbsp;|&nbsp;<a href="/catalog/node/237/submission/[sid]/edit?destination=proposal/list">edit</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Webform views eesc publishing proposal 237: Project title */
  $handler->display->display_options['fields']['project_title']['id'] = 'project_title';
  $handler->display->display_options['fields']['project_title']['table'] = 'webform_views_eesc_publishing_proposal_237';
  $handler->display->display_options['fields']['project_title']['field'] = 'project_title';
  /* Field: Webform submissions: Submitted */
  $handler->display->display_options['fields']['submitted_1']['id'] = 'submitted_1';
  $handler->display->display_options['fields']['submitted_1']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['submitted_1']['field'] = 'submitted';
  $handler->display->display_options['fields']['submitted_1']['label'] = 'Submit date';
  $handler->display->display_options['fields']['submitted_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['submitted_1']['custom_date_format'] = 'Y-m-d';
  /* Field: Webform views eesc publishing proposal 237: New or revision */
  $handler->display->display_options['fields']['new_or_revision']['id'] = 'new_or_revision';
  $handler->display->display_options['fields']['new_or_revision']['table'] = 'webform_views_eesc_publishing_proposal_237';
  $handler->display->display_options['fields']['new_or_revision']['field'] = 'new_or_revision';
  /* Field: Webform views eesc publishing proposal 237: Corresponding author name */
  $handler->display->display_options['fields']['corresponding_author_name']['id'] = 'corresponding_author_name';
  $handler->display->display_options['fields']['corresponding_author_name']['table'] = 'webform_views_eesc_publishing_proposal_237';
  $handler->display->display_options['fields']['corresponding_author_name']['field'] = 'corresponding_author_name';
  /* Field: Webform views eesc publishing proposal 237: Project manager */
  $handler->display->display_options['fields']['project_manager']['id'] = 'project_manager';
  $handler->display->display_options['fields']['project_manager']['table'] = 'webform_views_eesc_publishing_proposal_237';
  $handler->display->display_options['fields']['project_manager']['field'] = 'project_manager';
  /* Field: Webform views eesc publishing proposal 237: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'webform_views_eesc_publishing_proposal_237';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  /* Field: Webform views eesc publishing proposal 237: Due date */
  $handler->display->display_options['fields']['due_date']['id'] = 'due_date';
  $handler->display->display_options['fields']['due_date']['table'] = 'webform_views_eesc_publishing_proposal_237';
  $handler->display->display_options['fields']['due_date']['field'] = 'due_date';
  /* Field: Webform views eesc publishing proposal 237: Notes */
  $handler->display->display_options['fields']['notes']['id'] = 'notes';
  $handler->display->display_options['fields']['notes']['table'] = 'webform_views_eesc_publishing_proposal_237';
  $handler->display->display_options['fields']['notes']['field'] = 'notes';
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
    'corresponding_author_name' => 'corresponding_author_name',
    'project_manager' => 'project_manager',
    'notes' => 'notes',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'proposal/list';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'proposals');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Proposals at a glance';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Webform submissions: Sid */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Proposal ID';
  /* Field: Webform submissions: View link */
  $handler->display->display_options['fields']['view_submission']['id'] = 'view_submission';
  $handler->display->display_options['fields']['view_submission']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['view_submission']['field'] = 'view_submission';
  $handler->display->display_options['fields']['view_submission']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_submission']['element_label_colon'] = FALSE;
  /* Field: Webform submissions: Edit link */
  $handler->display->display_options['fields']['edit_submission']['id'] = 'edit_submission';
  $handler->display->display_options['fields']['edit_submission']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['edit_submission']['field'] = 'edit_submission';
  $handler->display->display_options['fields']['edit_submission']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_submission']['element_label_colon'] = FALSE;
  /* Field: view/edit links */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'view/edit links';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/catalog/node/237/submission/[sid]">view</a>&nbsp;|&nbsp;<a href="/catalog/node/237/submission/[sid]/edit?destination=admin/dashboard">edit</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Webform submissions: Submitted */
  $handler->display->display_options['fields']['submitted_1']['id'] = 'submitted_1';
  $handler->display->display_options['fields']['submitted_1']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['submitted_1']['field'] = 'submitted';
  $handler->display->display_options['fields']['submitted_1']['label'] = 'Submit date';
  $handler->display->display_options['fields']['submitted_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['submitted_1']['custom_date_format'] = 'Y-m-d';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['working_title']['id'] = 'working_title';
  $handler->display->display_options['fields']['working_title']['table'] = 'webform_views_eesc_publishing_proposal_237';
  $handler->display->display_options['fields']['working_title']['field'] = 'working_title';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['new_or_existing_publication']['id'] = 'new_or_existing_publication';
  $handler->display->display_options['fields']['new_or_existing_publication']['table'] = 'webform_views_eesc_publishing_proposal_237';
  $handler->display->display_options['fields']['new_or_existing_publication']['field'] = 'new_or_existing_publication';
  $handler->display->display_options['fields']['new_or_existing_publication']['label'] = 'New or revision';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $export['master_proposal_list'] = $view;

  return $export;
}
