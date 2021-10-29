// 18.2 추상 메서드 구현

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
  throw new Error('You have to implement the method doSomething!');
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

// 메서드 재정의
Espresso.prototype.toString = function () {
  return 'Espresso';
};

var espresso = new Espresso();

espresso.setName('Espresso');

console.log(espresso.name); // Espresso
console.log(espresso.getName()); // Espresso

espresso.display(); // Espresso

// 하위 클래스에서 메서드를 재정의
console.log(espresso.toString()); // Espresso
