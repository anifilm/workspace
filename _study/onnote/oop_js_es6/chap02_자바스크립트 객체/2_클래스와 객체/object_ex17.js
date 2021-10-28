// 2.4.1 정적 프로퍼티 정의

class Coffee {
  constructor() {
    this.name = 'Americano';
  }

  getName() {
    return this.name;
  }

  setName(name) {
    this.name = name;
  }

  display() {
    console.log(this.name);
  }
}

Coffee.salesQuantity = 20;

let coffee = new Coffee();

console.log(coffee.name); // Americano

console.log(coffee.getName()); // Americano

coffee.display(); // Americano

console.log(Coffee.salesQuantity);
