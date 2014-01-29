<?php
/**
 * @file
 * pushtape_front.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pushtape_front_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function pushtape_front_field_default_field_instances_alter(&$data) {
  if (isset($data['node-panopoly_page-body'])) {
    $data['node-panopoly_page-body']['widget']['weight'] = 2; /* WAS: 4 */
  }
  if (isset($data['node-panopoly_page-field_featured_categories'])) {
    $data['node-panopoly_page-field_featured_categories']['widget']['weight'] = 3; /* WAS: 2 */
  }
  if (isset($data['node-panopoly_page-field_featured_image'])) {
    $data['node-panopoly_page-field_featured_image']['widget']['module'] = 'media'; /* WAS: 'image' */
    $data['node-panopoly_page-field_featured_image']['widget']['settings']['allowed_schemes'] = array(
      'private' => 0,
      'public' => 'public',
      'vimeo' => 0,
      'youtube' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['settings']['allowed_types'] = array(
      'audio' => 0,
      'document' => 0,
      'image' => 'image',
      'video' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['settings']['browser_plugins'] = array(
      'media_default--media_browser_1' => 'media_default--media_browser_1',
      'media_default--media_browser_my_files' => 0,
      'media_internet' => 0,
      'upload' => 'upload',
      'youtube' => 0,
    ); /* WAS: '' */
    $data['node-panopoly_page-field_featured_image']['widget']['type'] = 'media_generic'; /* WAS: 'image_image' */
    unset($data['node-panopoly_page-field_featured_image']['widget']['settings']['preview_image_style']);
  }
  if (isset($data['node-panopoly_page-field_featured_status'])) {
    $data['node-panopoly_page-field_featured_status']['widget']['weight'] = 4; /* WAS: 3 */
  }
}

/**
 * Implements hook_panelizer_defaults_override_alter().
 */
function pushtape_front_panelizer_defaults_override_alter(&$data) {
  if (isset($data['node:panopoly_page:default'])) {
    $data['node:panopoly_page:default']->display->content['new-3']->configuration['delta_limit'] = 0; /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-3']->configuration['delta_offset'] = 0; /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-3']->configuration['delta_reversed'] = FALSE; /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-3']->configuration['formatter'] = 'taxonomy_term_reference_link'; /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-3']->configuration['formatter_settings'] = array(); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-3']->configuration['label'] = 'inline'; /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-3']->configuration['override_title'] = 0; /* WAS: FALSE */
    $data['node:panopoly_page:default']->display->content['new-3']->subtype = 'node:field_featured_categories'; /* WAS: 'node_links' */
    $data['node:panopoly_page:default']->display->content['new-3']->type = 'entity_field'; /* WAS: 'node_links' */
    $data['node:panopoly_page:default']->display->content['new-4']->configuration['exposed'] = array(
      'sort_order' => 'DESC',
      'sort_by' => 'field_release_date_value',
    ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-4']->configuration['fields_override'] = array(
      'field_artwork' => 1,
      'field_album' => 1,
      'title' => 1,
      'field_audio' => 1,
      'field_purchase' => 1,
    ); /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-4']->configuration['items_per_page'] = 1; /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-4']->configuration['override_title'] = ''; /* WAS: 0 */
    $data['node:panopoly_page:default']->display->content['new-4']->configuration['view_mode'] = 'teaser'; /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-4']->configuration['widget_title'] = 'Featured Track'; /* WAS: '' */
    $data['node:panopoly_page:default']->display->content['new-4']->panel = 'sidebar'; /* WAS: 'contentmain' */
    $data['node:panopoly_page:default']->display->content['new-4']->position = 0; /* WAS: 3 */
    $data['node:panopoly_page:default']->display->content['new-4']->subtype = 'tracks-panel_pane_2'; /* WAS: 'node:field_featured_categories' */
    $data['node:panopoly_page:default']->display->content['new-4']->type = 'views_panes'; /* WAS: 'entity_field' */
    $data['node:panopoly_page:default']->display->layout = 'floyd_flipped'; /* WAS: 'bryant' */
    $data['node:panopoly_page:default']->display->panels['sidebar']['0'] = 'new-4'; /* WAS: 'new-5' */
    unset($data['node:panopoly_page:default']->display->content['new-3']->configuration['build_mode']);
    unset($data['node:panopoly_page:default']->display->content['new-3']->configuration['identifier']);
    unset($data['node:panopoly_page:default']->display->content['new-3']->configuration['link']);
    unset($data['node:panopoly_page:default']->display->content['new-3']->css['css_class']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['context']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['delta_limit']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['delta_offset']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['delta_reversed']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['formatter']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['formatter_settings']);
    unset($data['node:panopoly_page:default']->display->content['new-4']->configuration['label']);
    unset($data['node:panopoly_page:default']->display->content['new-5']);
    unset($data['node:panopoly_page:default']->display->panels['contentmain']['3']);
  }
  if (isset($data['node:panopoly_page:default:default'])) {
    $data['node:panopoly_page:default:default']->display->content['new-5'] = (object) array(
          'pid' => 'new-5',
          'panel' => 'contentmain',
          'type' => 'entity_field',
          'subtype' => 'node:body',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'hidden',
            'formatter' => 'text_default',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(),
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-6']->configuration['build_mode'] = 'default'; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-6']->configuration['identifier'] = ''; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-6']->configuration['link'] = TRUE; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-6']->configuration['override_title'] = FALSE; /* WAS: 1 */
    $data['node:panopoly_page:default:default']->display->content['new-6']->css['css_class'] = 'link-wrapper'; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-6']->position = 2; /* WAS: 0 */
    $data['node:panopoly_page:default:default']->display->content['new-6']->subtype = 'node_links'; /* WAS: 'node:field_featured_image' */
    $data['node:panopoly_page:default:default']->display->content['new-6']->type = 'node_links'; /* WAS: 'entity_field' */
    $data['node:panopoly_page:default:default']->display->content['new-7']->configuration['formatter'] = 'taxonomy_term_reference_link'; /* WAS: 'text_default' */
    $data['node:panopoly_page:default:default']->display->content['new-7']->configuration['label'] = 'inline'; /* WAS: 'hidden' */
    $data['node:panopoly_page:default:default']->display->content['new-7']->position = 3; /* WAS: 1 */
    $data['node:panopoly_page:default:default']->display->content['new-7']->subtype = 'node:field_featured_categories'; /* WAS: 'node:body' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->configuration['delta_limit'] = 0; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->configuration['delta_offset'] = 0; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->configuration['delta_reversed'] = FALSE; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->configuration['formatter'] = 'image'; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->configuration['formatter_settings'] = array(
      'image_style' => 'panopoly_image_half',
      'image_link' => '',
    ); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->configuration['label'] = 'hidden'; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->configuration['override_title'] = 1; /* WAS: FALSE */
    $data['node:panopoly_page:default:default']->display->content['new-8']->css = array(); /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->position = 0; /* WAS: 2 */
    $data['node:panopoly_page:default:default']->display->content['new-8']->style = ''; /* WAS: '' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->subtype = 'node:field_featured_image'; /* WAS: 'node_links' */
    $data['node:panopoly_page:default:default']->display->content['new-8']->type = 'entity_field'; /* WAS: 'node_links' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain']['0'] = 'new-5'; /* WAS: 'new-6' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain']['1'] = 'new-6'; /* WAS: 'new-7' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain']['2'] = 'new-7'; /* WAS: 'new-8' */
    $data['node:panopoly_page:default:default']->display->panels['contentmain']['3'] = 'new-8'; /* WAS: 'new-9' */
    unset($data['node:panopoly_page:default:default']->display->content['new-6']->configuration['delta_limit']);
    unset($data['node:panopoly_page:default:default']->display->content['new-6']->configuration['delta_offset']);
    unset($data['node:panopoly_page:default:default']->display->content['new-6']->configuration['delta_reversed']);
    unset($data['node:panopoly_page:default:default']->display->content['new-6']->configuration['formatter']);
    unset($data['node:panopoly_page:default:default']->display->content['new-6']->configuration['formatter_settings']);
    unset($data['node:panopoly_page:default:default']->display->content['new-6']->configuration['label']);
    unset($data['node:panopoly_page:default:default']->display->content['new-8']->configuration['build_mode']);
    unset($data['node:panopoly_page:default:default']->display->content['new-8']->configuration['identifier']);
    unset($data['node:panopoly_page:default:default']->display->content['new-8']->configuration['link']);
    unset($data['node:panopoly_page:default:default']->display->content['new-9']);
  }
  if (isset($data['node:panopoly_page:default:featured'])) {
    $data['node:panopoly_page:default:featured']->display->content['new-10']->configuration = array(
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'delta_limit' => 0,
      'delta_offset' => 0,
      'delta_reversed' => FALSE,
      'formatter' => 'text_summary_or_trimmed',
      'label' => 'hidden',
    ); /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->content['new-10']->position = 2; /* WAS: 0 */
    $data['node:panopoly_page:default:featured']->display->content['new-10']->subtype = 'node:body'; /* WAS: 'node:field_featured_image' */
    $data['node:panopoly_page:default:featured']->display->content['new-11']->configuration['build_mode'] = 'featured'; /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->content['new-11']->configuration['identifier'] = ''; /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->content['new-11']->configuration['link'] = TRUE; /* WAS: 1 */
    $data['node:panopoly_page:default:featured']->display->content['new-11']->configuration['override_title'] = FALSE; /* WAS: 1 */
    $data['node:panopoly_page:default:featured']->display->content['new-11']->css = ''; /* WAS: array() */
    $data['node:panopoly_page:default:featured']->display->content['new-11']->position = 3; /* WAS: 1 */
    $data['node:panopoly_page:default:featured']->display->content['new-11']->subtype = 'node_links'; /* WAS: 'node_title' */
    $data['node:panopoly_page:default:featured']->display->content['new-11']->type = 'node_links'; /* WAS: 'node_title' */
    $data['node:panopoly_page:default:featured']->display->content['new-12']->configuration = ''; /* WAS: array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => 0,
      'delta_reversed' => FALSE,
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    ) */
    $data['node:panopoly_page:default:featured']->display->content['new-12']->position = 0; /* WAS: 2 */
    $data['node:panopoly_page:default:featured']->display->content['new-12']->style = ''; /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->content['new-12']->subtype = 'node:field_featured_image'; /* WAS: 'node:body' */
    $data['node:panopoly_page:default:featured']->display->content['new-9'] = (object) array(
          'pid' => 'new-9',
          'panel' => 'contentmain',
          'type' => 'node_title',
          'subtype' => 'node_title',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'link' => 1,
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain']['0'] = 'new-9'; /* WAS: 'new-10' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain']['1'] = 'new-10'; /* WAS: 'new-11' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain']['2'] = 'new-11'; /* WAS: 'new-12' */
    $data['node:panopoly_page:default:featured']->display->panels['contentmain']['3'] = 'new-12'; /* WAS: 'new-13' */
    unset($data['node:panopoly_page:default:featured']->display->content['new-13']);
  }
  if (isset($data['node:panopoly_page:default:teaser'])) {
    $data['node:panopoly_page:default:teaser']->display->content['new-13'] = (object) array(
          'pid' => 'new-13',
          'panel' => 'contentmain',
          'type' => 'entity_field',
          'subtype' => 'node:body',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'label' => 'hidden',
            'formatter' => 'text_summary_or_trimmed',
            'delta_limit' => 0,
            'delta_offset' => 0,
            'delta_reversed' => FALSE,
            'formatter_settings' => array(
              'trim_length' => 600,
            ),
            'context' => 'panelizer',
            'override_title' => 1,
            'override_title_text' => '',
          ),
          'cache' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
        ); /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->content['new-14']->configuration['build_mode'] = 'teaser'; /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->content['new-14']->configuration['identifier'] = ''; /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->content['new-14']->configuration['link'] = TRUE; /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->content['new-14']->configuration['override_title'] = FALSE; /* WAS: 1 */
    $data['node:panopoly_page:default:teaser']->display->content['new-14']->css = ''; /* WAS: array() */
    $data['node:panopoly_page:default:teaser']->display->content['new-14']->position = 2; /* WAS: 0 */
    $data['node:panopoly_page:default:teaser']->display->content['new-14']->subtype = 'node_links'; /* WAS: 'node:field_featured_image' */
    $data['node:panopoly_page:default:teaser']->display->content['new-14']->type = 'node_links'; /* WAS: 'entity_field' */
    $data['node:panopoly_page:default:teaser']->display->content['new-15']->configuration['formatter'] = 'image'; /* WAS: 'text_summary_or_trimmed' */
    $data['node:panopoly_page:default:teaser']->display->content['new-15']->configuration['formatter_settings']['image_link'] = 'content'; /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->content['new-15']->configuration['formatter_settings']['image_style'] = 'panopoly_image_quarter'; /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->content['new-15']->position = 0; /* WAS: 1 */
    $data['node:panopoly_page:default:teaser']->display->content['new-15']->style = ''; /* WAS: '' */
    $data['node:panopoly_page:default:teaser']->display->content['new-15']->subtype = 'node:field_featured_image'; /* WAS: 'node:body' */
    $data['node:panopoly_page:default:teaser']->display->panels['contentmain']['0'] = 'new-13'; /* WAS: 'new-14' */
    $data['node:panopoly_page:default:teaser']->display->panels['contentmain']['1'] = 'new-14'; /* WAS: 'new-15' */
    $data['node:panopoly_page:default:teaser']->display->panels['contentmain']['2'] = 'new-15'; /* WAS: 'new-16' */
    unset($data['node:panopoly_page:default:teaser']->display->content['new-14']->configuration['delta_limit']);
    unset($data['node:panopoly_page:default:teaser']->display->content['new-14']->configuration['delta_offset']);
    unset($data['node:panopoly_page:default:teaser']->display->content['new-14']->configuration['delta_reversed']);
    unset($data['node:panopoly_page:default:teaser']->display->content['new-14']->configuration['formatter']);
    unset($data['node:panopoly_page:default:teaser']->display->content['new-14']->configuration['formatter_settings']);
    unset($data['node:panopoly_page:default:teaser']->display->content['new-14']->configuration['label']);
    unset($data['node:panopoly_page:default:teaser']->display->content['new-15']->configuration['formatter_settings']['trim_length']);
    unset($data['node:panopoly_page:default:teaser']->display->content['new-16']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function pushtape_front_strongarm_alter(&$data) {
  if (isset($data['panelizer_defaults_node_panopoly_page'])) {
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['default'] = array(
      'status' => 0,
      'default' => 1,
      'choice' => 0,
    ); /* WAS: '' */
    $data['panelizer_defaults_node_panopoly_page']->value['view modes']['search_result'] = array(
      'status' => 0,
      'default' => 0,
      'choice' => 0,
    ); /* WAS: '' */
  }
}
