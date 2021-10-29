// 3.2 모듈 노출

let coffee = (function () {
  let price = 3000;

  function getPrice() {
    return price;
  }

  function raisePrice() {
    price += 100;
  }

  return {
    name: 'Americano',
    getPrice: getPrice,
    raisePrice: raisePrice,
  }
}());

console.log(coffee.name); // Americano
console.log(coffee.getPrice()); // 3000

coffee.price = 4000; // 지역변수에 직접 접근 불가 (값 수정 안됨)
console.log(coffee.getPrice()); // 3000

console.log(coffee); // {name: 'Americano', price: 4000, getPrice: ƒ, raisePrice: ƒ}
console.log(coffee.price); // 4000

coffee.raisePrice();
console.log(coffee.getPrice()); // 3100
