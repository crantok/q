<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ecobee_feature_wysiwyg_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "input_formats" && $api == "input_formats") {
    return array("version" => 1);
  }
  elseif ($module == "wysiwyg" && $api == "") {
    return array("version" => 2);
  }
  elseif ($module == "wysiwyg" && $api == "wysiwyg_defaults") {
    return array("version" => 2);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ecobee_feature_wysiwyg_imagecache_default_presets() {
  $items = array(
    'ib_thumbnail' => array(
      'presetname' => 'ib_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => 100,
            'height' => 100,
            'upscale' => 1,
          ),
        ),
      ),
    ),
  );
  return $items;
}
