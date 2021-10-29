// 7.3 writable 속성

let coffee = {};

Object.defineProperty(coffee, 'name', {
  value: 'Americano',
  enumerable: true,
  configurable: true,
  writable: true,
});

console.log(coffee.name); // Americano

coffee.name = 'Espresso';
console.log(coffee.name); // Espresso

// configurable 속성을 false로 설정
Object.defineProperty(coffee, 'name', {
  writable: false // 속성 값 변경 가능?
});

coffee.name = 'Cappuccino'; // 수정 안됨
console.log(coffee.name); // Espresso
