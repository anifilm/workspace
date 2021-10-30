// 5.3 빈 문자열

// 5.3.2 일치연산자(===)

let emptyName = '';

if (emptyName) {
  console.log('true');
}
else {
  console.log('false');
}
// false

if (emptyName === '') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

if (emptyName === '0') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

// 암묵적 타입캐스팅 발생하지 않는다.
if (emptyName === 0) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (emptyName === true) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

// 암묵적 타입캐스팅 발생하지 않는다.
if (emptyName === false) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (emptyName === null) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (emptyName === undefined) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal
