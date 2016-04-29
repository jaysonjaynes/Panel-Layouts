<div class="panel-display twocol-left" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="t-header col">
    <div class="inside">
      <?php print $content['top']; ?>
    </div>
  </div> 
  <div class="content-main col" id="main-content">
    <?php print $content['middle']; ?>
  </div>
  <div class="sidebar-first col related-resources">
    <?php print $content['left']; ?>
  </div>
</div>