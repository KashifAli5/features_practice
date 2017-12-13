<?php
/**
 * @file
 * feature_strongram.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_strongram_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
