// 12.2 클래스 표현식

const Coffee = class {
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
