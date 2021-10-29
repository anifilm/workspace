// 12.1 생성자 정의한 후 상위 생성자 호출

class Coffee {
  constructor() {
    console.log('Coffee constructor()');
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

class Espresso extends Coffee {
  constructor() {
    super();
    console.log('Espresso contructor()');
  }
}

let espresso = new Espresso();

espresso.setName('Espresso');

console.log(espresso.name); // Espresso
console.log(espresso.getName()); // Espresso

espresso.display(); // Espresso
