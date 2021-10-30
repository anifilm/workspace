// 4.2 객체

/*
4.2.1 참
- 객체 자체값
- 객체 프로퍼티값 중에 true로 평가되는 값

4.2.2 거짓
- 객체에 정의되지 않은 프로퍼티 (undefined)
- 객체 프로퍼티값 중에 false로 평가되는 값
*/

let emptyObj = {};

let add = function (a, b) {
  return a + b;
}

function Coffee() {
  this.name = 'Americano';
  this.price = 3000;
}

Coffee.prototype.getName = function () {
  return this.name;
};

let coffee = new Coffee();

console.log('variableName: emptyObj');
console.log(emptyObj); // {}

if (emptyObj) {
  console.log('true');
}
else {
  console.log('false');
}
// true

console.log('variableName: add');
console.log(add); // function (a, b) {...}

if (add) {
  console.log('true');
}
else {
  console.log('false');
}
// true

console.log('variableName: Coffee');
console.log(Coffee); // function Coffee() {...}

if (Coffee) {
  console.log('true');
}
else {
  console.log('false');
}
// true

console.log('variableName: coffee');
console.log(coffee); // Coffee {name: 'Americano', price: 3000}

if (coffee) {
  console.log('true');
}
else {
  console.log('false');
}
// true

console.log('variableName: coffee.name');
console.log(coffee.name); // Americano

if (coffee.name) {
  console.log('true');
}
else {
  console.log('false');
}
// true

console.log('variableName: coffee.price');
console.log(coffee.price); // 3000

if (coffee.price) {
  console.log('true');
}
else {
  console.log('false');
}
// true

console.log('variableName: coffee.getName');
console.log(coffee.getName); // function getName() {...}
console.log(coffee.getName()); // Americano

if (coffee.getName) {
  console.log('true');
}
else {
  console.log('false');
}
// true

console.log('variableName: coffee.toString');
console.log(coffee.toString); // function toString() {...}
console.log(coffee.toString()); // [emptyObject Object]

if (coffee.toString) {
  console.log('true');
}
else {
  console.log('false');
}
// true

console.log('variableName: coffee.name2');
console.log(coffee.name2); // undefined

if (coffee.name2) {
  console.log('true');
}
else {
  console.log('false');
}
// false

console.log('variableName: coffee.getName2');
console.log(coffee.getName2); // undefined

if (coffee.getName2) {
  console.log('true');
}
else {
  console.log('false');
}
// false

console.log('name' in coffee);    // true
console.log('price' in coffee);   // true
console.log('getName' in coffee); // true
console.log('name2' in coffee);   // false

// coffee 객체의 고유 프로퍼티인지를 확인
console.log(coffee.hasOwnProperty('price')); // true

// coffee 객체의 고유 프로퍼티인지를 확인
console.log(coffee.hasOwnProperty('getName')); // false

// coffee toString은 부모(Object)로부터 상속된 프로퍼티이다.
console.log('toString' in coffee); // true

// toString은 coffee 객체의 고유 프로퍼티가 아니다.
console.log(coffee.hasOwnProperty('toString')); // false
