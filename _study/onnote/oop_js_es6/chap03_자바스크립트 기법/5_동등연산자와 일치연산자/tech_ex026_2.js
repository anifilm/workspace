// 5.6 false Boolean

// 5.6.2 일치연산자(===)

let isNew = false;

if (isNew) {
  console.log('true');
}
else {
  console.log('false');
}
// false

if (isNew == false) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

// 암묵적 타입캐스팅 발생하지 않는다.
if (isNew == 'false') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

// 암묵적 타입캐스팅 발생하지 않는다.
if (isNew == 0) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

// 암묵적 타입캐스팅 발생하지 않는다.
if (isNew == '0') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (isNew == true) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (isNew == null) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (isNew == undefined) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal
