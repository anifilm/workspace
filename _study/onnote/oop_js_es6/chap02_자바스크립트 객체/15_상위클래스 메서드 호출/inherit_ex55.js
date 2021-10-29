// 15. 상위 클래스 메서드 호출

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

  toString() {
    // 상위 클래스 메서드 직접 호출
    let name = super.toString();
    return 'Espresso inherited ' + name;
  }
}

let espresso = new Espresso();

espresso.setName('Espresso');

console.log(espresso.name); // Espresso
console.log(espresso.getName()); // Espresso

espresso.display(); // Espresso

// 상위 클래스 메서드 호출 결과와 합쳐진 메시지 표시
console.log(espresso.toString()); // Espresso inherited Coffee
