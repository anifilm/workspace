// 13.1 특정 객체와 상속관계가 없을 때

function Coffee(name) {
  this.name = name;
}

Coffee.prototype.getName = function () {
  return this.name;
};

if (Coffee.prototype.__proto__ === Object.prototype) {
  console.log('Coffee.prototype.__proto__ equals Object.prototype');
}
else {
  console.log('Coffee.prototype.__proto__ not equals Object.prototype');
}
// Coffee.prototype.__proto__ equals Object.prototype

console.log(Object.prototype.__proto__); // null

var coffee1 = new Coffee('Americano');

console.log(coffee1); // Coffee {name: 'Americano'}
console.log(coffee1.name); // Americano
console.log(coffee1.getName); // Americano

var coffee2 = new Coffee('Cappuccino');

console.log(coffee2); // Coffee {name: 'Cappuccino'}
console.log(coffee2.name); // Cappuccino
console.log(coffee2.getName); // Cappuccino

// coffee1 객체의 고유 프로퍼티에는 toString 메서드가 존재하지 않는다.
for (var property in coffee1) {
  console.log(property + ': ' + coffee1[property]);
}
// name: Americano
// getName: function () {...}

// Object 객체로부터 toString 메서드를 상속받는다.
console.log('toString' in coffee1); // true

// coffee2 객체의 고유 프로퍼티에는 toString 메서드가 존재하지 않는다.
for (var property in coffee2) {
  console.log(property + ': ' + coffee2[property]);
}
// name: Cappuccino
// getName: function () {...}

// Object 객체로부터 toString 메서드를 상속받는다.
console.log('toString' in coffee2); // true
