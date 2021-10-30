class CoffeeBeans {
  constructor() {
    this.countryOfOrigin = 'Colombia';
  }

  toString() {
    return `CoffeeBeans [${this.countryOfOrigin}]`;
  }
}

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
    this.espresso = null;
    this.milk = null;
  }

  setEspresso(espresso) {
    this.espresso = espresso;
  }

  setMilk(milk) {
    this.milk = milk;
  }

  display() {
    console.log(`${this.name} (${this.espresso} + ${this.milk})`);
  }
}

class Barista {
  constructor() {
    this.espressoMachine = null;
  }

  setEspressoMachine(espressoMachine) {
    this.espressoMachine = espressoMachine;
  }
  // Coffee 반환값에 의존
  makeEspresso() {
    let coffeeBeans = new CoffeeBeans();
    let espresso = this.espressoMachine.makeEspresso(coffeeBeans);

    return espresso;
  }
  // Coffee 지역변수값(Milk)에 의존
  makeCafeLatte() {
    let coffeeBeans = new CoffeeBeans();

    let espresso = this.espressoMachine.makeEspresso(coffeeBeans);
    let milk = new Milk();

    let cafeLatte = new CafeLatte();

    cafeLatte.setEspresso(espresso);
    cafeLatte.setMilk(milk);

    return cafeLatte;
  }
}

class EspressoMachine {
  constructor() {
    this.price = 300000;
  }
  // Coffee 함수인자값에 의존
  makeEspresso(coffeeBeans) {
    console.log('' + coffeeBeans);

    return new Espresso();
  }
}

let barista = new Barista();

let espressoMachine = new EspressoMachine();

barista.setEspressoMachine(espressoMachine);

let cafeLatte = barista.makeCafeLatte(); // CoffeeBeans [Colombia]

cafeLatte.display(); // CafeLatte (Espresso + Milk)
