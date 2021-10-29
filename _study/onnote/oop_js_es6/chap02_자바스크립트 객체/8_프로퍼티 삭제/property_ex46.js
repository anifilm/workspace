// 8. 프로퍼티 삭제

let coffee = {};

Object.defineProperty(coffee, 'name', {
  value: 'Americano',
  enumerable: true,
  configurable: true,
  writable: true,
});

console.log('name' in coffee); // true

let keys = Object.keys(coffee);

for (let i = 0; i < keys.length; i++) {
  console.log(`${keys[i]}: ${coffee[keys[i]]}`);
}
// name: Americano

// name 프로퍼티 삭제
delete coffee.name;

console.log('name' in coffee); // false

console.log(coffee.name); // undefined
