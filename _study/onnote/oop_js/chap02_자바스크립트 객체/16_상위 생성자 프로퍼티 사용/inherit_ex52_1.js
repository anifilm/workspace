// 16.1 상위 생성자 호출 전

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

function Espresso() {
  // 상위 생성자를 호출하지 않아 상위 프로퍼티를 상속받지 않는다.
}

Espresso.prototype = Object.create(Coffee.prototype, {
  constructor: {
    value: Espresso,
    enumerable: true,
    configuable: true,
    writable: true,
  }
});

var espresso = new Espresso();

console.log(espresso.name); // undefined
console.log(espresso.getName()); // undefined

espresso.display(); // undefined
