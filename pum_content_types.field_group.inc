<?php
/**
 * @file
 * pum_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function pum_content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coordinator_officer|node|country|default';
  $field_group->group_name = 'group_coordinator_officer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Co-ordinator and officer',
    'weight' => '1',
    'children' => array(
      0 => 'field_country_coordinator',
      1 => 'field_project_officer',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Co-ordinator and officer',
      'instance_settings' => array(
        'classes' => 'group-coordinator-officer field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_country_full_group_coordinator_officer',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_coordinator_officer|node|country|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_front_countries|node|frontpage|form';
  $field_group->group_name = 'group_front_countries';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'frontpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Countries',
    'weight' => '6',
    'children' => array(
      0 => 'field_front_title_countries',
      1 => 'field_text_countries',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Countries',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-front-countries field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_front_countries|node|frontpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_front_facts|node|frontpage|form';
  $field_group->group_name = 'group_front_facts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'frontpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Facts',
    'weight' => '5',
    'children' => array(
      0 => 'field_front_facts_no_experts',
      1 => 'field_front_facts_no_projects',
      2 => 'field_front_facts_no_years',
      3 => 'field_front_facts_text_experts',
      4 => 'field_front_facts_text_projects',
      5 => 'field_front_facts_text_years',
      6 => 'field_front_facts_title',
      7 => 'field_front_link_of_read_more',
      8 => 'field_front_fact_experts_title',
      9 => 'field_front_fact_years_title',
      10 => 'field_front_facts_projects_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Facts',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-front-facts field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_front_facts|node|frontpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_front_newsletter|node|frontpage|form';
  $field_group->group_name = 'group_front_newsletter';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'frontpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Newsletter',
    'weight' => '38',
    'children' => array(
      0 => 'field_front_title_newsletter',
      1 => 'field_front_text_newsletter',
      2 => 'field_front_link_newsletter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-front-newsletter field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_front_newsletter|node|frontpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_front_projects_text|node|frontpage|form';
  $field_group->group_name = 'group_front_projects_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'frontpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Projects text',
    'weight' => '4',
    'children' => array(
      0 => 'field_front_business_text',
      1 => 'field_front_expert_text',
      2 => 'field_front_partner_text',
      3 => 'field_front_business_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Projects text',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-front-projects-text field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_front_projects_text|node|frontpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_front_sectors|node|frontpage|form';
  $field_group->group_name = 'group_front_sectors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'frontpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sectors',
    'weight' => '7',
    'children' => array(
      0 => 'field_front_text_sectoren',
      1 => 'field_front_title_sectoren',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sectors',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-front-sectors field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_front_sectors|node|frontpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_front_stories|node|frontpage|form';
  $field_group->group_name = 'group_front_stories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'frontpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Stories',
    'weight' => '8',
    'children' => array(
      0 => 'field_front_text_stories',
      1 => 'field_front_title_stories',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Stories',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-front-stories field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_front_stories|node|frontpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_representative|node|country|default';
  $field_group->group_name = 'group_representative';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'country';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Representative',
    'weight' => '4',
    'children' => array(
      0 => 'field_country_representative',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Representative',
      'instance_settings' => array(
        'classes' => 'group-representative field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_country_full_group_representative',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_representative|node|country|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slider|node|frontpage|form';
  $field_group->group_name = 'group_slider';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'frontpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slider',
    'weight' => '2',
    'children' => array(
      0 => 'field_slide_image_business',
      1 => 'field_slide_image_expert',
      2 => 'field_slide_image_partner',
      3 => 'field_text_align_business',
      4 => 'field_text_align_expert',
      5 => 'field_text_align_partner',
      6 => 'field_text_business',
      7 => 'field_text_expert',
      8 => 'field_text_partner',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Slider',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-slider field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_slider|node|frontpage|form'] = $field_group;

  return $export;
}
