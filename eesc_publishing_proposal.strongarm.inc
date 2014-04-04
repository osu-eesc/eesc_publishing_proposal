<?php
/**
 * @file
 * eesc_publishing_proposal.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function eesc_publishing_proposal_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_mysql_views_views';
  $strongarm->value = array(
    237 => 'webform_views_eesc_project_proposal_237',
  );
  $export['webform_mysql_views_views'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_estimates_expenses';
  $strongarm->value = 0;
  $export['webform_node_estimates_expenses'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_osu_catalog_publication';
  $strongarm->value = 0;
  $export['webform_node_osu_catalog_publication'] = $strongarm;

  return $export;
}
