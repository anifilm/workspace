// 2.2.1 객체 생성시 정의

function Coffee {
  this.name = 'Americano';
  this.price = 3000;
}

var coffee = new Coffee();

console.log(coffee.name);  // Americano
console.log(coffee.price); // 3000
