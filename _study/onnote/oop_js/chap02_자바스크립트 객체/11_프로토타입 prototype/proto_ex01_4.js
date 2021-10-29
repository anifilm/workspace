// 11.4 Object.create()로 생성한 인스턴스와 프로토타입

var coffee = Object.create(Object.prototype, {
  name: {
    value: 'Americano',
    enumerable: true,
    configurable: true,
    writable: true,
  },
});

console.log(coffee); // {name: 'Americano'}
console.log(coffee.name); // Americano
console.log(coffee.prototype); // undefined

if (coffee.__proto__ === Object.prototype) {
  console.log('coffee.__proto__ equals Object.prototype');
}
else {
  console.log('coffee.__proto__ not equals Object.prototype');
}
// coffee.__proto__ equals Object.prototype

for (var property in coffee) {
  console.log(property + ': ' + coffee[property]);
}
// name: Americano

console.log('toString' in coffee); // true
