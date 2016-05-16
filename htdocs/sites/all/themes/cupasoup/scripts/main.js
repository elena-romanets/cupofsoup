(function ($) {
  $('document').ready(function () {

    var $formPlaceholder = $('.form-placeholder');

    $formPlaceholder.each(function () {
      var $el = $(this);
      var input = '<span class="minus">-</span><input name="product[' + $el.data('id') + ']" type="text" value="0"><span class="plus">+</span>';

      $el.html(input);

      var $input = $el.find('input');

      $el.delegate('.minus', 'click', function () {
        var val = Number($input.val()) || 0;

        if (val > 0) {
          $input.val(val - 1);
          $input.change();
        }
      });

      $el.delegate('.plus', 'click', function () {
        var val = Number($input.val()) || 0;

        $input.val(val + 1);
        $input.change();
      });
    });


    var $allInputs = $formPlaceholder.find('input');
    $allInputs.change(function () {

      var totalPrice = 0;

      $allInputs.each(function () {
        var $el = $(this);
        var val = Number($el.val()) || 0;
        var price = $el.parents('tr').find('.product-assortiment-price-value').data('price')
        totalPrice += val * price;
      });


      alert(totalPrice);
    });
  });

})(jQuery);