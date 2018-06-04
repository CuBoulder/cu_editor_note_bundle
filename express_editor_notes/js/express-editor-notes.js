(function ($, Drupal, window, document, undefined) {
  $(document).ready(function(){
    // Editor Notes Toolbar
    var clicked = false;
    $(".express-editor-notes-toolbar a.express-editor-notes-view-toggle").click(function() {
      $("#express-editor-notes-content").slideToggle('1000');
      $("#express-editor-notes-container").toggleClass('express-editor-notes-closed');
      $("#express-editor-notes-container").toggleClass('express-editor-notes-open');
      $(this).toggleClass('active');
      var target = $(this).attr('href');
      $('html, body').animate({
        scrollTop: $(target).offset().top -100
      }, 1000);

      if (clicked) {
        clicked = false;
        $(this).blur();
        $("#main").focus();
      }
      else {
        clicked = true;

        $("#express-editor-notes-content").focus();
      }
      return false;
    });

    // Editor Notes Close
    $(".express-editor-notes-close").click(function(){
      $("#express-editor-notes-content").slideUp('1000');
      $("#express-editor-notes-container").addClass('express-editor-notes-closed');
      $("#express-editor-notes-container").removeClass('express-editor-notes-open');
      return false;
    });

    // Show notes toolbar if there is a note
    var totalNotes = $('.express-editor-note').length;
    if (totalNotes > 0) {
      //$('ul.primary a.editor-notes').append(' (' + totalNotes + ')');
      $('.express-editor-notes-container').show();
    }

    // Show notes when clicked
    $('.express-editor-notes.path-not-admin ul.primary a.edit-layout').parent().after('<li><a href="#" class="editor-notes">Editor Notes</li>');

    $('ul.primary a.editor-notes').click(function(event){
      event.preventDefault();

      $('.express-editor-notes-container').show();

    });

    // Make sure notes are visible if a form error has occurred.
    if ($('#express-editor-notes-container .error.required').length) {
      $("#express-editor-notes-content").show();
      $('.express-editor-notes-container').slideDown();
    }

    // Remove padding so element has proper spacing
    $('#express-editor-notes-container').parent().parent().css('padding', 0);
  });
})(jQuery, Drupal, this, this.document);
