// 19 상위 생성자 메서드 호출

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

Coffee.prototype.toString = function () {
  return 'Coffee';
};

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

// 상위 생성자 메서드 직접 호출
Espresso.prototype.toString = function () {
  var name = Coffee.prototype.toString.call(this);
  return 'Espresso inherited ' + name;
};

var espresso = new Espresso();

espresso.setName('Espresso');

console.log(espresso.name); // Espresso
console.log(espresso.getName()); // Espresso

espresso.display(); // Espresso

// 상위 클래스 메서드 호출 결과와 합쳐진 메시지 표시
console.log(espresso.toString()); // Espresso inherited Coffee
