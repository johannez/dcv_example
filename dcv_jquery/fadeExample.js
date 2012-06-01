(function ($) {
  Drupal.behaviors.dcv_jquery = {
    attach: function(context, settings) {

      // Make the page title fade in on click.
      $("h1#page-title").click(function() {
        $(this).hide();
        $(this).fadeIn(1500);
      });

    }
  };
})(jQuery);