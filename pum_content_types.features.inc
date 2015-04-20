<?php
/**
 * @file
 * pum_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pum_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pum_content_types_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Book page'),
      'base' => 'node_content',
      'description' => t('<em>Books</em> have a built-in hierarchical navigation. Use for handbooks or tutorials.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'cluster' => array(
      'name' => t('Cluster'),
      'base' => 'node_content',
      'description' => t('Add a cluster'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'country' => array(
      'name' => t('Country'),
      'base' => 'node_content',
      'description' => t('Add a country'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'faq' => array(
      'name' => t('FAQ'),
      'base' => 'node_content',
      'description' => t('Add a FAQ.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'footer' => array(
      'name' => t('Footer'),
      'base' => 'node_content',
      'description' => t('Footer added by the <b>admin</b>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'frontpage' => array(
      'name' => t('Frontpage'),
      'base' => 'node_content',
      'description' => t('Add a frontpage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Add a news item. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'partner' => array(
      'name' => t('Partner'),
      'base' => 'node_content',
      'description' => t('Add a partner.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'sector' => array(
      'name' => t('Sector'),
      'base' => 'node_content',
      'description' => t('Add a sector. Connect this subsector to a cluster by selecting the cluster.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'story' => array(
      'name' => t('Story'),
      'base' => 'node_content',
      'description' => t('Add a story'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'story_customer' => array(
      'name' => t('Story customer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'story_expert' => array(
      'name' => t('Story expert'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'story_partner' => array(
      'name' => t('Story partner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'story_regular' => array(
      'name' => t('Story regular'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'user' => array(
      'name' => t('User'),
      'base' => 'node_content',
      'description' => t('Add a user who can be referenced on a project.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
