// 13.2 특정 객체와 상속관계가 있을 때

function Coffee() {
  this.name = 'Coffee';
}

Coffee.prototype.getName = function () {
  return this.name;
};

Coffee.prototype.setName = function (name) {
  this.name = name;
};

Coffee.prototype.display = function () {
  console.log(this.name);
}

var coffee = new Coffee();

console.log(coffee.name); // Coffee
console.log(coffee.getName()); // Coffee

coffee.display(); // Coffee

// coffee 객체의 고유 프로퍼티와 프로토타입 프로퍼티 중에 열거 가능한 모든 프로퍼티를 열거한다.
for (var property in coffee) {
  console.log(property + ': ' + coffee[property]);
}
// name: Coffee
// getName: function () {...}
// setName: function () {...}
// display: function () {...}

// coffee 객체의 열거 가능한 고유 프로퍼티를 열거한다.
for (var property in coffee) {
  if (coffee.hasOwnProperty(property)) {
    console.log(property + ': ' + coffee[property]);
  }
}
// name: Coffee

// Object 객체로부터 toString 메서드를 상속받는다.
console.log('toString' in coffee); // true

// Object의 toString 메서드를 호출
console.log(coffee.toString()); // [object Object]

function Espresso() {
  this.name = 'Espresso';
}

Espresso.prototype = Object.create(Coffee.prototype, {
  constructor: {
    value: Espresso,
    enumerable: true,
    configurable: true,
    writable: true,
  }
});

Espresso.prototype.toString = function () {
  return 'Espresso';
};

var espresso = new Espresso();

console.log(espresso.name); // Espresso
console.log(espresso.getName()); // Espresso

if (Espresso.prototype.__proto__ === Coffee.prototype) {
  console.log('Espress.prototype.__proto__ equals Coffee.prototype');
}
else {
  console.log('Espress.prototype.__proto__ not equals Coffee.prototype');
}
// Espress.prototype.__proto__ equals Coffee.prototype

// constructor 프로퍼티가 함수 객체의 참조값이지 확인
if (Espresso.prototype.constructor === Espresso) {
  console.log('Espresso.prototype.constructor equals Espress');
}
else {
  console.log('Espresso.prototype.constructor not equals Espress');
}
// Espresso.prototype.constructor equals Espress

if (espresso.__proto__ === Espresso.prototype) {
  console.log('espresso.__proto__ equals Espress.prototype');
}
else {
  console.log('espresso.__proto__ not equals Espress.prototype');
}
// espresso.__proto__ equals Espress.prototype

if (Espresso.__proto__ === Function.prototype) {
  console.log('Espresso.__proto__ equals Function.prototype');
}
else {
  console.log('Espresso.__proto__ not equals Function.prototype');
}
// Espresso.__proto__ equals Function.prototype

// espress 객체의 열거 가능한 고유 프로퍼티를 열거한다.
for (var property in espresso) {
  if (espresso.hasOwnProperty(property)) {
    console.log(property + ': ' + espresso[property]);
  }
}
// name: Espresso

// Coffee 객체로부터 display 메서드를 상속받는다.
console.log('display' in espresso); // true

// Object 객체로부터 toString 메서드를 상속받는다.
console.log('toString' in espresso); // true

espresso.display(); // Espresso

// Espresso의 프로토타입 객체에서 재정의한 toString 메서드를 호출한다.
console.log(espresso.toString()); // Espresso
