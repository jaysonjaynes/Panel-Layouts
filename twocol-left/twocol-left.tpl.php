<div class="panel-display twocol-left" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="content-main col" id="main-content">
    <?php print $content['middle']; ?>
  </div>
  <div class="sidebar-first col side-navigation">
    <?php print $content['left']; ?>
  </div>
</div>