// 7.2 configurable 속성

let coffee = {};

Object.defineProperty(coffee, 'name', {
  value: 'Americano',
  enumerable: true,
  writable: true,
  configurable: true,
});

console.log(coffee.name); // Americano

coffee.name = 'Espresso';
console.log(coffee.name); // Espresso

// configurable 속성을 false로 설정
Object.defineProperty(coffee, 'name', {
  configurable: false // 속성 값 변경 및 삭제 가능?
});

coffee.name = 'Cappuccino'; // 값 변경 안됨
console.log(coffee.name); // Espresso

delete coffee.name; // 삭제 안됨
console.log('name' in coffee); // true

console.log(coffee.name); // Espresso

Object.defineProperty(coffee, 'name', {
  configurable: true // 한번 false로 설정되면 true로 변경 불가
});
// TypeError: Cannot redefine property: name
