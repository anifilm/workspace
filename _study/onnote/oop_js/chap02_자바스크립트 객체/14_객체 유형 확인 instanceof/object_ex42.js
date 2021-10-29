// 10.2 특정 객체와 상속관계가 있을 때

class Coffee {
  constructor() {
    this.name = 'Coffee';
  }
}

let coffee = new Coffee();

console.log(coffee instanceof Coffee); // true

console.log(coffee instanceof Object); // true

console.log(coffee instanceof Number); // false

class Espresso extends Coffee {
  constructor() {
    super();

    this.name = 'Espresso';
  }
}

let espresso = new Espresso();

console.log(espresso instanceof Espresso); // true

console.log(espresso.constructor === Espresso); // true

console.log(espresso instanceof Coffee); // true

console.log(espresso.constructor === Coffee); // false

console.log(espresso instanceof Object); // true

console.log(espresso.constructor === Object); // false

console.log(espresso instanceof Number); // false

console.log(espresso.constructor === Number); // false

// espresso가 Espresso 객체인지 여부
if (espresso instanceof Espresso && espresso.constructor === Espresso) {
  console.log('espresso는 Espresso 객체');
}
// espresso는 Espresso 객체
