// 11.3 생성자로 생성한 인스턴스와 프로토타입

function Coffee() {
  this.name = 'Americano';
}

// 생성자로 생성한 인스턴스
var coffee = new Coffee();

console.log(coffee); // Coffee {name: 'Americano'}
console.log(coffee.name); // Americano

// 객체에는 prototype 프로퍼티가 정의되어 있지 않다.
console.log(coffee.prototype); // undefined

console.log(coffee.__proto__); // {constructor: ƒ}

if (coffee.__proto__ === Coffee.prototype) {
  console.log('coffee.__proto__ equals Coffee.prototype');
}
// coffee.__proto__ equals Coffee.prototype

if (coffee.__proto__ === Object.prototype) {
  console.log('coffee.__proto__ equals Object.prototype');
}
else {
  console.log('coffee.__proto__ not equals Object.prototype');
}
// coffee.__proto__ not equals Object.prototype

for (var property in coffee) {
  console.log(property + ': ' + coffee[property]);
}
// name: Americano

console.log('toString' in coffee); // true
