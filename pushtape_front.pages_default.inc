<?php
/**
 * @file
 * pushtape_front.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function pushtape_front_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'pushtape_front';
  $page->task = 'page';
  $page->admin_title = 'Front Page';
  $page->admin_description = 'This is the front page of the site used to kick things off on a good foot!';
  $page->path = 'front';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Home',
    'name' => 'main-menu',
    'weight' => '-20',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_pushtape_front_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'pushtape_front';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Front Page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => 'front-panel',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'coltrane_double';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'slider' => NULL,
      'slidergutter' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'footercolumn1' => NULL,
      'footercolumn2' => NULL,
      'footercolumn3' => NULL,
      'header' => NULL,
      'footer' => NULL,
      'secondarycolumn1' => NULL,
      'secondarycolumn2' => NULL,
      'secondarycolumn3' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'column1';
    $pane->type = 'views_panes';
    $pane->subtype = 'albums-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'fields_override' => array(
        'field_artwork' => 1,
        'title' => 1,
        'field_artist' => 0,
        'field_album' => 1,
        'field_tracklist' => 1,
      ),
      'exposed' => array(
        'widget_title' => 'Featured Album',
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_mode' => 'featured',
      'widget_title' => 'Featured Album',
      'items_per_page' => NULL,
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['column1'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'column2';
    $pane->type = 'views_panes';
    $pane->subtype = 'events-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '3',
      'fields_override' => array(
        'title' => 1,
        'field_event_date' => 1,
        'field_event_venue' => 1,
        'field_event_city' => 1,
        'field_event_state' => 1,
      ),
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['column2'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'column2';
    $pane->type = 'block';
    $pane->subtype = 'follow-site';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['column2'][1] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'releases-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '4',
      'fields_override' => array(
        'field_artwork' => 1,
        'title' => 1,
      ),
      'exposed' => array(
        'widget_title' => 'Releases',
        'sort_by' => 'field_release_date_value',
        'sort_order' => 'DESC',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_mode' => 'teaser',
      'widget_title' => 'Releases',
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['footer'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'header';
    $pane->type = 'views_panes';
    $pane->subtype = 'news-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['header'][0] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'secondcolumn1';
    $pane->type = 'views_panes';
    $pane->subtype = 'photosets-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '1',
      'offset' => '0',
      'fields_override' => array(
        'field_photos' => 0,
        'field_photos_1' => 0,
        'colorbox' => 1,
      ),
      'exposed' => array(
        'widget_title' => 'Featured Photoset',
        'more_link' => 0,
        'use_pager' => 1,
        'pager_id' => '',
        'sort_by' => 'random',
        'sort_order' => 'ASC',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_mode' => 'teaser',
      'widget_title' => 'Featured Photoset',
      'use_pager' => NULL,
      'pager_id' => NULL,
      'link_to_view' => NULL,
      'more_link' => 0,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['secondcolumn1'][0] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'secondcolumn2';
    $pane->type = 'views_panes';
    $pane->subtype = 'video-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '1',
      'exposed' => array(
        'widget_title' => 'Featured Videoset',
        'sort_by' => 'created',
        'sort_order' => 'DESC',
      ),
      'override_title' => '',
      'override_title_text' => '',
      'view_mode' => 'teaser',
      'widget_title' => 'Featured Videoset',
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['secondcolumn2'][0] = 'new-7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['pushtape_front'] = $page;

  return $pages;

}
