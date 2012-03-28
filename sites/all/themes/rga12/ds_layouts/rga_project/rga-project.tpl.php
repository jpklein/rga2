<div class="<?php print $classes; ?> clearfix">
<?php if ($gallery): ?>
  <div class="project-gallery<?php print $gallery_classes; ?>">
    <?php print $gallery; ?>
  </div>
<?php endif; ?>
<?php if ($description): ?>
  <div class="gallery-description<?php print $description_classes; ?>">
    <div class="project-information<?php print $description_classes; ?>">
      <fieldset class="fieldset-wrapper">
        <?php print $description; ?>
      </fieldset>
    </div>
  </div>
<?php endif; ?>
</div>
