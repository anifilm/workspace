// 17.1 메서드 오버라이딩 전

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

// 상위 생성자 메서드
Coffee.prototype.toString = function () {
  return 'Coffee';
}

var coffee = new Coffee();

console.log(coffee.name); // Coffee
console.log(coffee.getName()); // Coffee

coffee.display(); // Coffee

function Espresso() {
  Coffee.call(this);
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

espresso.setName('Espresso');

console.log(espresso.name); // Espresso
console.log(espresso.getName()); // Espresso

espresso.display(); // Espresso

// 상위 생성자 메서드 그대로 호출
console.log(espresso.toString()); // Coffee
