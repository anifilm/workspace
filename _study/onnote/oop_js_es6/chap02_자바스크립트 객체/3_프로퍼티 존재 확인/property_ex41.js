// 3. 프로퍼티 존재 확인

let coffee = {
  name: 'Americano',
  price: 3000,
};

console.log('name' in coffee); // true
console.log('price' in coffee); // true
console.log('caffeine' in coffee); // false

// coffee 객체의 고유 프로퍼티인가?
console.log(coffee.hasOwnProperty('price')); // true

// coffee toString은 부모(Object)로 부터 상속된 프로퍼티인가?
console.log('toString' in coffee); // true

// coffee 객체의 고유 프로퍼티인가?
console.log(coffee.hasOwnProperty('toString')); // false
