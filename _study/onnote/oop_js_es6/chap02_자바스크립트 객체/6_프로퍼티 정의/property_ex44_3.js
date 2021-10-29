// 6.3 Object.defineProperty() 함수로 속성값과 함께 정의

let coffee = {};

Object.defineProperty(coffee, 'name', {
  value: 'Americano',
  enumerable: true,
  configurable: true,
  writable: true,
});

console.log('name' in coffee); // true

// enumerable: true
console.log(coffee.propertyIsEnumerable('name')); // true

// configurable: true
delete coffee.name;
console.log('name' in coffee); // false

// writable: true
coffee.name = 'Cappuccino';
console.log(coffee.name); // Cappuccino
