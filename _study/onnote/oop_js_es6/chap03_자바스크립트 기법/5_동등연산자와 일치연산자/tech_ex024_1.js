// 5.4 일반 숫자

// 5.4.1 동등연산자(==)

let price = 3000;

if (price) {
  console.log('true');
}
else {
  console.log('false');
}
// true

if (price == 3000) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

// 암묵적 타입캐스팅 발생
if (price == '3000') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

if (price == 0) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (price == true) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (price == false) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (price == null) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (price == undefined) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal
