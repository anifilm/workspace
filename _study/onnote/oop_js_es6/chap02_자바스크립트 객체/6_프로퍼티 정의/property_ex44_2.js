// 6.2 Object.defineProperty() 함수로 정의

let coffee = {};

Object.defineProperty(coffee, 'name', {
  value: 'Americano'
});

/* 다음의 기본값을 가진다.
  enumerable: false,
  configurable: false,
  writable: false,
*/

console.log('name' in coffee); // true

// enumerable: false
console.log(coffee.propertyIsEnumerable('name')); // false

// configurable: false
delete coffee.name;
console.log('name' in coffee); // true

// writable: false
coffee.name = 'Cappuccino';
console.log(coffee.name); // Americano
