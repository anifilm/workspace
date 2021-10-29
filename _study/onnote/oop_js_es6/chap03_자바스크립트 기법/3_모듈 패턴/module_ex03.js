// 3.3 생성자 비공개 프로퍼티

function Coffee(name) {
  // Coffee 생성자 안에서만 접근 가능한 변수 선언
  let price = 3000;

  this.name = name;

  this.getPrice = function () {
    return price;
  };

  this.raisePrice = function () {
    price += 100;
  };
}

let coffee = new Coffee('Americano');

console.log(coffee.name); // Americano
console.log(coffee.getPrice()); // 3000

coffee.price = 4000; // 지역변수에 직접 접근 불가 (값 수정 안됨)
console.log(coffee.getPrice()); // 3000

console.log(coffee); // {name: 'Americano', price: 4000, getPrice: ƒ, raisePrice: ƒ}
console.log(coffee.price); // 4000

coffee.raisePrice();
console.log(coffee.getPrice()); // 3100

let espresso = new Coffee('Espresso');

console.log(espresso.name); // Espresso
console.log(espresso.getPrice()); // 3000
