<?php
/**
 * @file
 * eesc_publishing_proposal.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function eesc_publishing_proposal_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "data" && $api == "data_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function eesc_publishing_proposal_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
