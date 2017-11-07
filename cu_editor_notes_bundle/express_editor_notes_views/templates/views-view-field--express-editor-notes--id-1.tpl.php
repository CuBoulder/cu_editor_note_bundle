<?php

$query = db_select('express_editor_notes', 'en');
$query->fields('en', array('id', 'title', 'node_id', 'path'));

$query->condition('en.id', $output, '=');
$note = $query->execute()->fetchObject();

$path = !empty($note->node_id) ? 'node/' . $note->node_id : $note->path;
$item = menu_get_item($path);
$alias = drupal_get_path_alias($path);
print l($item['title'], $path);
print ("<br /><small>$alias</small>");
?>
