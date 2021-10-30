// 5.5 0 숫자

// 5.5.1 동등연산자(==)

let zeroPrice = 0;

if (zeroPrice) {
  console.log('true');
}
else {
  console.log('false');
}
// false

if (zeroPrice == 0) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

// 암묵적 타입캐스팅 발생
if (zeroPrice == '0') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

if (zeroPrice == true) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

// 암묵적 타입캐스팅 발생
if (zeroPrice == false) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

if (zeroPrice == null) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (zeroPrice == undefined) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal
