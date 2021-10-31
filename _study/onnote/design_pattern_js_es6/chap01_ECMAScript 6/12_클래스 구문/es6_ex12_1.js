// 12.1 클래스 선언문

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

const coffee = new Coffee();

console.log(coffee.name); // Americano
console.log(coffee.getName()); // Americano

coffee.display(); // Americano
