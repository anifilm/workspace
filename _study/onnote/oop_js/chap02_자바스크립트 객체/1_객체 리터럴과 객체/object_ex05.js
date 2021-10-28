// 1.3.2 객체 생성후 정의

let coffee = {
  name: 'Americano'
};

coffee.getName = function () {
  return this.name;
}

coffee.setName = function (name) {
  this.name = name;
}

coffee.display = function () {
  console.log(this.name);
}

console.log(coffee.getName()); // Americano

coffee.setName('Cappuccino');

console.log(coffee.getName()); // Cappuccino

coffee.display(); // Cappuccino
