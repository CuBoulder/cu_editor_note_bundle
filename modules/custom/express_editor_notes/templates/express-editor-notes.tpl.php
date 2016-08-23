<div id="express-editor-notes-container" class="express-editor-notes-container express-editor-notes-closed">
  <div class="express-editor-notes-toolbar">
    <?php
      $display = variable_get('express_editor_notes_link_display', '0');
      if ($display):
    ?>
    <a href="#express-editor-notes-container" class="express-editor-notes-view-toggle express-editor-notes-label-link"><h2 class="<?php print $notes_active; ?>"><?php print $content['notes_title']; ?></h2></a>
  <?php else: ?>
    <h2 class="<?php print $notes_active; ?>"><?php print $content['notes_title']; ?></h2>
    <a href="#express-editor-notes-container" class="express-editor-notes-view-toggle"><?php print $content['notes_link_text']; ?></a>

  <?php endif; ?>



    <a href="#" class="express-editor-notes-close"><i class="fa fa-times"></i><span class="element-invisible">Close Editor Notes</span></a>

  </div>
  <div id="express-editor-notes-content" class="express-editor-notes-content">
    <?php print render($content['notes']); ?>
    <?php if (!empty($content['form']) && !variable_get('express_editor_notes_form_disable', '0')): ?>
    <div id="express-editor-notes-form" class="express-editor-notes-form">
      <h3>Add a Note</h3>
      <?php print render($content['form']); ?>
    </div>
  <?php endif; ?>
  </div>
</div>
