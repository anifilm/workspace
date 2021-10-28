// 4.1 for in

let coffee = {
  name: 'Americano',
  price: 3000,
};

let property;

for (property in coffee) {
  console.log(property + ": " + coffee[property]);
}
// name: Americano
// price: 3000
