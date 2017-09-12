(function ($, Drupal, window, document, undefined) {
  $(document).ready(function(){
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
    $(".express-editor-notes-close").click(function(){
      $("#express-editor-notes-content").slideUp('1000');
      $("#express-editor-notes-container").addClass('express-editor-notes-closed');
      $("#express-editor-notes-container").removeClass('express-editor-notes-open');
      return false;
    });
  });
})(jQuery, Drupal, this, this.document);
