<div class="panel-display twocol-right" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="content-main col" id="main-content">
    <?php print $content['middle']; ?>
  </div>
  <div class="sidebar-second col related-resources">
    <?php print $content['right']; ?>
  </div>
</div>