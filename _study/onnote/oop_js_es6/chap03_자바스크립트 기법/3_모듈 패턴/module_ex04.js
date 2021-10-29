// 3.4 생성자 생성

let Coffee = (function () {
  // 프로토타입에 추가한 프로퍼티처럼 모든 인스턴스가 공유하는 비공개 데이터
  let price = 3000;

  function Coffee(name) {
    this.name = name;
  }

  Coffee.prototype.getPrice = function () {
    return price;
  }

  Coffee.prototype.raisePrice = function () {
    price += 100;
  }

  return Coffee;
}());

let coffee = new Coffee('Americano');
let espresso = new Coffee('Espresso');

console.log(coffee.name); // Americano
console.log(coffee.getPrice()); // 3000

console.log(espresso.name); // Espresso
console.log(espresso.getPrice()); // 3000

coffee.raisePrice();
console.log(coffee.getPrice()); // 3100
console.log(espresso.getPrice()); // 3100
