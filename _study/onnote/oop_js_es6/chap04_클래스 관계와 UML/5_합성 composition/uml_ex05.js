class Espresso {
  constructor() {
    this.name = 'Espresso';
  }

  toString() {
    return 'Espresso';
  }
}

class Milk {
  constructor() {
    this.name = 'Milk';
  }

  toString() {
    return 'Milk';
  }
}

class CafeLatte {
  constructor() {
    this.name = 'CafeLatte';

    // Coffee 객체 프로퍼티로 정의
    // Coffee 객체 내부에서 프로퍼티값 생성
    this.espresso = new Espresso();
    this.milk = new Milk();
  }

  display() {
    console.log(`${this.name} (${this.espresso} + ${this.milk})`);
  }
}

let cafeLatte = new CafeLatte();

cafeLatte.display(); // CafeLatte (Espresso + Milk)
