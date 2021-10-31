// 15.1 객체 리터럴

const coffee = {
  name: "Americano",
  price: 3000,
};

console.log(coffee); // {name: 'Americano', price: 3000}
console.log(coffee.name);  // Americano
console.log(coffee.price); // 3000

const coffee2 = {
  "name": "Americano",
  "price": 3000,
};

console.log(coffee2); // {name: 'Americano', price: 3000}
console.log(coffee2.name);  // Americano
console.log(coffee2.price); // 3000

const coffee3 = {
  'name': 'Americano',
  'price': 3000,
};

console.log(coffee3); // {name: 'Americano', price: 3000}
console.log(coffee3.name);  // Americano
console.log(coffee3.price); // 3000

const key1 = 'name';
const key2 = 'price';

const coffee4 = {
  key1: 'Americano',
  key2: 3000,
};

console.log(coffee4); // {key1: 'Americano', key2: 3000}
console.log(coffee4.name);  // undefined
console.log(coffee4.price); // undefined
console.log(coffee4.key1);  // Americano
console.log(coffee4.key2);  // 3000

const coffee5 = {
  [key1]: 'Americano',
  [key2]: 3000,
};

console.log(coffee5); // {name: 'Americano', price: 3000}
console.log(coffee5.name);  // Americano
console.log(coffee5.price); // 3000
console.log(coffee5.key1);  // undefined
console.log(coffee5.key2);  // undefined
