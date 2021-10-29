// 18.1 추상 메서드 정의

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

// 하위 생성제엇 메서드를 재정의하지 않으면 에러 발생
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

var espresso = new Espresso();

espresso.setName('Espresso');

console.log(espresso.name); // Espresso
console.log(espresso.getName()); // Espresso

espresso.display(); // Espresso

// 하위 생성자에서 메서드를 재정의 하지 않으면 에러 발생
console.log(espresso.toString()); // Error: You have to implement the method doSomething!
