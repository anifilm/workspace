// 13.2 메서드 재정의

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
    throw new Error('You have to implement the method doSomething!');
  }
}

const coffee = new Coffee();

console.log(coffee.name); // Coffee
console.log(coffee.getName()); // Coffee

coffee.display(); // Coffee

// 클래스 확장
class Espresso extends Coffee {
  constructor() {
    super();
  }

  // 메서드 재정의
  toString() {
    return 'Espresso';
  }
}

const espresso = new Espresso();

espresso.setName('Espresso');

console.log(espresso.name); // Espresso
console.log(espresso.getName()); // Espresso

espresso.display(); // Espresso

// 하위 클래스에서 메서드를 재정의하여 제대로 메시지 표시
console.log(espresso.toString()); // Espresso
