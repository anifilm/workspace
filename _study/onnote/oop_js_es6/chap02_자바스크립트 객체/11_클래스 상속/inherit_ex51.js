// 11. 클래스 상속

class Coffee {
  constructor() {
    this.name = 'Coffee';
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

let coffee = new Coffee();

console.log(coffee.name); // Coffee
console.log(coffee.getName()); // Coffee

coffee.display(); // Coffee

// Coffee 클래스를 상속
class Espresso extends Coffee {
  constructor() {
    super();
    this.name = 'Espresso';
  }
}

let espresso = new Espresso();

console.log(espresso.name); // Espresso
console.log(espresso.getName()); // Espresso

espresso.display(); // Espresso
