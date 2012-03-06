
  <div id="page-wrapper"><div id="page"<?php if ($logo): ?> style="background:transparent url('<?php print $logo; ?>') no-repeat scroll left top"<?php endif; ?>>

    <div id="header">

      <?php if ($site_name || $site_slogan): ?>
        <div id="name-and-slogan">
          <?php if ($site_name): ?>
            <?php if ($title): ?>
              <div id="site-name"><strong>
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span class="element-invisible"><?php print $site_name; ?></span></a>
              </strong></div>
            <?php else: /* Use h1 when the content title is empty */ ?>
              <h1 id="site-name">
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span class="element-invisible"><?php print $site_name; ?></span></a>
              </h1>
            <?php endif; ?>
          <?php endif; ?>

          <?php if ($site_slogan): ?>
            <div id="site-slogan"><?php print $site_slogan; ?></div>
          <?php endif; ?>
        </div> <!-- /#name-and-slogan -->
      <?php endif; ?>

      <?php if ($main_menu): ?>
        <div id="navigation"><div class="section">
          <span id="copyright-year"><?php print date("y"); ?></span>
          <?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => array('links', 'inline', 'clearfix')))); ?>
        </div></div> <!-- /.section, /#navigation -->
      <?php endif; ?>

    </div> <!-- /#header -->

    <?php print $messages; ?>

    <div id="main" class="section clearfix">

      <div id="content" class="column">
        <a id="main-content"></a>
        <?php print render($page['content']); ?>
      </div> <!-- /#content -->

    </div> <!-- /#main -->

    <div id="footer" class="section">
      <?php print render($page['footer']); ?>
    </div> <!-- /#footer -->

  </div></div> <!-- /#page, /#page-wrapper -->
