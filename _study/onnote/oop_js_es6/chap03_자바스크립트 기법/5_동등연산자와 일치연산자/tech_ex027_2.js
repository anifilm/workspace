// 5.7 undefined

// 5.7.2 일치연산자(===)

let undefinedVal = undefined;

if (undefinedVal) {
  console.log('true');
}
else {
  console.log('false');
}
// false

if (undefinedVal === undefined) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

if (undefinedVal === 'undefined') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (undefinedVal === false) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (undefinedVal === 'false') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (undefinedVal === 0) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (undefinedVal === true) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

// 암묵적 타입캐스팅 발생하지 않는다.
if (undefinedVal === null) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal
