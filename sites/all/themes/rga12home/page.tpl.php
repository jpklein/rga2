
  <div id="page-wrapper"><div id="page">

    <?php print $messages; ?>

    <div id="main" class="section clearfix">

      <div id="content" class="column">
        <a id="main-content"></a>
        <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
        <?php print render($page['content']); ?>
      </div> <!-- /#content -->

    </div> <!-- /#main -->

    <div id="footer" class="section">
      <?php print render($page['footer']); ?>
    </div> <!-- /#footer -->

  </div></div> <!-- /#page, /#page-wrapper -->
