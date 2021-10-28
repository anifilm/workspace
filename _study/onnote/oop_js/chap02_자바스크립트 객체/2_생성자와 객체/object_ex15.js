// 2.3.1 객체 메서드 정의

function Coffee() {
  this.name = 'Americano';

  this.getName = function () {
    return this.name;
  };

  this.setName = function (name) {
    this.name = name;
  };

  this.display = function () {
    console.log(this.name);
  }
}

var coffee = new Coffee();

console.log(coffee.name); // Americano

console.log(coffee.getName()); // Americano

coffee.display(); // Americano
