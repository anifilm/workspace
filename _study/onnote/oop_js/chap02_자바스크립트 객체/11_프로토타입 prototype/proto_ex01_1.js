// 11.1 객체 리터럴과 프로토타입

var coffee = {
  name: 'Americano',
};

console.log(coffee); // {name: 'Americano'}
console.log(coffee.name); // Americano
console.log(coffee.prototype); // undefined

// __proto__ 프로퍼티는 그 객체를 상속해 준 부모 객체를 기리킨다.
if (coffee.__proto__ === Object.prototype) {
  console.log('coffee.__proto__ equals Object.prototype');
}
// coffee.__proto__ equals Object.prototype

for (var property in coffee) {
  console.log(property + ': ' + coffee[property]);
}
// name: Americano

console.log('toString' in coffee); // true
