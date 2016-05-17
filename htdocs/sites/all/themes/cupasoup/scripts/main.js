(function ($) {
  $('document').ready(function () {

    var $formPlaceholder = $('.form-placeholder');
    var $table;
    var $tableLastRow;

    $formPlaceholder.each(function () {
      var $el = $(this);
      var input = '<span class="minus">-</span><input name="product[' + $el.data('id') + ']" type="text" value="0"><span class="plus">+</span>';

      $el.html(input);

      var $input = $el.find('input');

      $el.delegate('.minus', 'click', function () {
        var val = Number($input.val()) || 0;

        if (val > 0) {
          $input
            .val(val - 1)
            .change();
        }
      });

      $el.delegate('.plus', 'click', function () {
        var val = Number($input.val()) || 0;

        $input
          .val(val + 1)
          .change();
      });
    });

    var $allInputs = $formPlaceholder.find('input');
    $allInputs.change(function () {
      var $el = $(this);
      var id = $el.parent().data('id');

      $('[data-id="' + id + '"] input').val($el.val());

      var totalPrice = 0;
      var prices = {};
      var items = {};

      $allInputs.each(function () {
        var $el = $(this);
        var paneTitle = $el.parents('.assortiment-block').find('h2.pane-title').text();

        if (paneTitle === 'POPULAIR') {
          return;
        }

        var val = Number($el.val()) || 0;
        var price = $el.parents('tr').find('.product-assortiment-price-value').data('price');
        var productTitle = $el.parents('tr').find('.pane-title.sm-title').text();

        if (!prices[paneTitle]) {
          prices[paneTitle] = { total: 0 };
        }
        if (!items[paneTitle]) {
           items[paneTitle] = { total: 0 };
        }
        if (!prices[paneTitle][productTitle]) {
          prices[paneTitle][productTitle] = 0;
        }
        if (!items[paneTitle][productTitle]) {
          items[paneTitle][productTitle] = 0;
        }

        prices[paneTitle].total += val * price;
        items[paneTitle].total += val;
        prices[paneTitle][productTitle] += val * price;
        items[paneTitle][productTitle] += val;
        totalPrice += val * price;
      });

      if (!$tableLastRow) {
        $tableLastRow = $('.assortiment-total-price table tbody tr');
        $table = $('.assortiment-total-price table tbody');
      }

      $tableLastRow.detach();
      $table
        .empty()
        .append($tableLastRow);

      var $totalPrice = $('.assortiment-total-price .total-wrapper span');


      for (var i in prices) {
        if (prices.hasOwnProperty(i) && prices[i].total) {

          var $tr = $('<tr>')
            .append(
              $('<td>').text(i),
              $('<td>').text(items[i].total + 'x'),
              $('<td>').text(Math.round(prices[i].total * 100) / 100)
            );

          $tableLastRow.before($tr);
        }
      }

      $totalPrice.text(Math.round(totalPrice * 100) / 100);
      //console.log('totalPrice:', totalPrice);
      //console.log('prices:', prices);
      //console.log('items:', items);
    });
  });

})(jQuery);
