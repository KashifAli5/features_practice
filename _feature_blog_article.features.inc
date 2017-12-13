<?php
/**
 * @file
 * _feature_blog_article.features.inc
 */

/**
 * Implements hook_views_api().
 */
function _feature_blog_article_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function _feature_blog_article_node_info() {
  $items = array(
    'block_article' => array(
      'name' => t('Block article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
