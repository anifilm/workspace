class Espresso {
  constructor() {
    this.name = 'Espresso';
  }

  display() {
    console.log(this.name);
  }
}

class Barista {
  constructor() {
    // Coffee 객체 프로퍼티로 정의
    this.espressoMachine = null;
  }

  setEspressoMachine(espressoMachine) {
    this.espressoMachine = espressoMachine;
  }

  makeEspresso() {
    let espresso = this.espressoMachine.makeEspresso();

    return espresso;
  }
}

class EspressoMachine {
  constructor() {
    this.price = 300000;
  }

  makeEspresso() {
    return new Espresso();
  }
}

let barista = new Barista();

let espressoMachine = new EspressoMachine();

barista.setEspressoMachine(espressoMachine);

let espresso = barista.makeEspresso();

espresso.display(); // Espresso
