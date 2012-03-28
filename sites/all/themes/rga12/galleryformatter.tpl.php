<?php
/**
 * @file
 * Template file for the galleryformatter default formatter
 */

/**
 * Only edit this file for switching order of the slides info, adding classes or other minor changes within the overall html structure.
 * KEEP the original html structure or you'll run into problems with the JS.
 * IDs on the slides and the hash for the thumb links MUST be there for the gallery to function.
 * width and height must be set inline for gallery-slides container, the gallery-thumbs, and the li's inside it.
 *
 * Available variables:
 *
 * $dimensions - Array containing both slides and thumbs dimensions
 * $gallery_slides - Array containing all slide images, a link to the original and its sanatized title & description ready to print
 * $thumbs - Array containing all thumbnail images ready to print
 * $link_to_full -  BOOLEAN wether or not we are linking slides to original images
 */
define('CELLSPACING', 12);
define('IMAGEBORDER', 1);

// $slide_width = $dimensions['slides']['width'] + (IMAGEBORDER * 2);
// $slide_height = $dimensions['slides']['height'] + (IMAGEBORDER * 2);
$slide_width = 452;
$slide_height = 367;

$thumb_width = $dimensions['thumbs']['width'] + (IMAGEBORDER * 2);
$thumb_height = $dimensions['thumbs']['height'] + (IMAGEBORDER * 2);
?>
<div class="galleryformatter galleryview galleryformatter-<?php print $settings['style'] ?>" style="width: <?php print ($slide_width + CELLSPACING + $thumb_width); ?>px;">
  <div class="gallery-slides" style="float: left; width: <?php print $slide_width; ?>px; height: <?php print $slide_height; ?>px;">
    <div class="gallery-frame">
      <ul>
      <?php foreach ($slides as $id => $data): ?>
        <li class="gallery-slide" id="<?php print $data['hash_id']; ?>" style="width: <?php print $slide_width; ?>px; height: <?php print $slide_height; ?>px;">
          <div class="gallery-slide-padding">
            <div class="gallery-image-wrapper">
              <?php print $data['image']; ?>
            </div>
          </div>
          <?php if (!empty($data['title'])): ?>
          <div class="panel-overlay"><div class="overlay-inner"><h3><?php print $data['title']; ?></h3></div></div>
          <?php endif; ?>
        </li>
      <?php endforeach; ?>
      </ul>
    </div>
  </div>
  <?php if(!empty($thumbs)): ?>
  <div class="gallery-thumbs" style="float: right; width: <?php print $thumb_width; ?>px;">
    <div class="wrapper">
      <ul>
        <?php foreach ($thumbs as $id => $data): ?>
          <li class="slide-<?php print $id; ?>" style="width: <?php print $thumb_width; ?>px;"><a href="#<?php print $data['hash_id']; ?>"><?php print $data['image']; ?></a></li>
        <?php endforeach; ?>
      </ul>
    </div>
  </div>
  <?php endif; ?>
</div>
