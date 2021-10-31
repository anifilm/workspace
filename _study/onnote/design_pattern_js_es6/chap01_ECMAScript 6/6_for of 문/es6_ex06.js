// 6.1 배열의 각 요소를 순회한다.

let coffeeNames = ['Americano', 'Cappuccino', 'Espresso'];

for (let name of coffeeNames) {
  console.log(name);
}
// Americano
// Cappuccino
// Espresso


// 6.2 문자열을 이루는 문자 요소를 순회한다.

let str = 'hi!';

for (let ch of str) {
  console.log(ch);
}
// h
// i
// !


// 6.3 for in 문처럼 객체의 프로퍼티를 열거하지 않는다.

let coffee = {
  name: 'Americano',
  getName: function () {
    return this.name;
  },
  setName: function (name) {
    this.name = name;
  },
  display: function () {
    console.log(this.name);
  }
};

for (let prop of coffee) {
  // TypeError: coffee is not iterable
  console.log(prop);
}
