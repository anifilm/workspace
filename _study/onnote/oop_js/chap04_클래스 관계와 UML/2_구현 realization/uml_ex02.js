function ICoffee() {

}

ICoffee.prototype.getName = function () {
  throw new Error('You have to implement the method doSomething!');
};

ICoffee.prototype.setName = function (name) {
  throw new Error('You have to implement the method doSomething!');
};

ICoffee.prototype.display = function () {
  throw new Error('You have to implement the method doSomething!');
};

function Espresso() {
  this.name = 'Espresso';
}

// ICoffee 생성자를 구현
Espresso.prototype = Object.create(ICoffee.prototype, {
  constructor: {
    value: Espresso,
    enumerable: true,
    configurable: true,
    writable: true,
  }
});

Espresso.prototype.getName = function () {
  return this.name;
};

Espresso.prototype.setName = function (name) {
  this.name = name;
};


Espresso.prototype.display = function () {
  console.log(this.name);
};

var espresso = new Espresso();

console.log(espresso.name); // Espresso
console.log(espresso.getName()); // Espresso

espresso.display(); // Espresso
