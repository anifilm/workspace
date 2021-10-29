// 13.2 메서드 오버라이딩

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

  // 상위 클래스 메서드 오버라이딩
  toString() {
    return 'Espresso';
  }
}

let espresso = new Espresso();

espresso.setName('Espresso');

console.log(espresso.name); // Espresso
console.log(espresso.getName()); // Espresso

espresso.display(); // Espresso

// 오버라이딩 된 메서드 호출
console.log(espresso.toString()); // Espresso
