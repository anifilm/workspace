var cart = { name: '도서', price: 1500 };
var getTotal = function (cart) {
  return `${cart.price}원`;
};

var myCart = `장바구니에 ${cart.name}가 있습니다. 총 금액은 ${getToral(cart)}입니다.`;
