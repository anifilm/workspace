// 4.2 Object.keys() 메서드

let coffee = {
  name: 'Americano',
  price: 3000,
};

let keys = Object.keys(coffee);

console.log(keys); // ['name', 'price']

for (let i = 0; i < keys.length; i++) {
  console.log(keys[i] + ": " + coffee[keys[i]]);
}
// name: Americano
// price: 3000
