(function ($) {
  Drupal.behaviors.fortiusActions = {
    attach: function(context, settings) {

      //Load the image into the colorbox
      $(".load-image").click(function() {
        $("#cboxMiddleRight").addClass('no-navi');
        $("#cboxMiddleLeft").addClass('no-navi');

        $(this).colorbox({
          height: '80%',
          width: '70%',
        });
      });

    }
  };

})(jQuery);