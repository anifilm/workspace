// 2.4.1 정적 프로퍼티 정의

function Coffee() {
  this.name = 'Americano';
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

Coffee.salesQuantity = 20;

var coffee = new Coffee();

console.log(coffee.name); // Americano

console.log(coffee.getName()); // Americano

coffee.display(); // Americano

console.log(Coffee.salesQuantity); // 20
