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
  // Coffee 객체 내부에서 프로퍼티값 생성
  this.espresso = new Espresso();
  this.milk = new Milk();
}

CafeLatte.prototype.display = function () {
  console.log(this.name + ' (' + this.espresso + ' + ' + this.milk + ')');
};

var cafeLatte = new CafeLatte();

cafeLatte.display(); // CafeLatte (Espresso + Milk)
