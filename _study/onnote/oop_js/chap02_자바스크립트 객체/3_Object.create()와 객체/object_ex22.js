// 3.2 프로퍼치 정의

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
});

console.log(coffee.name);  // Americano
console.log(coffee.price); // 3000
