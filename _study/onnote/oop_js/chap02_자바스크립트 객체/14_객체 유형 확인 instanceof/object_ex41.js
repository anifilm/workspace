// 14.1 특정 객체와 상속관계가 없을 때

function Coffee() {
  this.name = 'Americano';
  this.price = 3000;
}

var coffee = new Coffee();

console.log(coffee instanceof Coffee); // true
console.log(coffee instanceof Object); // true
console.log(coffee instanceof Number); // false
