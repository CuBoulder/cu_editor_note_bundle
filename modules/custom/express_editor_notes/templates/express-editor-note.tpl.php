<div class="express-editor-note express-editor-note-single">
  <h3><?php print $title;?></h3>
  <div class="express-editor-note-content">
    <?php print $body; ?>
  </div>
  <?php if (!variable_get('express_editor_notes_meta_display', '0')): ?>
  <div class="express-editor-note-meta">
    <ul>
      <li>
        <?php print $email; ?>
      </li>
      <li>
        <?php print $date; ?>
      </li>
      <li>
        <?php print $edit; ?>
      </li>
    </ul>
  </div>
  <?php endif; ?>
</div>
