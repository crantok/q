<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function online_bidding_user_default_permissions() {
  $permissions = array();

  // Exported permission: bid on auction lot
  $permissions['bid on auction lot'] = array(
    'name' => 'bid on auction lot',
    'roles' => array(),
  );

  // Exported permission: import auction
  $permissions['import auction'] = array(
    'name' => 'import auction',
    'roles' => array(
      '0' => 'Editor',
    ),
  );

  // Exported permission: search auction lots
  $permissions['search auction lots'] = array(
    'name' => 'search auction lots',
    'roles' => array(),
  );

  return $permissions;
}
