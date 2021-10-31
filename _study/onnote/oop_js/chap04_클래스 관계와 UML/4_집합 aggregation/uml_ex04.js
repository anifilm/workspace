function CoffeeBeans() {
  this.countryOfOrigin = 'Colombia';
}

CoffeeBeans.prototype.toString = function () {
  return `CoffeeBeans [${this.countryOfOrigin}]`;
};

function Espresso() {
  this.name = 'Espresso';
}

Espresso.prototype.toString = function () {
  return 'Espresso';
};

function Milk() {
  this.name = 'Milk';
}

Milk.prototype.toString = function () {
  return 'Milk';
};

function CafeLatte() {
  this.name = 'CafeLatte';

  // Coffee 객체 프로퍼티로 정의
  this.espresso = null;
  this.milk = null;
}

// Coffee 객체 프로퍼티를 외부에서 설정하는 함수를 제공
CafeLatte.prototype.setEspresso = function (espresso) {
  this.espresso = espresso;
};

CafeLatte.prototype.setMilk = function (milk) {
  this.milk = milk;
};

CafeLatte.prototype.display = function () {
  console.log(this.name + ' (' + this.espresso + ' + ' + this.milk + ')');
};

function Barista() {
  this.espressoMachine = null;
}

Barista.prototype.setEspressoMachine = function (espressoMachine) {
  this.espressoMachine = espressoMachine;
};

Barista.prototype.makeEspresso = function () {
  var coffeeBeans = new CoffeeBeans();
  var espresso = this.espressoMachine.makeEspresso(coffeeBeans);

  return espresso;
};

Barista.prototype.makeCafeLatte = function () {
  var coffeeBeans = new CoffeeBeans();

  var espresso = this.espressoMachine.makeEspresso(coffeeBeans);
  var milk = new Milk();

  var cafeLatte = new CafeLatte();

  cafeLatte.setEspresso(espresso);
  cafeLatte.setMilk(milk);

  return cafeLatte;
};


function EspressoMachine() {
  this.price = 300000;
}

EspressoMachine.prototype.makeEspresso = function (coffeeBeans) {
  console.log('' + coffeeBeans);

  return new Espresso();
};

var barista = new Barista();

var espressoMachine = new EspressoMachine();

barista.setEspressoMachine(espressoMachine);

var cafeLatte = barista.makeCafeLatte(); // CoffeeBeans [Colombia]

cafeLatte.display(); // CafeLatte (Espresso + Milk)
