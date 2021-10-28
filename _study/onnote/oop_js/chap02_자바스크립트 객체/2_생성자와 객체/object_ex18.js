// 2.4.2 정적 메서드 정의

function Coffee() {
  this.name = 'Americano';
}

Coffee.prototype.getName = function () {
  return this.name;
};

Coffee.prototype.setName = function (name) {
  this.name = name;
};

Coffee.prototype.display = function () {
  console.log(this.name);
}

Coffee.salesQuantity = 20;

Coffee.getCaffeineRecommendedAmount = function (isAdult, weight) {
  if (isAdult) {
    return 400;
  }
  else {
    return parseInt(2.5 * weight, 10);
  }
}

var coffee = new Coffee();

console.log(coffee.name); // Americano

console.log(coffee.getName()); // Americano

coffee.display(); // Americano

console.log(Coffee.salesQuantity); // 20

console.log(Coffee.getCaffeineRecommendedAmount(true)); // 400

console.log(Coffee.getCaffeineRecommendedAmount(false, 50)); // 125
