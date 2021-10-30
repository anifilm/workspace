// 5.2 '0' 문자열

// 5.2.2 일치연산자(===)

let zeroName = '0';

if (zeroName) {
  console.log('true');
}
else {
  console.log('false');
}
// true

if (zeroName === '0') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

// 암묵적 타입캐스팅 발생하지 않는다.
if (zeroName === 0) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (zeroName === true) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

// 암묵적 타입캐스팅 발생하지 않는다.
if (zeroName === false) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (zeroName === null) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (zeroName === undefined) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal
