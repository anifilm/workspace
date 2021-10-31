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
};

var coffee = new Coffee();

console.log(coffee.name); // Coffee
console.log(coffee.getName()); // Coffee

coffee.display(); // Coffee

function Espresso() {
  Coffee.call(this);
}

// Coffee 생성자를 상속
Espresso.prototype = Object.create(Coffee.prototype, {
  constructor: {
    value: Espresso,
    enumerable: true,
    configurable: true,
    writable: true,
  }
});

var espresso = new Espresso();

espresso.setName('Espresso');

console.log(espresso.name); // Espresso
console.log(espresso.getName()); // Espresso

espresso.display(); // Espresso
