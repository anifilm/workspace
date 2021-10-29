// 13.1 메서드 오버라이딩 전

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

  // 상위 클래스 메서드
  toString() {
    return 'Coffee';
  }
}

let coffee = new Coffee();

console.log(coffee.name); // Coffee
console.log(coffee.getName()); // Coffee

coffee.display(); // Coffee

class Espresso extends Coffee {
  constructor() {
    super();
  }
}

let espresso = new Espresso();

espresso.setName('Espresso');

console.log(espresso.name); // Espresso
console.log(espresso.getName()); // Espresso

espresso.display(); // Espresso

// 상위 클래스 메서드 그대로 호출
console.log(espresso.toString()); // Coffee
