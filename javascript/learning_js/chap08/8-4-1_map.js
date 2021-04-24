// 8.4 map과 filter

/*
일정한 형식의 배열을 다른 형식으로 변경할 때 map 메서드를 사용한다.
*/

const cart = [{ name: 'Widget', price: 9.95 }, { name: 'Gadget', price: 22.95 }];
const names = cart.map(x => x.name); // ["Widget", "Gadget"]
const prices = cart.map(x => x.price); // [9.95, 22.95]
const discountPrices = prices.map(x => x * 0.8); // [7.96, 18.36]

// 두 배열에 상품과 가격이 따로 저장되어 있을 때 이둘을 객체로 결합하는 예제
const items = ['Widget', 'Gadget'];
const prices = [9.95, 22.95];
const cart = items.map((x, i) => ({ name: x, price: prices[i] }));
// cart: [{ name: "Widget", price: 9.95 }, { name: "Gadget", price: 22.95 }]
