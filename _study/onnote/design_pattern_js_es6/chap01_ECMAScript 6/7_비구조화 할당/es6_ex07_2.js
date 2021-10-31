// 7.2 비구조화 할당

// 7.2.1 기본적인 사용법

let coffee = {
  name: 'Americano',
  price: 3000,
};

let { name: coffeeName, price: coffeePrice } = coffee;

console.log(coffeeName); // Americano
console.log(coffeePrice); // 3000


// 7.2.2 프로퍼티 미존재

let coffee = {
  name: 'Americano',
  price: 3000,
};

let { name: coffeeName, caffeine: coffeeCaffeine } = coffee;

console.log(coffeeName); // Americano
console.log(coffeeCaffeine); // undefinded


// 7.2.3 기본값 설정

let coffee = {
  name: 'Americano',
  price: 3000,
};

// 프로퍼티의 기본값
let { name: coffeeName, caffeine: coffeeCaffeine = 500 } = coffee;

console.log(coffeeName); // Americano
console.log(coffeeCaffeine); // 500


// 7.2.4 프로퍼티명 생략

let coffee = {
  name: 'Americano',
  price: 3000,
};

// 프로퍼티 이름 생략
let { name, price } = coffee;

console.log(name); // Americano
console.log(price); // 3000
