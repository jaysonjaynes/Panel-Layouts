<div class="panel-display twocol-grantees-map" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="content-top col">
      <?php print $content['top']; ?>
  </div> 
  <div class="content-main content col" id="main-content">
    <?php print $content['middle']; ?>
  </div>
  <div class="sidebar-first col side-navigation">
    <?php print $content['left']; ?>
  </div>
</div>