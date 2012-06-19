<?php

function features_perm_features_export_alter(&$export, $module_name) {
    module_load_include("inc", "features", "includes/features.user");

	if($module_name == variable_get("features_perm_module","")){
        //User roles
        $roles = user_role_features_export_options();
        foreach($roles as $role => $title){
            $export['features']['user_role'][$role] = $role;
        }

        //User Permissions
        $perms = user_permission_features_export_options();
        foreach($perms as $perm => $title){
            $export['features']['user_permission'][$perm] = $perm;
        }
	}
}