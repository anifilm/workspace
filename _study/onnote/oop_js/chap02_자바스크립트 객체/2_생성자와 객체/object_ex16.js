// 2.3.2 프로토타입 메서드 정의

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

var coffee = new Coffee();

console.log(coffee.name); // Americano

console.log(coffee.getName()); // Americano

coffee.display(); // Americano
