// 12. 컨스트럭터 (constructor)

function Coffee(name) {
  this.name = name;
}

Coffee.prototype.getName = function () {
  return this.name;
};

// constructor 프로퍼티는 함수 객체의 참조값을 가지고 있다.
console.log(Coffee.prototype.constructor); // ƒ Coffee(name) {...}

console.log(typeof Coffee.prototype.constructor); // function

// constructor 프로퍼티가 함수 객체의 참조값인지 확인
if (Coffee.prototype.constructor === Coffee) {
  console.log('Coffee.prototype.constructor equals Coffee');
}
else {
  console.log('Coffee.prototype.constructor not equals Coffee');
}
// Coffee.prototype.constructor equals Coffee

var coffee1 = new Coffee('Americano');

console.log(coffee1); // Coffee {name: 'Americano'}
console.log(coffee1.name); // Americano
console.log(coffee1.getName); // Americano

if (coffee1.__proto__ === Coffee.prototype) {
  console.log('coffee1.__proto__ equals Coffee.prototype');
}
else {
  console.log('coffee1.__proto__ not equals Coffee.prototype');
}
// coffee1.__proto__ equals Coffee.prototype

var coffee2 = new Coffee('Cappuccino');

console.log(coffee2); // Coffee {name: 'Cappuccino'}
console.log(coffee2.name); // Cappuccino
console.log(coffee2.getName); // Cappuccino

if (coffee2.__proto__ === Coffee.prototype) {
  console.log('coffee2.__proto__ equals Coffee.prototype');
}
else {
  console.log('coffee2.__proto__ not equals Coffee.prototype');
}
// coffee2.__proto__ equals Coffee.prototype
