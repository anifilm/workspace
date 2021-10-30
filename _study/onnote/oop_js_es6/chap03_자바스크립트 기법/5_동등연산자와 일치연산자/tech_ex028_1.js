// 5.8 null

// 5.8.1 동등연산자(==)

let nullVal = null;

if (nullVal) {
  console.log('true');
}
else {
  console.log('false');
}
// false

if (nullVal == null) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

// 암묵적 타입캐스팅 발생
if (nullVal == undefined) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

if (nullVal == 'undefined') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (nullVal == false) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (nullVal == 'false') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (nullVal == 0) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (nullVal == true) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal
