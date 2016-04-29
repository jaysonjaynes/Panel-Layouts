<div class="panel-display fourcol-t1" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="t-header col">
    <div class="inside">
      <?php print $content['top']; ?>
    </div>
  </div> 
  <div class="main-column-one col" id="main-content">
    <?php print $content['maincolone']; ?>
  </div>
  <div class="main-column-two col" id="main-content">
    <?php print $content['maincoltwo']; ?>
  </div>
  <div class="main-column-three col" id="main-content">
    <?php print $content['maincolthree']; ?>
  </div>
  <div class="sidebar-first col related-resources">
    <?php print $content['left']; ?>
  </div>
</div>