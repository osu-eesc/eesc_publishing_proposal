<?php
/**
 * @file
 * eesc_publishing_proposal.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function eesc_publishing_proposal_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: site editor.
  $roles['site editor'] = array(
    'name' => 'site editor',
    'weight' => 4,
  );

  return $roles;
}