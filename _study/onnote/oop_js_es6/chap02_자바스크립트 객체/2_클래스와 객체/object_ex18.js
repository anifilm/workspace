// 2.4.2 정적 메서드 정의

class Coffee {
  constructor() {
    this.name = 'Americano';
  }

  getName() {
    return this.name;
  }

  setName(name) {
    this.name = name;
  }

  display() {
    console.log(this.name);
  }

  static getCaffeineRecommendedAmount(isAdult, weight) {
    if (isAdult) {
      return 400;
    }
    else {
      return parseInt(2.5 * weight, 10);
    }
  }
}

Coffee.salesQuantity = 20;

let coffee = new Coffee();

console.log(coffee.name); // Americano

console.log(coffee.getName()); // Americano

coffee.display(); // Americano

console.log(Coffee.salesQuantity);

console.log(Coffee.getCaffeineRecommendedAmount(true));

console.log(Coffee.getCaffeineRecommendedAmount(false, 50));
