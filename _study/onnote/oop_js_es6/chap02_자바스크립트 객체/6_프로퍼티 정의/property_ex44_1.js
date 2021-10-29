// 6.1 객체 리터럴로 정의

let coffee = {
  name: 'Americano'
};

/* 다음의 기본값을 가진다.
  enumerable: true,  -> 열거 가능?
  configurable: true, -> 속성 값 변경 및 삭제 가능?
  writable: true,    -> 속성 값 변경 가능?
*/

console.log('name' in coffee); // true

// enumerable: true
console.log(coffee.propertyIsEnumerable('name')); // true

// configurable: true
delete coffee.name;
console.log('name' in coffee); // false

// writable: true
coffee.name = 'Cappuccino';
console.log(coffee.name); // Cappuccino
