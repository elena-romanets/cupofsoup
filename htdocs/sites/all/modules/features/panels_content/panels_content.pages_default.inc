<?php
/**
 * @file
 * panels_content.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panels_content_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_77fd716c-52d6-4abc-bc23-747ac4c6e016';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'SYSTEMEN Details',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '478e5cd2-ada3-473f-a78b-ed70e1985ecf';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-13dec667-cafc-420f-9a3f-3974ae6f5f77';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'HERE123',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '13dec667-cafc-420f-9a3f-3974ae6f5f77';
    $display->content['new-13dec667-cafc-420f-9a3f-3974ae6f5f77'] = $pane;
    $display->panels['center'][0] = 'new-13dec667-cafc-420f-9a3f-3974ae6f5f77';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_77fd716c-52d6-4abc-bc23-747ac4c6e016'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_6cac6aa8-3ff4-444e-a4bc-4d2ea82dc561';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'SYSTEMEN Details',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'systemen-info',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e46f16c6-98ea-4ce7-b5ce-ce794e3ecccd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-382ab654-e5f8-47a8-ad48-f7e7c8a9e945';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'systemen_details-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'systemen-details',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '382ab654-e5f8-47a8-ad48-f7e7c8a9e945';
    $display->content['new-382ab654-e5f8-47a8-ad48-f7e7c8a9e945'] = $pane;
    $display->panels['center'][0] = 'new-382ab654-e5f8-47a8-ad48-f7e7c8a9e945';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_6cac6aa8-3ff4-444e-a4bc-4d2ea82dc561'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__panel_context_37386cbe-35fd-48fb-b08f-d45044d7b241';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
          2 => 2,
          3 => 3,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'region-header',
        'hide_empty' => 1,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_header',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'top_header' => array(
        'type' => 'region',
        'title' => 'Top header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'region-top-header',
        'hide_empty' => 1,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center_',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'center_' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'region-center',
        'hide_empty' => 1,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'fotter',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'fotter' => array(
        'type' => 'region',
        'title' => 'Footer',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'region-footer',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top_header' => NULL,
      'center_' => NULL,
      'fotter' => NULL,
    ),
    'center' => array(
      'style' => 'default',
    ),
    'top_header' => array(
      'style' => 'default',
    ),
    'center_' => array(
      'style' => 'naked',
    ),
    'fotter' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '054b7d9f-87e9-49bb-8559-a73e424c723b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dddbd727-33f9-45d9-9661-ca1406349d59';
    $pane->panel = 'center';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'logo',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dddbd727-33f9-45d9-9661-ca1406349d59';
    $display->content['new-dddbd727-33f9-45d9-9661-ca1406349d59'] = $pane;
    $display->panels['center'][0] = 'new-dddbd727-33f9-45d9-9661-ca1406349d59';
    $pane = new stdClass();
    $pane->pid = 'new-195d3368-c872-424f-856c-de5e65dae944';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'main-menu main-menu-list',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '195d3368-c872-424f-856c-de5e65dae944';
    $display->content['new-195d3368-c872-424f-856c-de5e65dae944'] = $pane;
    $display->panels['center'][1] = 'new-195d3368-c872-424f-856c-de5e65dae944';
    $pane = new stdClass();
    $pane->pid = 'new-03c7fc3b-d837-46ca-8670-e55f3c21e2b7';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'GRATIS CUP-A-SOUP STARTPAKK HP',
      'title' => '',
      'body' => '    <div class="text">
      <h2 class="pane-title">GRATIS CUP-A-SOUP STARTPAKK</h2>
      <p class="details-txt">Bij aankoop van 4 dozen naar keuze.</p>
      <a class="button" href="/product-assortiment">BESTELLEN</a>
    </div>

    <div class="product-img"></div>',
      'format' => 'full_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'header-details',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '03c7fc3b-d837-46ca-8670-e55f3c21e2b7';
    $display->content['new-03c7fc3b-d837-46ca-8670-e55f3c21e2b7'] = $pane;
    $display->panels['center'][2] = 'new-03c7fc3b-d837-46ca-8670-e55f3c21e2b7';
    $pane = new stdClass();
    $pane->pid = 'new-32b7a9f7-4bfb-4b45-bccc-6d5bc131fbc2';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'product-assortiment',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'ASSORTIMENT Page',
      'title' => '',
      'body' => ' <div class="text">
      <h2 class="pane-title">ASSORTIMENT</h2>
      <p class="details-txt">
          Vraag hier een bestelling aan. Wij zetten deze door naar uw leverancier van Cup-a-Soup.
      </p>
    </div>

    <div class="product-img assortiment"></div>',
      'format' => 'full_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'header-details header-details-assortiments',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '32b7a9f7-4bfb-4b45-bccc-6d5bc131fbc2';
    $display->content['new-32b7a9f7-4bfb-4b45-bccc-6d5bc131fbc2'] = $pane;
    $display->panels['center'][3] = 'new-32b7a9f7-4bfb-4b45-bccc-6d5bc131fbc2';
    $pane = new stdClass();
    $pane->pid = 'new-e97b21e0-8da1-4b2b-b51e-b09808751a34';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_category-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'product-assortiment',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-menu',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e97b21e0-8da1-4b2b-b51e-b09808751a34';
    $display->content['new-e97b21e0-8da1-4b2b-b51e-b09808751a34'] = $pane;
    $display->panels['center'][4] = 'new-e97b21e0-8da1-4b2b-b51e-b09808751a34';
    $pane = new stdClass();
    $pane->pid = 'new-f2e09e2b-44e3-4a37-b3f9-2c6d09101d75';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'systemen',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'SYSTEMEN OVERZICHT Page',
      'title' => '',
      'body' => ' <div class="text">
      <h2 class="pane-title">SYSTEMEN</h2>
      <p class="details-txt">
          Profiteer nu tijdelijk van één van de gratis Cup-a-Soup Startpakketten.
      </p>
</div>
    <div class="product-img systemen"></div>',
      'format' => 'full_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'header-details header-details-systemen',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'f2e09e2b-44e3-4a37-b3f9-2c6d09101d75';
    $display->content['new-f2e09e2b-44e3-4a37-b3f9-2c6d09101d75'] = $pane;
    $display->panels['center'][5] = 'new-f2e09e2b-44e3-4a37-b3f9-2c6d09101d75';
    $pane = new stdClass();
    $pane->pid = 'new-f8ac8089-3d17-47d2-bfab-e637e4e9e950';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'product/1',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'SYSTEMEN CARROUSEL - Products',
      'title' => '',
      'body' => ' <div class="text">
      <h2 class="pane-title">CUP-A-SOUP CARROUSEL</h2>
      <p class="details-txt">
Tot 10 personen<br>
6 wisselbare smaken<br>
Compleet systeem met bekers en roerstaa es<br>
Handig en compact draaisysteem</p>
<p><strong>GRATIS Cup-a-Soup Startpakket t.w.v. €36:</strong><br>
- Carrousel<br>
- 2 dozen a 21 sachets: Tomaat en Mosterd<br>
- 50 Cup-a-Soup Bekers<br>
- Exclusief topkaart
</p>
</div>
    <div class="product-img systemen carrousel"></div>',
      'format' => 'popup_tags',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'header-details carrousel',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'f8ac8089-3d17-47d2-bfab-e637e4e9e950';
    $display->content['new-f8ac8089-3d17-47d2-bfab-e637e4e9e950'] = $pane;
    $display->panels['center'][6] = 'new-f8ac8089-3d17-47d2-bfab-e637e4e9e950';
    $pane = new stdClass();
    $pane->pid = 'new-6cfb0a30-8a6e-4956-8ee0-69967e380efa';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'product/3',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'SYSTEMEN SELECTIEBOXEN - Products',
      'title' => '',
      'body' => ' <div class="text">
      <h2 class="pane-title">CUP-A-SOUP SELECTIEBOXEN</h2>
      <p class="details-txt">
Tot 10 personen<br>
6 wisselbare smaken<br>
Compleet systeem met bekers en roerstaa es<br>
Handig en compact draaisysteem</p>
<p><strong>GRATIS Cup-a-Soup Startpakket t.w.v. €36:</strong><br>
- Carrousel<br>
- 2 dozen a 21 sachets: Tomaat en Mosterd<br>
- 50 Cup-a-Soup Bekers<br>
- Exclusief topkaart
</p>
</div>
    <div class="product-img systemen selectieboxen"></div>',
      'format' => 'popup_tags',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'header-details selectieboxen',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '6cfb0a30-8a6e-4956-8ee0-69967e380efa';
    $display->content['new-6cfb0a30-8a6e-4956-8ee0-69967e380efa'] = $pane;
    $display->panels['center'][7] = 'new-6cfb0a30-8a6e-4956-8ee0-69967e380efa';
    $pane = new stdClass();
    $pane->pid = 'new-a3e870f3-c48d-41c5-8426-0dc6a152d87c';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'product/2',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'SYSTEMEN MINI - Products',
      'title' => '',
      'body' => ' <div class="text">
      <h2 class="pane-title">CUP-A-SOUP MINI</h2>
      <p class="details-txt">
Tot 10 personen<br>
6 wisselbare smaken<br>
Compleet systeem met bekers en roerstaa es<br>
Handig en compact draaisysteem</p>
<p><strong>GRATIS Cup-a-Soup Startpakket t.w.v. €36:</strong><br>
- Carrousel<br>
- 2 dozen a 21 sachets: Tomaat en Mosterd<br>
- 50 Cup-a-Soup Bekers<br>
- Exclusief topkaart
</p>
</div>
    <div class="product-img systemen mini"></div>',
      'format' => 'popup_tags',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'header-details mini',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'a3e870f3-c48d-41c5-8426-0dc6a152d87c';
    $display->content['new-a3e870f3-c48d-41c5-8426-0dc6a152d87c'] = $pane;
    $display->panels['center'][8] = 'new-a3e870f3-c48d-41c5-8426-0dc6a152d87c';
    $pane = new stdClass();
    $pane->pid = 'new-fca534d4-c142-455f-b376-bbd6661c7c12';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'product/4',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'SYSTEMEN TABLETOP - Products',
      'title' => '',
      'body' => ' <div class="text">
      <h2 class="pane-title">CUP-A-SOUP TABLETOP</h2>
      <p class="details-txt">
Tot 10 personen<br>
6 wisselbare smaken<br>
Compleet systeem met bekers en roerstaa es<br>
Handig en compact draaisysteem</p>
<p><strong>GRATIS Cup-a-Soup Startpakket t.w.v. €36:</strong><br>
- Carrousel<br>
- 2 dozen a 21 sachets: Tomaat en Mosterd<br>
- 50 Cup-a-Soup Bekers<br>
- Exclusief topkaart
</p>
</div>
    <div class="product-img systemen tabletop"></div>',
      'format' => 'popup_tags',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'header-details tabletop',
    );
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'fca534d4-c142-455f-b376-bbd6661c7c12';
    $display->content['new-fca534d4-c142-455f-b376-bbd6661c7c12'] = $pane;
    $display->panels['center'][9] = 'new-fca534d4-c142-455f-b376-bbd6661c7c12';
    $pane = new stdClass();
    $pane->pid = 'new-f49f37bd-6b43-4795-9ada-733aa17cb03d';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'product/5',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'SYSTEMEN STAND ALONE’S - Products',
      'title' => '',
      'body' => ' <div class="text">
      <h2 class="pane-title">CUP-A-SOUP STAND ALONE’S</h2>
      <p class="details-txt">
Tot 10 personen<br>
6 wisselbare smaken<br>
Compleet systeem met bekers en roerstaa es<br>
Handig en compact draaisysteem</p>
<p><strong>GRATIS Cup-a-Soup Startpakket t.w.v. €36:</strong><br>
- Carrousel<br>
- 2 dozen a 21 sachets: Tomaat en Mosterd<br>
- 50 Cup-a-Soup Bekers<br>
- Exclusief topkaart
</p>
</div>
    <div class="product-img systemen standalones"></div>',
      'format' => 'popup_tags',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'header-details standalones',
    );
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'f49f37bd-6b43-4795-9ada-733aa17cb03d';
    $display->content['new-f49f37bd-6b43-4795-9ada-733aa17cb03d'] = $pane;
    $display->panels['center'][10] = 'new-f49f37bd-6b43-4795-9ada-733aa17cb03d';
    $pane = new stdClass();
    $pane->pid = 'new-da7cc257-623c-4499-a26e-f514450abeba';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/1',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'SYSTEMEN CARROUSEL - Products info',
      'title' => '',
      'body' => ' <div class="text">
      <h2 class="pane-title">CUP-A-SOUP MINI AUTOMAAT</h2>
      <p class="details-txt">
          Short subline oorem ipsum dolor sit amet consectetur adipiscing elit sed do eiusmod tempor incididunt ut labore.
      </p>
      <a class="button" href="/product/1">BESTELLEN</a>
</div>
    <div class="product-img systemen carrousel"></div>',
      'format' => 'full_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'header-details carrousel',
    );
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'da7cc257-623c-4499-a26e-f514450abeba';
    $display->content['new-da7cc257-623c-4499-a26e-f514450abeba'] = $pane;
    $display->panels['center'][11] = 'new-da7cc257-623c-4499-a26e-f514450abeba';
    $pane = new stdClass();
    $pane->pid = 'new-180cc6a8-71c2-4a49-8311-288445e2e209';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/3',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'SYSTEMEN SELECTIEBOXEN - Products info',
      'title' => '',
      'body' => ' <div class="text">
      <h2 class="pane-title">CUP-A-SOUP SELECTIEBOXEN</h2>
      <p class="details-txt">
          Short subline oorem ipsum dolor sit amet consectetur adipiscing elit sed do eiusmod tempor incididunt ut labore.
      </p>
      <a class="button" href="/product/3">BESTELLEN</a>
</div>
    <div class="product-img systemen selectieboxen"></div>',
      'format' => 'full_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'header-details selectieboxen',
    );
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '180cc6a8-71c2-4a49-8311-288445e2e209';
    $display->content['new-180cc6a8-71c2-4a49-8311-288445e2e209'] = $pane;
    $display->panels['center'][12] = 'new-180cc6a8-71c2-4a49-8311-288445e2e209';
    $pane = new stdClass();
    $pane->pid = 'new-76935392-8640-4792-b09c-af9f37127718';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'product' => 'product',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/2',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'SYSTEMEN MINI - Products info',
      'title' => '',
      'body' => ' <div class="text">
      <h2 class="pane-title">CUP-A-SOUP MINI AUTOMAAT</h2>
      <p class="details-txt">
          Short subline oorem ipsum dolor sit amet consectetur adipiscing elit sed do eiusmod tempor incididunt ut labore.
      </p>
      <a class="button" href="/product/2">BESTELLEN</a>
</div>
    <div class="product-img systemen mini"></div>',
      'format' => 'full_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'header-details mini',
    );
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '76935392-8640-4792-b09c-af9f37127718';
    $display->content['new-76935392-8640-4792-b09c-af9f37127718'] = $pane;
    $display->panels['center'][13] = 'new-76935392-8640-4792-b09c-af9f37127718';
    $pane = new stdClass();
    $pane->pid = 'new-209e5be0-8948-4eec-87fd-c219d593dd11';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/4',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'SYSTEMEN TABLETOP - Products info',
      'title' => '',
      'body' => ' <div class="text">
      <h2 class="pane-title">CUP-A-SOUP MINI AUTOMAAT</h2>
      <p class="details-txt">
          Short subline oorem ipsum dolor sit amet consectetur adipiscing elit sed do eiusmod tempor incididunt ut labore.
      </p>
      <a class="button" href="/product/4">BESTELLEN</a>
</div>
    <div class="product-img systemen tabletop"></div>',
      'format' => 'full_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'header-details tabletop',
    );
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '209e5be0-8948-4eec-87fd-c219d593dd11';
    $display->content['new-209e5be0-8948-4eec-87fd-c219d593dd11'] = $pane;
    $display->panels['center'][14] = 'new-209e5be0-8948-4eec-87fd-c219d593dd11';
    $pane = new stdClass();
    $pane->pid = 'new-ef584991-bcfe-4183-b715-528e25403721';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/5',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'SYSTEMEN STAND ALONE’S - Products info',
      'title' => '',
      'body' => ' <div class="text">
      <h2 class="pane-title">CUP-A-SOUP MINI AUTOMAAT</h2>
      <p class="details-txt">
          Short subline oorem ipsum dolor sit amet consectetur adipiscing elit sed do eiusmod tempor incididunt ut labore.
      </p>
      <a class="button" href="/product/5">BESTELLEN</a>
</div>
    <div class="product-img systemen standalones"></div>',
      'format' => 'full_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'header-details standalones',
    );
    $pane->extras = array();
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = 'ef584991-bcfe-4183-b715-528e25403721';
    $display->content['new-ef584991-bcfe-4183-b715-528e25403721'] = $pane;
    $display->panels['center'][15] = 'new-ef584991-bcfe-4183-b715-528e25403721';
    $pane = new stdClass();
    $pane->pid = 'new-19236aa9-dece-4f81-8731-84c793d333d0';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'faq' => 'faq',
            ),
          ),
          'context' => 'term',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'KLANTENSERVICE Header',
      'title' => 'KLANTENSERVICE',
      'body' => '<p>De Verkoop Binnendienst is telefonisch bereikbaar op werkdagen van 8.30 tot 17.00 uur via het nummer 010 - 439 47 86.</p>
<p>Daarnaast zijn wij bereikbaar via e-mail en ons contactformulier. We streven er altijd naar je direct van dienst te zijn.</p>
<p>In onderstaande veel gestelde vragen vindt u wellicht direct het antwoord op uw vraag.</p>
<hr>
<h3>VEEL GESTELDE VRAGEN<h3>
<p>De meest gestelde vragen vind je hieronder. Staat het antwoord op jouw vraag er niet tussen neem dan contact met ons op.</p>',
      'format' => 'full_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'faq-header',
    );
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = '19236aa9-dece-4f81-8731-84c793d333d0';
    $display->content['new-19236aa9-dece-4f81-8731-84c793d333d0'] = $pane;
    $display->panels['center'][16] = 'new-19236aa9-dece-4f81-8731-84c793d333d0';
    $pane = new stdClass();
    $pane->pid = 'new-87a77e39-8f77-469e-bcbc-ae642612de0a';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_category-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'faq' => 'faq',
            ),
          ),
          'context' => 'term',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-menu faq-menu',
    );
    $pane->extras = array();
    $pane->position = 17;
    $pane->locks = array();
    $pane->uuid = '87a77e39-8f77-469e-bcbc-ae642612de0a';
    $display->content['new-87a77e39-8f77-469e-bcbc-ae642612de0a'] = $pane;
    $display->panels['center'][17] = 'new-87a77e39-8f77-469e-bcbc-ae642612de0a';
    $pane = new stdClass();
    $pane->pid = 'new-ac7de1ee-6fb2-4060-9ac3-6cec00c47313';
    $pane->panel = 'center_';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ac7de1ee-6fb2-4060-9ac3-6cec00c47313';
    $display->content['new-ac7de1ee-6fb2-4060-9ac3-6cec00c47313'] = $pane;
    $display->panels['center_'][0] = 'new-ac7de1ee-6fb2-4060-9ac3-6cec00c47313';
    $pane = new stdClass();
    $pane->pid = 'new-efce54b6-bee9-4aec-afbe-00f9d55420d8';
    $pane->panel = 'fotter';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'efce54b6-bee9-4aec-afbe-00f9d55420d8';
    $display->content['new-efce54b6-bee9-4aec-afbe-00f9d55420d8'] = $pane;
    $display->panels['fotter'][0] = 'new-efce54b6-bee9-4aec-afbe-00f9d55420d8';
    $pane = new stdClass();
    $pane->pid = 'new-a88d6040-264c-402d-8447-1de9b81c95c6';
    $pane->panel = 'top_header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-top-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'top-menu',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a88d6040-264c-402d-8447-1de9b81c95c6';
    $display->content['new-a88d6040-264c-402d-8447-1de9b81c95c6'] = $pane;
    $display->panels['top_header'][0] = 'new-a88d6040-264c-402d-8447-1de9b81c95c6';
    $pane = new stdClass();
    $pane->pid = 'new-afce9c63-1a51-4aa4-824f-7809097b4f8d';
    $pane->panel = 'top_header';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-mobile-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'mob-menu',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'afce9c63-1a51-4aa4-824f-7809097b4f8d';
    $display->content['new-afce9c63-1a51-4aa4-824f-7809097b4f8d'] = $pane;
    $display->panels['top_header'][1] = 'new-afce9c63-1a51-4aa4-824f-7809097b4f8d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__panel_context_37386cbe-35fd-48fb-b08f-d45044d7b241'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_583458ea-2ee4-496d-bd73-ffbf4a6c9fdf';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'assortiment',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'product_category' => 'product_category',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6a30b9b2-ca9c-4caa-a89c-9327f7c8df7e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-533ef316-faf3-4e83-8061-932115c67132';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'ASSORTIMENT title',
      'title' => '',
      'body' => ' <div class="text">
      <h2 class="pane-title">Gratis Cup-A-Soup Startpakket bij aankoop van 4 caterpacks Classic naar keuze.</h2>
      <p class="details-txt">
         Het Startpakket bestaat uit: 1 doos Cup-a-Soup Tomaat, 1 doos Cup-a-Soup Mosterd en 50 bekers
      </p>
</div>',
      'format' => 'full_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-details',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '533ef316-faf3-4e83-8061-932115c67132';
    $display->content['new-533ef316-faf3-4e83-8061-932115c67132'] = $pane;
    $display->panels['center'][0] = 'new-533ef316-faf3-4e83-8061-932115c67132';
    $pane = new stdClass();
    $pane->pid = 'new-706f792f-c840-4333-b4df-58323a937903';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-popular assortiment-block grey',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '706f792f-c840-4333-b4df-58323a937903';
    $display->content['new-706f792f-c840-4333-b4df-58323a937903'] = $pane;
    $display->panels['center'][1] = 'new-706f792f-c840-4333-b4df-58323a937903';
    $pane = new stdClass();
    $pane->pid = 'new-73439d7e-9956-42ae-b6e4-9f50560d2464';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-selectie assortiment-block assortiment-block-reg',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '73439d7e-9956-42ae-b6e4-9f50560d2464';
    $display->content['new-73439d7e-9956-42ae-b6e4-9f50560d2464'] = $pane;
    $display->panels['center'][2] = 'new-73439d7e-9956-42ae-b6e4-9f50560d2464';
    $pane = new stdClass();
    $pane->pid = 'new-e47a8269-1381-42cf-949a-182641f3bc38';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-classic assortiment-block assortiment-block-reg',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e47a8269-1381-42cf-949a-182641f3bc38';
    $display->content['new-e47a8269-1381-42cf-949a-182641f3bc38'] = $pane;
    $display->panels['center'][3] = 'new-e47a8269-1381-42cf-949a-182641f3bc38';
    $pane = new stdClass();
    $pane->pid = 'new-50e15b2a-d580-4466-b9fb-877fe3f49405';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-drinkbouillon assortiment-block assortiment-block-reg',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '50e15b2a-d580-4466-b9fb-877fe3f49405';
    $display->content['new-50e15b2a-d580-4466-b9fb-877fe3f49405'] = $pane;
    $display->panels['center'][4] = 'new-50e15b2a-d580-4466-b9fb-877fe3f49405';
    $pane = new stdClass();
    $pane->pid = 'new-9d892842-3602-4137-899b-c4e120c82e5c';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Uw bestelling',
      'title' => 'Uw bestelling',
      'body' => '<div class="results">
<table>
	<tbody>
		<tr>
			<td>Cup-a-Soup Startpakket</td>
			<td>&nbsp;</td>
			<td>Gratis</td>
		</tr>
	</tbody>
</table>
</div>
<div class="empty-result">U heeft nog niets geselecteerd</div>
<div class="total-wrapper title sm-title">TOTAAL €<span></span></div>

<div class="bottom-wrapper">
<div class="details-text">
De bovenstaande bedragen zijn adviesprijzen, deze bedragen kunnen afwijken van het bedrag dat uw leverancier in rekening brengt. De werkelijke bedragen kunt u opvragen bij uw leverancier.
</div>
<div class="button btn-more">
<a href="/service">BESTELLEN</a>
</div>
</div>',
      'format' => 'full_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-total-price',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '9d892842-3602-4137-899b-c4e120c82e5c';
    $display->content['new-9d892842-3602-4137-899b-c4e120c82e5c'] = $pane;
    $display->panels['center'][5] = 'new-9d892842-3602-4137-899b-c4e120c82e5c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_583458ea-2ee4-496d-bd73-ffbf4a6c9fdf'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_6c2ff60a-f267-4803-8c18-f55d1d6d763b';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'FAQ',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'faq',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'faq' => 'faq',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bb5de1c7-0abe-48f9-982d-2c8a52c63783';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-70f92872-1730-4541-b34d-40a6bd906e00';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'faq-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '70f92872-1730-4541-b34d-40a6bd906e00';
    $display->content['new-70f92872-1730-4541-b34d-40a6bd906e00'] = $pane;
    $display->panels['center'][0] = 'new-70f92872-1730-4541-b34d-40a6bd906e00';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_6c2ff60a-f267-4803-8c18-f55d1d6d763b'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function panels_content_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'bestelling_plaatsen';
  $page->task = 'page';
  $page->admin_title = 'BESTELLING PLAATSEN';
  $page->admin_description = '';
  $page->path = 'service';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_bestelling_plaatsen__panel';
  $handler->task = 'page';
  $handler->subtask = 'bestelling_plaatsen';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b1e3ec59-068e-4428-8fc1-1c2deeeed39f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c13a9c1a-8870-4583-81ba-e3c7babbd014';
    $pane->panel = 'center';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '11',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'service-content',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c13a9c1a-8870-4583-81ba-e3c7babbd014';
    $display->content['new-c13a9c1a-8870-4583-81ba-e3c7babbd014'] = $pane;
    $display->panels['center'][0] = 'new-c13a9c1a-8870-4583-81ba-e3c7babbd014';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['bestelling_plaatsen'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cup_a_soup_systemen';
  $page->task = 'page';
  $page->admin_title = 'CUP-A-SOUP SYSTEMEN';
  $page->admin_description = '';
  $page->path = 'systemen';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cup_a_soup_systemen__panel';
  $handler->task = 'page';
  $handler->subtask = 'cup_a_soup_systemen';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'systemen',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '982c72f9-187a-48be-a202-c121935198d8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9734dbed-0635-4823-94e2-aebbdddbb4b8';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'systemen_products-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'systemen-overview',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9734dbed-0635-4823-94e2-aebbdddbb4b8';
    $display->content['new-9734dbed-0635-4823-94e2-aebbdddbb4b8'] = $pane;
    $display->panels['center'][0] = 'new-9734dbed-0635-4823-94e2-aebbdddbb4b8';
    $pane = new stdClass();
    $pane->pid = 'new-1e38a722-aa0f-4ede-8fdf-8b406afcc479';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Systemen footer',
      'title' => '',
      'body' => '<div class="systemen-footer-section-1">
<h2 class="title contact sm-title">ADVIES NODIG?</h2>
<div class="details-text">Onze Cup-a-Soup experts geven u graag advies!</div>
</div>
<div class="systemen-footer-section-2">
<div class="phone title sm-title">0800 - 263779</div>
<div class="address">Ma-vr. 08:00 - 17:30</div>
<div class="description">Stel uw vraag online</div>
<a class="button" href="contact">ADVIES VRAGEN</a>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'systemen-footer',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1e38a722-aa0f-4ede-8fdf-8b406afcc479';
    $display->content['new-1e38a722-aa0f-4ede-8fdf-8b406afcc479'] = $pane;
    $display->panels['center'][1] = 'new-1e38a722-aa0f-4ede-8fdf-8b406afcc479';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cup_a_soup_systemen'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home page';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'desc-section',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => 'main',
        'class' => 'desc-section-more',
        'hide_empty' => 1,
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'r-systemen',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'center' => NULL,
      'bottom' => NULL,
    ),
    'one_main' => array(
      'style' => 'naked',
    ),
    'center' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b3fc2e53-fad3-41f0-99d6-67bcbd5ed017';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e4f9219b-60bb-4fb3-a26d-92a58894f7de';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'CUP-A-SOUP SYSTEMEN',
      'title' => 'CUP-A-SOUP SYSTEMEN',
      'body' => '<p class="details-txt">
    Cup-a-Soup heeft voor iedere keuken een passend systeem.
</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e4f9219b-60bb-4fb3-a26d-92a58894f7de';
    $display->content['new-e4f9219b-60bb-4fb3-a26d-92a58894f7de'] = $pane;
    $display->panels['bottom'][0] = 'new-e4f9219b-60bb-4fb3-a26d-92a58894f7de';
    $pane = new stdClass();
    $pane->pid = 'new-b7255ad9-d6a7-4f79-8146-8fa0c74d2b37';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'home_products-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'home-items',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b7255ad9-d6a7-4f79-8146-8fa0c74d2b37';
    $display->content['new-b7255ad9-d6a7-4f79-8146-8fa0c74d2b37'] = $pane;
    $display->panels['bottom'][1] = 'new-b7255ad9-d6a7-4f79-8146-8fa0c74d2b37';
    $pane = new stdClass();
    $pane->pid = 'new-360b6976-76c1-4b11-b99b-2a2ba903486c';
    $pane->panel = 'bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'home_products-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'home-items',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '360b6976-76c1-4b11-b99b-2a2ba903486c';
    $display->content['new-360b6976-76c1-4b11-b99b-2a2ba903486c'] = $pane;
    $display->panels['bottom'][2] = 'new-360b6976-76c1-4b11-b99b-2a2ba903486c';
    $pane = new stdClass();
    $pane->pid = 'new-ade55d18-e030-4c81-9981-8efaa639a989';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'desc-section-more-footer',
      'title' => '',
      'body' => '<div class="desc-section-more-footer"></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ade55d18-e030-4c81-9981-8efaa639a989';
    $display->content['new-ade55d18-e030-4c81-9981-8efaa639a989'] = $pane;
    $display->panels['bottom'][3] = 'new-ade55d18-e030-4c81-9981-8efaa639a989';
    $pane = new stdClass();
    $pane->pid = 'new-75640e86-5c44-435a-909a-668ca382dfee';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Details section',
      'title' => 'OVER CUP-A-SOUP',
      'body' => 'Heb je zin in een lekker soepje? Dan zit je bij Cup-a-Soup altijd goed! Er is genoeg keuze uit het assortiment van Cup-a-Soup om elke dag wat anders te drinken. Zo zijn er onder andere de classics, zoals Tomaat, Kip, Kerrie en Champignon Ham. Toch zin in nog iets anders of wellicht lichters? Probeer dan ook eens een Souperieur of een van de Cup-a-Soup drinkbouillons! En zoek je ook nog een systeem voor je soepen en drinkbouillons? Dan zit je hier ook goed! Voor elke keuken bieden wij namelijk een oplossing!',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'details-txt',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '75640e86-5c44-435a-909a-668ca382dfee';
    $display->content['new-75640e86-5c44-435a-909a-668ca382dfee'] = $pane;
    $display->panels['center'][0] = 'new-75640e86-5c44-435a-909a-668ca382dfee';
    $pane = new stdClass();
    $pane->pid = 'new-0355ebe7-bc84-4326-8cae-11651bee0a9f';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'image',
      'title' => '',
      'body' => '<div class="product-img"></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0355ebe7-bc84-4326-8cae-11651bee0a9f';
    $display->content['new-0355ebe7-bc84-4326-8cae-11651bee0a9f'] = $pane;
    $display->panels['center'][1] = 'new-0355ebe7-bc84-4326-8cae-11651bee0a9f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'product';
  $page->task = 'page';
  $page->admin_title = 'Product';
  $page->admin_description = '';
  $page->path = 'product/%nid';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'nid' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_product__panel';
  $handler->task = 'page';
  $handler->subtask = 'product';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '85b74da5-10f3-4df4-8bb5-d056860de37e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5e43d831-2efe-4c49-9be3-9ebd60cf3c83';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_product_order_header_detai';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'product-order-header',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5e43d831-2efe-4c49-9be3-9ebd60cf3c83';
    $display->content['new-5e43d831-2efe-4c49-9be3-9ebd60cf3c83'] = $pane;
    $display->panels['center'][0] = 'new-5e43d831-2efe-4c49-9be3-9ebd60cf3c83';
    $pane = new stdClass();
    $pane->pid = 'new-1418ff07-c5e3-4495-8e11-45881197f999';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_options';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_fields',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'edit' => 'Edit',
        'delete' => 'Delete',
        'add' => 'Add',
        'description' => 0,
        'view_mode' => 'full',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'product-order-radio-btns',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1418ff07-c5e3-4495-8e11-45881197f999';
    $display->content['new-1418ff07-c5e3-4495-8e11-45881197f999'] = $pane;
    $display->panels['center'][1] = 'new-1418ff07-c5e3-4495-8e11-45881197f999';
    $pane = new stdClass();
    $pane->pid = 'new-f1493f32-c17a-4248-89ec-f7ea30bd118d';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-popular assortiment-block grey',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f1493f32-c17a-4248-89ec-f7ea30bd118d';
    $display->content['new-f1493f32-c17a-4248-89ec-f7ea30bd118d'] = $pane;
    $display->panels['center'][2] = 'new-f1493f32-c17a-4248-89ec-f7ea30bd118d';
    $pane = new stdClass();
    $pane->pid = 'new-fc76454a-6cb2-4e17-9d28-49219226de5a';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-selectie assortiment-block assortiment-block-reg',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'fc76454a-6cb2-4e17-9d28-49219226de5a';
    $display->content['new-fc76454a-6cb2-4e17-9d28-49219226de5a'] = $pane;
    $display->panels['center'][3] = 'new-fc76454a-6cb2-4e17-9d28-49219226de5a';
    $pane = new stdClass();
    $pane->pid = 'new-e06c568a-e88a-488e-a831-8938e4ea5417';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-classic assortiment-block assortiment-block-reg',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e06c568a-e88a-488e-a831-8938e4ea5417';
    $display->content['new-e06c568a-e88a-488e-a831-8938e4ea5417'] = $pane;
    $display->panels['center'][4] = 'new-e06c568a-e88a-488e-a831-8938e4ea5417';
    $pane = new stdClass();
    $pane->pid = 'new-c9bdfdd7-9d17-4931-89bd-128a41e29692';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-selectie assortiment-block assortiment-block-reg',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'c9bdfdd7-9d17-4931-89bd-128a41e29692';
    $display->content['new-c9bdfdd7-9d17-4931-89bd-128a41e29692'] = $pane;
    $display->panels['center'][5] = 'new-c9bdfdd7-9d17-4931-89bd-128a41e29692';
    $pane = new stdClass();
    $pane->pid = 'new-afe5c212-75e5-4728-ab3e-9f57fdfbd694';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Uw bestelling',
      'title' => 'Uw bestelling',
      'body' => '<div class="results">
<table>
	<tbody>
		<tr>
			<td>Cup-a-Soup Startpakket</td>
			<td>&nbsp;</td>
			<td>Gratis</td>
		</tr>
	</tbody>
</table>
</div>
<div class="empty-result">U heeft nog niets geselecteerd</div>
<div class="total-wrapper title sm-title">TOTAAL €<span></span></div>

<div class="bottom-wrapper">
<div class="details-text">
De bovenstaande bedragen zijn adviesprijzen, deze bedragen kunnen afwijken van het bedrag dat uw leverancier in rekening brengt. De werkelijke bedragen kunt u opvragen bij uw leverancier.
</div>
<div class="button btn-more">
<a href="/service">BESTELLEN</a>
</div>
</div>',
      'format' => 'popup_tags',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-total-price',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'afe5c212-75e5-4728-ab3e-9f57fdfbd694';
    $display->content['new-afe5c212-75e5-4728-ab3e-9f57fdfbd694'] = $pane;
    $display->panels['center'][6] = 'new-afe5c212-75e5-4728-ab3e-9f57fdfbd694';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['product'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'product_assortiment';
  $page->task = 'page';
  $page->admin_title = 'PRODUCT ASSORTIMENT';
  $page->admin_description = '';
  $page->path = 'product-assortiment';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_product_assortiment__panel';
  $handler->task = 'page';
  $handler->subtask = 'product_assortiment';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'assortiment',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 5,
          1 => 2,
          2 => 1,
          3 => 3,
          4 => 4,
          5 => 6,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => '2_nd',
        ),
        'parent' => 'main',
        'class' => 'assortiment-row assortiment-row-2',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => '1_st',
        ),
        'parent' => 'main',
        'class' => 'assortiment-row assortiment-row-1',
        'hide_empty' => 0,
      ),
      '1_st' => array(
        'type' => 'region',
        'title' => '1-st',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      '2_nd' => array(
        'type' => 'region',
        'title' => '2-nd',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => '3_rd',
        ),
        'parent' => 'main',
        'class' => 'assortiment-row assortiment-row-3',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => '4_th',
        ),
        'parent' => 'main',
        'class' => 'assortiment-row assortiment-row-4',
        'hide_empty' => 0,
      ),
      '3_rd' => array(
        'type' => 'region',
        'title' => '3-rd',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      '4_th' => array(
        'type' => 'region',
        'title' => '4-th',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      '1_st' => NULL,
      '2_nd' => NULL,
      '3_rd' => NULL,
      '4_th' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c7509dfb-ef12-4344-83de-3b0b0248c717';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fba692d5-8c41-4e01-8b73-31472f8e5c70';
    $pane->panel = '1_st';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'item-title',
      'title' => '',
      'body' => '<div class="item-title" data-title="SACHET (175 ML)"></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fba692d5-8c41-4e01-8b73-31472f8e5c70';
    $display->content['new-fba692d5-8c41-4e01-8b73-31472f8e5c70'] = $pane;
    $display->panels['1_st'][0] = 'new-fba692d5-8c41-4e01-8b73-31472f8e5c70';
    $pane = new stdClass();
    $pane->pid = 'new-62560c99-615f-4dbb-899b-595b78d92fba';
    $pane->panel = '1_st';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-popular assortiment-block grey',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '62560c99-615f-4dbb-899b-595b78d92fba';
    $display->content['new-62560c99-615f-4dbb-899b-595b78d92fba'] = $pane;
    $display->panels['1_st'][1] = 'new-62560c99-615f-4dbb-899b-595b78d92fba';
    $pane = new stdClass();
    $pane->pid = 'new-e7575af3-1228-4caa-8d0f-bc1185b2bb34';
    $pane->panel = '1_st';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-selectie assortiment-block assortiment-block-reg',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e7575af3-1228-4caa-8d0f-bc1185b2bb34';
    $display->content['new-e7575af3-1228-4caa-8d0f-bc1185b2bb34'] = $pane;
    $display->panels['1_st'][2] = 'new-e7575af3-1228-4caa-8d0f-bc1185b2bb34';
    $pane = new stdClass();
    $pane->pid = 'new-92eefa40-50a2-46d5-93f8-ea8e592de77a';
    $pane->panel = '1_st';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-classic assortiment-block assortiment-block-reg',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '92eefa40-50a2-46d5-93f8-ea8e592de77a';
    $display->content['new-92eefa40-50a2-46d5-93f8-ea8e592de77a'] = $pane;
    $display->panels['1_st'][3] = 'new-92eefa40-50a2-46d5-93f8-ea8e592de77a';
    $pane = new stdClass();
    $pane->pid = 'new-34da0a7f-d0fa-44e5-9412-40e174af829f';
    $pane->panel = '1_st';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-drinkbouillon assortiment-block assortiment-block-reg',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '34da0a7f-d0fa-44e5-9412-40e174af829f';
    $display->content['new-34da0a7f-d0fa-44e5-9412-40e174af829f'] = $pane;
    $display->panels['1_st'][4] = 'new-34da0a7f-d0fa-44e5-9412-40e174af829f';
    $pane = new stdClass();
    $pane->pid = 'new-2ec5fa1f-006c-4f4c-af14-8667e320786b';
    $pane->panel = '2_nd';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'item-title',
      'title' => '',
      'body' => '<div class="item-title" data-title="SACHET (140 ML)"></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2ec5fa1f-006c-4f4c-af14-8667e320786b';
    $display->content['new-2ec5fa1f-006c-4f4c-af14-8667e320786b'] = $pane;
    $display->panels['2_nd'][0] = 'new-2ec5fa1f-006c-4f4c-af14-8667e320786b';
    $pane = new stdClass();
    $pane->pid = 'new-a4cf9e52-38e3-4e68-bf7e-bfd14d063e97';
    $pane->panel = '2_nd';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '2',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-popular assortiment-block grey',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a4cf9e52-38e3-4e68-bf7e-bfd14d063e97';
    $display->content['new-a4cf9e52-38e3-4e68-bf7e-bfd14d063e97'] = $pane;
    $display->panels['2_nd'][1] = 'new-a4cf9e52-38e3-4e68-bf7e-bfd14d063e97';
    $pane = new stdClass();
    $pane->pid = 'new-1ee48c9e-6b43-478d-b1e9-f5f2509d6320';
    $pane->panel = '2_nd';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '2',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-selectie assortiment-block assortiment-block-reg',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1ee48c9e-6b43-478d-b1e9-f5f2509d6320';
    $display->content['new-1ee48c9e-6b43-478d-b1e9-f5f2509d6320'] = $pane;
    $display->panels['2_nd'][2] = 'new-1ee48c9e-6b43-478d-b1e9-f5f2509d6320';
    $pane = new stdClass();
    $pane->pid = 'new-ddc00412-52f5-4b84-9608-1eaf1043ad4c';
    $pane->panel = '2_nd';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '2',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-classic assortiment-block assortiment-block-reg',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ddc00412-52f5-4b84-9608-1eaf1043ad4c';
    $display->content['new-ddc00412-52f5-4b84-9608-1eaf1043ad4c'] = $pane;
    $display->panels['2_nd'][3] = 'new-ddc00412-52f5-4b84-9608-1eaf1043ad4c';
    $pane = new stdClass();
    $pane->pid = 'new-c1e0c04b-9d77-4f3f-a9f4-d61390e7056a';
    $pane->panel = '2_nd';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '2',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-drinkbouillon assortiment-block assortiment-block-reg',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c1e0c04b-9d77-4f3f-a9f4-d61390e7056a';
    $display->content['new-c1e0c04b-9d77-4f3f-a9f4-d61390e7056a'] = $pane;
    $display->panels['2_nd'][4] = 'new-c1e0c04b-9d77-4f3f-a9f4-d61390e7056a';
    $pane = new stdClass();
    $pane->pid = 'new-e0cd44ee-44e7-4d60-b8f3-bb54ae17df4d';
    $pane->panel = '3_rd';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'item-title',
      'title' => '',
      'body' => '<div class="item-title" data-title="SOUPERIEUR (175 ML)"></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e0cd44ee-44e7-4d60-b8f3-bb54ae17df4d';
    $display->content['new-e0cd44ee-44e7-4d60-b8f3-bb54ae17df4d'] = $pane;
    $display->panels['3_rd'][0] = 'new-e0cd44ee-44e7-4d60-b8f3-bb54ae17df4d';
    $pane = new stdClass();
    $pane->pid = 'new-78beac77-1184-457c-b34c-fd2d971208d3';
    $pane->panel = '3_rd';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '3',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-popular assortiment-block grey',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '78beac77-1184-457c-b34c-fd2d971208d3';
    $display->content['new-78beac77-1184-457c-b34c-fd2d971208d3'] = $pane;
    $display->panels['3_rd'][1] = 'new-78beac77-1184-457c-b34c-fd2d971208d3';
    $pane = new stdClass();
    $pane->pid = 'new-23958e65-1e9a-4a7d-bb47-6c90153df91f';
    $pane->panel = '3_rd';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '3',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-selectie assortiment-block assortiment-block-reg',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '23958e65-1e9a-4a7d-bb47-6c90153df91f';
    $display->content['new-23958e65-1e9a-4a7d-bb47-6c90153df91f'] = $pane;
    $display->panels['3_rd'][2] = 'new-23958e65-1e9a-4a7d-bb47-6c90153df91f';
    $pane = new stdClass();
    $pane->pid = 'new-a708321d-5115-4a93-b088-5988a736af44';
    $pane->panel = '3_rd';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '3',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-classic assortiment-block assortiment-block-reg',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a708321d-5115-4a93-b088-5988a736af44';
    $display->content['new-a708321d-5115-4a93-b088-5988a736af44'] = $pane;
    $display->panels['3_rd'][3] = 'new-a708321d-5115-4a93-b088-5988a736af44';
    $pane = new stdClass();
    $pane->pid = 'new-4d4e4763-887b-462a-9b3f-cfcaa1cb6afe';
    $pane->panel = '3_rd';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '3',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-drinkbouillon assortiment-block assortiment-block-reg',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4d4e4763-887b-462a-9b3f-cfcaa1cb6afe';
    $display->content['new-4d4e4763-887b-462a-9b3f-cfcaa1cb6afe'] = $pane;
    $display->panels['3_rd'][4] = 'new-4d4e4763-887b-462a-9b3f-cfcaa1cb6afe';
    $pane = new stdClass();
    $pane->pid = 'new-1ed72aa0-8845-4f15-bde9-9ff86e8e3b6a';
    $pane->panel = '4_th';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'item-title',
      'title' => '',
      'body' => '<div class="item-title" data-title="MACHINE ZAKKEN"></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1ed72aa0-8845-4f15-bde9-9ff86e8e3b6a';
    $display->content['new-1ed72aa0-8845-4f15-bde9-9ff86e8e3b6a'] = $pane;
    $display->panels['4_th'][0] = 'new-1ed72aa0-8845-4f15-bde9-9ff86e8e3b6a';
    $pane = new stdClass();
    $pane->pid = 'new-40943851-bf02-4d0c-a5e1-06c02c0fab7f';
    $pane->panel = '4_th';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '4',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-popular assortiment-block grey',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '40943851-bf02-4d0c-a5e1-06c02c0fab7f';
    $display->content['new-40943851-bf02-4d0c-a5e1-06c02c0fab7f'] = $pane;
    $display->panels['4_th'][1] = 'new-40943851-bf02-4d0c-a5e1-06c02c0fab7f';
    $pane = new stdClass();
    $pane->pid = 'new-f72d9e01-b6d5-4cd1-aa21-54fb613bd2f9';
    $pane->panel = '4_th';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '4',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-selectie assortiment-block assortiment-block-reg',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f72d9e01-b6d5-4cd1-aa21-54fb613bd2f9';
    $display->content['new-f72d9e01-b6d5-4cd1-aa21-54fb613bd2f9'] = $pane;
    $display->panels['4_th'][2] = 'new-f72d9e01-b6d5-4cd1-aa21-54fb613bd2f9';
    $pane = new stdClass();
    $pane->pid = 'new-d8c06dce-9945-4c7c-8f0e-6aaed60cca07';
    $pane->panel = '4_th';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '4',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-classic assortiment-block assortiment-block-reg',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd8c06dce-9945-4c7c-8f0e-6aaed60cca07';
    $display->content['new-d8c06dce-9945-4c7c-8f0e-6aaed60cca07'] = $pane;
    $display->panels['4_th'][3] = 'new-d8c06dce-9945-4c7c-8f0e-6aaed60cca07';
    $pane = new stdClass();
    $pane->pid = 'new-5cecfbef-9680-46ab-b0ca-842fb9d06b53';
    $pane->panel = '4_th';
    $pane->type = 'views_panes';
    $pane->subtype = 'product_assortiment-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '4',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-drinkbouillon assortiment-block assortiment-block-reg',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '5cecfbef-9680-46ab-b0ca-842fb9d06b53';
    $display->content['new-5cecfbef-9680-46ab-b0ca-842fb9d06b53'] = $pane;
    $display->panels['4_th'][4] = 'new-5cecfbef-9680-46ab-b0ca-842fb9d06b53';
    $pane = new stdClass();
    $pane->pid = 'new-3dc7bcdd-8d13-4646-8811-5a2d0b812fd5';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Uw bestelling',
      'title' => 'Uw bestelling',
      'body' => '<div class="results">
<table>
	<tbody>
		<tr>
			<td>Cup-a-Soup Startpakket</td>
			<td>&nbsp;</td>
			<td>Gratis</td>
		</tr>
	</tbody>
</table>
</div>
<div class="empty-result">U heeft nog niets geselecteerd</div>
<div class="total-wrapper title sm-title">TOTAAL €<span></span></div>

<div class="bottom-wrapper">
<div class="details-text">
De bovenstaande bedragen zijn adviesprijzen, deze bedragen kunnen afwijken van het bedrag dat uw leverancier in rekening brengt. De werkelijke bedragen kunt u opvragen bij uw leverancier.
</div>
<div class="button btn-more">
<a href="/service">BESTELLEN</a>
</div>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-total-price',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3dc7bcdd-8d13-4646-8811-5a2d0b812fd5';
    $display->content['new-3dc7bcdd-8d13-4646-8811-5a2d0b812fd5'] = $pane;
    $display->panels['bottom'][0] = 'new-3dc7bcdd-8d13-4646-8811-5a2d0b812fd5';
    $pane = new stdClass();
    $pane->pid = 'new-3d5eeca3-5343-4a8a-a81b-28e7bb1a41ab';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'ASSORTIMENT title',
      'title' => '',
      'body' => ' <div class="text">
      <h2 class="pane-title">Gratis Cup-A-Soup Startpakket bij aankoop van 4 caterpacks Classic naar keuze.</h2>
      <p class="details-txt">
         Het Startpakket bestaat uit: 1 doos Cup-a-Soup Tomaat, 1 doos Cup-a-Soup Mosterd en 50 bekers
      </p>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'assortiment-details',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3d5eeca3-5343-4a8a-a81b-28e7bb1a41ab';
    $display->content['new-3d5eeca3-5343-4a8a-a81b-28e7bb1a41ab'] = $pane;
    $display->panels['top'][0] = 'new-3d5eeca3-5343-4a8a-a81b-28e7bb1a41ab';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['product_assortiment'] = $page;

  return $pages;

}
