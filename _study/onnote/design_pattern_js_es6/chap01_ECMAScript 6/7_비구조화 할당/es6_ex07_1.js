// 7.1 비구조화 할당 이전 방식

let coffee = {
  name: 'Americano',
  price: 3000,
};

let coffeeName;
let coffeePrice;

coffeeName = coffee.name;
coffeePrice = coffee.price;

console.log(coffeeName); // Americano
console.log(coffeePrice); // 300
