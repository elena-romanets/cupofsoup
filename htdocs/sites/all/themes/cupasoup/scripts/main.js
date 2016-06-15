(function ($) {
  $('document').ready(function () {

    $('.faq-question').click(function() {
      $(this)
        .toggleClass('open')
        .parent().find('.faq-answer').slideToggle('fast');
    });


    $('.product-items-owl .view-content').owlCarousel({
      items: 1,
      loop:true
    });

    // Image view on systemen page
    $('.systemen-product-image img').prependTo('.product-img.systemen');

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

        // Set default value if it exists
        if ($('.field-name-field-title .field-item input').hasClass('radio-input')) {
          var radioValue = $('input[name="product-option"]:checked').parents(".field-collection-item-field-options").find(".field-name-field-value .field-item").text();
          var radioValueRes = radioValue.replace('€ ', '').replace(',', '.');
          $('.assortiment-total-price .total-wrapper span').text(radioValueRes);
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
    $allInputs.change(updateTotal);


    var iProd = 1;
    $('.field-name-field-title .field-item').each(function(index) {

      var checked = iProd == 1 ? "checked" : "";
      var $el = $(this);
      var id = 'radio-' + index;
      var $inp = $('<input type="radio" name="product-option" ' + checked + ' class="radio-input">');
      $inp.val($el.text());//$(this).parents('.field-item').find('.field-name-field-value .field-item').text());
      $inp.attr('id', id);
      $inp.change(updateTotal);

      var $label = $('<label for="' + id + '"/>');
      $label.text($el.text());
      $el
        .empty()
        .append($inp)
        .append($label);

      iProd++;

      // Check for product page for activating button
      //$btnActive.addClass('active');
    });
    var radioValue = $('input[name="product-option"]:checked').parents(".field-collection-item-field-options").find(".field-name-field-value .field-item").text();
    var radioValueRes = radioValue.replace('€ ', '').replace(',', '.');

    $('.assortiment-total-price .total-wrapper span').text(radioValueRes);

    var $assortimentLinks = $('.assortiment-menu .assortiment-link');
    var $assortimentPanes = $('.assortiment-row');
    $assortimentLinks.first().addClass('active');

    $assortimentLinks.click(function () {
      $assortimentLinks.removeClass('active');

      var self = this;
      var $el = $(this);
      $el.addClass('active');

      $assortimentLinks.each(function (index) {
        if (self == this) {
          $assortimentPanes.hide();
          $assortimentPanes.eq(index).show()
        }
      })
    });

    // Address delivery is chosen
    var $delivery = $('.delivery');
    var $deliveryInput = $delivery.find('input');
    $('.address-approve label').bind('click', function(){

      $delivery.slideToggle('fast');

      if ($deliveryInput.attr('required')) {
        $deliveryInput.removeAttr('required');
      } else {
        $deliveryInput.attr('required', 'required');
      }
    });

    if ($('.address-approve input.form-checkbox').is(':checked')) {
      $('.delivery').show();
    }
    else {
      $('.delivery').hide();
    }

    // Supplier options
    var $supplier = $('.supplier');
    var $supplierInput = $supplier.find('input');
    $supplierInput.attr('required', 'required');
    $('.supplier-options .form-type-radio label').click(function() {
      $supplier.slideToggle('fast');

      if ($supplierInput.attr('required')) {
        $supplierInput.removeAttr('required');
      } else {
        $supplierInput.attr('required', 'required');
      }
    });

    // Mobile menuIcon
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


    var val = localStorage.getItem('items');
    val = val ? JSON.parse(val).join("\n") : '';
    $('.webform-component--items input[name="submitted[items]"]').val(val);


    function updateTotal() {
      var $el = $(this);
      var id = $el.parent().data('id');
      var radioValue = $('input[name="product-option"]:checked').parents(".field-collection-item-field-options").find(".field-name-field-value .field-item").text();
      var radioValueRes = radioValue.replace('€ ', '').replace(',', '.');
      var radioValueResult = (radioValueRes * 100) / 100;

      $('[data-id="' + id + '"] input').val($el.val());

      var totalPrice = $('.field-name-field-title .field-item input').hasClass('radio-input') ? radioValueResult : 0;
      var prices = {};
      var items = {};

      $allInputs.each(function () {
        var $el = $(this);
        var categoryTitle = $el.parents('.assortiment-block').find('h2.pane-title').text();

        if (categoryTitle === 'POPULAIR') {
          return;
        }

        var $header = $('.header-details');
        var classes = ['carrousel', 'mini', 'selectieboxen', 'tabletop', 'standalones'];
        var mainTitle = '';

        for (var i in classes) {
          if ($header.hasClass(classes[i])) {
            mainTitle = classes[i].toUpperCase();
          }
        }

        var val = Number($el.val()) || 0;
        var price = $el.parents('tr').find('.product-assortiment-price-value').data('price');
        var paneTitleOrig = $el.parents('.assortiment-row').find('.item-title').attr('data-title') || mainTitle;
        var productTitle = $el.parents('tr').find('.pane-title.sm-title').text();

        var paneTitle = [ paneTitleOrig, categoryTitle ].join(' ');

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

        items[paneTitle].name = [ paneTitleOrig, categoryTitle ].join(': ');
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
      $table.empty();

      var $totalPrice = $('.assortiment-total-price .total-wrapper span');
      var full = false;
      var productTrue = false;
      var total = 0;
      var selectedItems = [];
      var type = $('input[name="product-option"]:checked').val() || '';

      for (var i in prices) {
        if (prices.hasOwnProperty(i) && prices[i].total) {
          full = true;
          var totalTDPrice = (Math.round(prices[i].total * 100) / 100).toString();
          var $tr = $('<tr>')
            .append(
              $('<td>').text(i),
              $('<td>').text(items[i].total + 'x'),
              $('<td>').text('€' + totalTDPrice.replace('.', ','))
            );

          $table.append($tr);

          if (items[i].total) {
            total += items[i].total;
            for (var j in items[i]) {
              if (items[i][j] && ['total', 'name'].indexOf(j) === -1) {
                selectedItems.push(items[i].name + ': ' + j + ': ' + items[i][j] + 'x ' + type);
              }
            }
          }
        }
      }

      var productOrder = $('body').hasClass('page-product-assortiment');
      var productOrderSystemen = $('body').hasClass('page-product');
      var productOrderCarousel = $('.page-product .header-details').hasClass('carrousel');
      var productOrderMini = $('.page-product .header-details').hasClass('mini');
      var productOrderSelectieboxen = $('.page-product .header-details').hasClass('selectieboxen');
      var productOrderTabletop = $('.page-product .header-details').hasClass('tabletop');
      var productOrderStandalones = $('.page-product .header-details').hasClass('standalones');
      if (total > 3 && productOrder) {

        $table.append($tableLastRow);

        var freeItem = $('.results .free td').text();

        selectedItems.push(freeItem);
      }

      if (productOrderSystemen) {

        if ((total > 5 && productOrderCarousel) ||
          (total > 8 && productOrderMini) ||
          (total > 0 && productOrderSelectieboxen) ||
          (total > 3 && productOrderTabletop) ||
          (total > 3 && productOrderStandalones)) {

          $table.append($tableLastRow);

          var freeItem = $('.results .free td').text();
          productTrue = true;

          selectedItems.push(freeItem);
        }

        if (productOrderCarousel) {
          var radioValue = $('input[name="product-option"]:checked').parents(".field-collection-item-field-options").find(".field-name-field-value .field-item").text();
          var radioValueRes = radioValue.replace('€ ', '€');

          $('.carrousel-radio-btn-res').text(radioValueRes);
        }

      }

      localStorage.setItem('items', JSON.stringify(selectedItems));

      if ((full && productOrder) || productTrue) {
        $btnActive.addClass('active');
        $res.show();
        $emptyRes.hide();
      }
      else {
        $btnActive.removeClass('active');
        $res.hide();
        $emptyRes.show();
      }

      var totalResultPrice = (Math.round(totalPrice * 100) / 100).toString().replace('.', ',');
      $totalPrice.text(totalResultPrice);
    }

  });
})(jQuery);
