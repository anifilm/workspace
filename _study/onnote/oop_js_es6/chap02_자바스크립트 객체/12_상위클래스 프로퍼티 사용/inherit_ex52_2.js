// 12.2 생성자 미정의

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
  // 생성자를 정의하지 않으면 기본적으로 상위 생성자를 호출한다.
}

let espresso = new Espresso();

espresso.setName('Espresso');

console.log(espresso.name); // Espresso
console.log(espresso.getName()); // Espresso

espresso.display(); // Espresso
