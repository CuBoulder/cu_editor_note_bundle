<div class="express-editor-note express-editor-note-single express-editor-note-type-<?php print $type; ?>">
  <div class="express-editor-note-header">
    <h3><?php print $title;?></h3>
    <div class="express-editor-note-type"><?php print express_editor_note_types($type); ?></div>
  </div>
  <div class="express-editor-note-content">
    <?php print $body; ?>
  </div>
  <?php if (!variable_get('express_editor_notes_meta_display', '0')): ?>
  <div class="express-editor-note-footer express-editor-note-meta">
    <ul>
      <li>
        <?php print $author; ?>
      </li>
      <li>
        <?php print $date; ?>
      </li>
      <?php if (isset($edit)): ?>
        <li>
          <?php print $edit; ?>
        </li>
      <?php endif; ?>
      <?php if (isset($delete)): ?>
        <li>
          <?php print $delete; ?>
        </li>
      <?php endif; ?>
    </ul>
  </div>
  <?php endif; ?>
</div>
