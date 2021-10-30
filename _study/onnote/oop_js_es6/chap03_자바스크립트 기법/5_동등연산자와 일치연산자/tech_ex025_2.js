// 5.5 0 숫자

// 5.5.2 일치연산자(===)

let zeroPrice = 0;

if (zeroPrice) {
  console.log('true');
}
else {
  console.log('false');
}
// false

if (zeroPrice === 0) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

// 암묵적 타입캐스팅 발생하지 않는다.
if (zeroPrice === '0') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (zeroPrice === true) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

// 암묵적 타입캐스팅 발생하지 않는다.
if (zeroPrice === false) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (zeroPrice === null) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (zeroPrice === undefined) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal
