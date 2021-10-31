function Espresso() {
  this.name = 'Espresso';
}

Espresso.prototype.display = function () {
  console.log(this.name);
};

function Barista() {
  // Coffee 객체 프로퍼티로 정의
  this.espressoMachine = null;
}

Barista.prototype.setEspressoMachine = function (espressoMachine) {
  this.espressoMachine = espressoMachine;
};

Barista.prototype.makeEspresso = function () {
  var espresso = this.espressoMachine.makeEspresso();

  return espresso;
};

function EspressoMachine() {
    this.price = 300000;
};

EspressoMachine.prototype.makeEspresso = function () {
  return new Espresso();
};

var barista = new Barista();

var espressoMachine = new EspressoMachine();

barista.setEspressoMachine(espressoMachine);

var espresso = barista.makeEspresso();

espresso.display(); // Espresso
