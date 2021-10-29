// 3.3 메서드 정의

var coffee = Object.create(Object.prototype, {
  name: {
    value: 'Americano',
    writable: true,
    enumerable: true,
    configurable: true,
  },
  price: {
    value: 3000,
    writable: true,
    enumerable: true,
    configurable: true,
  },
  getName: {
    value: function () {
      return this.name;
    }
  },
  setName: {
    value: function (name) {
      this.name = name;
    }
  },
  display: {
    value: function () {
      console.log(this.name);
    }
  },
});

console.log(coffee.name);  // Americano
console.log(coffee.price); // 3000

console.log(coffee.getName()); // Americano

coffee.setName('Cappuccino');
console.log(coffee.getName()); // Cappuccino

coffee.display(); // Cappuccino
