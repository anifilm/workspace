// 4.1 원시 타입

/*
4.1.1 참
- string: 빈 문자열을 제외한 문자열
- number: 0을 제외한 숫자값
- boolean: true 값

4.1.2 거짓
- string: 빈 문자열
- number: 0 숫자값
- boolean: false 값
- null
- undefined
*/

let name = 'Cappuccino';
let zeroName = '0';
let emptyName = '';
let spaceName = ' ';
let trueName = 'true';
let falseName = 'false';
let price = 3000;
let zeroPrice = 0;
let ratio = 0.5;
let isNew = false;

let val;
let undefinedVal = undefined;
let nullVal = null;

console.log('variableName: name');
console.log(name); // Cappuccino

if (name) {
  console.log('true');
}
else {
  console.log('false');
}
// true

console.log('variableName: zeroName');
console.log(zeroName); // Cappuccino

if (zeroName) {
  console.log('true');
}
else {
  console.log('false');
}
// true

console.log('variableName: emptyName');
console.log(emptyName); // ''

if (emptyName) {
  console.log('true');
}
else {
  console.log('false');
}
// false

console.log('variableName: spaceName');
console.log(spaceName); // ' '

if (spaceName) {
  console.log('true');
}
else {
  console.log('false');
}
// true

console.log('variableName: trueName');
console.log(trueName); // 'true'

if (trueName) {
  console.log('true');
}
else {
  console.log('false');
}
// true

console.log('variableName: falseName');
console.log(falseName); // 'false'

if (falseName) {
  console.log('true');
}
else {
  console.log('false');
}
// true

console.log('variableName: price');
console.log(price); // 3000

if (price) {
  console.log('true');
}
else {
  console.log('false');
}
// true

console.log('variableName: zeroPrice');
console.log(zeroPrice); // 0

if (zeroPrice) {
  console.log('true');
}
else {
  console.log('false');
}
// false

console.log('variableName: ratio');
console.log(ratio); // 0.5

if (ratio) {
  console.log('true');
}
else {
  console.log('false');
}
// true

console.log('variableName: isNew');
console.log(isNew); // false

if (isNew) {
  console.log('true');
}
else {
  console.log('false');
}
// false

console.log('variableName: val');
console.log(val); // undefined

if (val) {
  console.log('true');
}
else {
  console.log('false');
}
// false

console.log('variableName: undefinedVal');
console.log(undefinedVal); // undefined

if (undefinedVal) {
  console.log('true');
}
else {
  console.log('false');
}
// false

console.log('variableName: nullVal');
console.log(nullVal); // null

if (nullVal) {
  console.log('true');
}
else {
  console.log('false');
}
// false
