// 6.1 객체 리터럴로 정의

let coffee = {
  name: 'Americano'
};
/* 다음의 기본값을 가진다.
  enumerable: true,
  writable: true,
  configurable: true,
*/

console.log('name' in coffee); // true

// enumerable: true
console.log(coffee.propertyIsEnumerable('name')); // true

// writable: true
coffee.name = 'Cappuccino';
console.log(coffee.name); // Cappuccino

// configurable: true
delete coffee.name;
console.log('name' in coffee); // false
