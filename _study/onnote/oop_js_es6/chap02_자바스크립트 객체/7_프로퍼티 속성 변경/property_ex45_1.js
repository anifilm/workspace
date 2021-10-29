// 7.1 enumerable 속성

let coffee = {
};

Object.defineProperty(coffee, 'name', {
  value: 'Americano',
  enumerable: true,
  configurable: true,
  writable: true,
});

// enumerable: true
console.log(coffee.propertyIsEnumerable('name')); // true

for (let property in coffee) {
  console.log(`${property}: ${coffee[property]}`);
}
// name: Americano

// enumerable 속성을 false로 설정
Object.defineProperty(coffee, 'name', {
  enumerable: false // 열거 가능?
});

console.log(coffee.propertyIsEnumerable('name')); // false

for (let property in coffee) {
  console.log(`${property}: ${coffee[property]}`);
}
// enumerable: false 설정으로 출력되지 않는다.
