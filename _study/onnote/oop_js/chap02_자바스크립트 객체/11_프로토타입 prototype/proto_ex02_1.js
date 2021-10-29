// 11.5 객체 메서드와 프로토타입

function Coffee(name) {
  this.name = name;

  // 생성자 객체 메서드 정의
  this.getName = function () {
    return this.name;
  };
}

console.log(Coffee.prototype); // {constructor: ƒ}

console.log(typeof Coffee.prototype); // object

var coffee1 = new Coffee('Americano');

console.log(coffee1); // Coffee {name: 'Americano', getName: ƒ}
console.log(coffee1.name); // Americano
console.log(coffee1.getName()); // Americano

if (coffee1.__proto__ === Coffee.prototype) {
  console.log('coffee1.__proto__ equals Coffee.prototype');
}
else {
  console.log('coffee1.__proto__ not equals Coffee.prototype');
}
// coffee1.__proto__ equals Coffee.prototype

var coffee2 = new Coffee('Cappuccino');

console.log(coffee2); // Coffee {name: 'Cappuccino', getName: ƒ}
console.log(coffee2.name); // Cappuccino
console.log(coffee2.getName()); // Cappuccino

if (coffee2.__proto__ === Coffee.prototype) {
  console.log('coffee2.__proto__ equals Coffee.prototype');
}
else {
  console.log('coffee2.__proto__ not equals Coffee.prototype');
}
// coffee2.__proto__ equals Coffee.prototype
