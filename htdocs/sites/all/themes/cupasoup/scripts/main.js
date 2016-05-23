(function ($) {
  $('document').ready(function () {


    $('.product-items-owl .view-content').owlCarousel({
      items: 1,
      loop:true
    });

    $('.field-name-field-title').each(function() {

      var $inp = $('<input type="radio" name="product-option"/>');
      $inp.val($(this).parent().find('.field-name-field-value .field-item').text());
      $(this).prepend($inp)
    });


    var $formPlaceholder = $('.form-placeholder');
    var $table;
    var $tableLastRow;
    var $res = $('.assortiment-total-price .results').hide();
    var $emptyRes = $('.assortiment-total-price .empty-result');
    var $btnActive = $('.assortiment-total-price .bottom-wrapper .button.btn-more a');

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
      var full = false;

      for (var i in prices) {
        if (prices.hasOwnProperty(i) && prices[i].total) {
          full = true;
          var $tr = $('<tr>')
            .append(
              $('<td>').text(i),
              $('<td>').text(items[i].total + 'x'),
              $('<td>').text(Math.round(prices[i].total * 100) / 100)
            );

          $tableLastRow.before($tr);
        }
      }

      if (full) {
        $btnActive.addClass('active');
        $res.show();
        $emptyRes.hide();
      }
      else {
        $btnActive.removeClass('active');
        $res.hide();
        $emptyRes.show();
      }

      $totalPrice.text(Math.round(totalPrice * 100) / 100);
      //console.log('totalPrice:', totalPrice);
      //console.log('prices:', prices);
      //console.log('items:', items);
    });



    //  Form fields

    $('.form-type-radio, .product-order-radio-btns .field-name-field-title').prepend('<span class="radio-button"></span>');

    $('.form-type-radio input, .product-order-radio-btns .field-name-field-title input').each(function() {
      if ($(this).is(':checked')) {
        $('.form-type-radio .radio-button').removeClass('active');
        $(this).parent('div').children('.radio-button').addClass('active');
      }
    });

    $('.form-type-radio input, .product-order-radio-btns .field-name-field-title input').bind('change',function() {
      if ($(this).is(':checked')) {
        $('.form-type-radio .radio-button').removeClass('active');
        $(this).parent('div').children('.radio-button').addClass('active');
      }
    });

    $('.form-type-radio .radio-button, .product-order-radio-btns .field-name-field-title .radio-button').bind('click',function() {
      $('.form-type-radio input').attr('checked','');
      $('.product-order-radio-btns .field-name-field-title input').attr('checked','');
      $(this).parent('div').children('input').attr('checked','checked');

      $('.form-type-radio .radio-button').removeClass('active');
      $('.product-order-radio-btns .field-name-field-title .radio-button').removeClass('active');
      $(this).parent('div').children('.radio-button').addClass('active');
    });

    // Checkbox
    $('.form-type-checkbox').prepend('<span class="checkbox-button"></span>');

    $('.form-type-checkbox .checkbox-button').bind('click',function() {
      if ($(this).parent('div').children('input').is(':checked')) {
          $('.form-type-checkbox .checkbox-button').removeClass('active');
          $(this).parent('div').children('input').attr('checked','');
      }
      else {
        $(this).parent('div').children('.checkbox-button').addClass('active');
        $(this).parent('div').children('input').attr('checked','checked');
      }

    });

    $('.mob-menu .block-content').append('<span class="menuIcon"><span></span></span>');

    // init menu
    $('.mob-menu .menuIcon').bind('click', function(){
      $('.mob-menu ul').toggleClass('show');
      $(this).toggleClass("close");
    });

    // assortiment popups
    $('.product-assortiment-link').bind('click',function() {
      $('body').prepend('<div class="body-overlay show"></div>');

      $('.product-assortiment-popup').removeClass('show');
      $(this).parent('div').children('.product-assortiment-popup').toggleClass('show');
    });

    $('.close-btn').bind('click',function() {
      $(this).parent('div').toggleClass('show');
      $('.body-overlay').removeClass('show');
    });
  });



})(jQuery);
