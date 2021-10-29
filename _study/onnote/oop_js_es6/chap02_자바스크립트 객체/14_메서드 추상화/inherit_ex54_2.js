// 14.2 추상 메서드 구현

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

  // 하위 클래스에서 메서드를 재정의하지 않으면 에러 발생
  toString() {
    throw new Error('You have to implement the method doSomething!');
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

  // 메서드 재정의
  toString() {
    return 'Espresso';
  }
}

let espresso = new Espresso();

espresso.setName('Espresso');

console.log(espresso.name); // Espresso
console.log(espresso.getName()); // Espresso

espresso.display(); // Espresso

// 하위 클래스에서 메서드를 재정의
console.log(espresso.toString()); // Espresso
