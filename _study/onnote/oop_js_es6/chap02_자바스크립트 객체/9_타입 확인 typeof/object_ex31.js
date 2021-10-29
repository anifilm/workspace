// 9. 타입 확인 (typeof)

let name = 'Cappuccino';
let price = 3000;
let ratio = 0.5;
let isNew = false;

let val;
let nullVal = null;

let obj = {};

let add = function (a, b) {
  return a + b;
};

function Coffee() {
  this.name = 'Americano';
  this.price = 3000;
}

let coffee = new Coffee();

console.log(name);        // Cappuccino
console.log(typeof name); // string

console.log(price);        // 3000
console.log(typeof price); // number

console.log(ratio);        // 0.5
console.log(typeof ratio); // number

console.log(isNew);        // false
console.log(typeof isNew); // boolean

console.log(val);        // undefined
console.log(typeof val); // undefined

console.log(nullVal);        // null
console.log(typeof nullVal); // object

console.log(obj);        // {}
console.log(typeof obj); // object

console.log(add(100, 20)); // 120
console.log(typeof add);   // function

console.log(typeof Coffee); // function

console.log(typeof coffee); // object
