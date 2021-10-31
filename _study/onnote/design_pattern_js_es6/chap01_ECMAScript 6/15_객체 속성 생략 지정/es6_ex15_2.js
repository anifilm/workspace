// 15.2 객체 속성 생략 지정

const name = 'Americano';
const price = 3000;

const coffee = {
  name: name,
  price: price,
};

console.log(coffee); // {name: 'Americano', price: 3000}

const coffee2 = { name, price };

console.log(coffee2); // {name: 'Americano', price: 3000}
