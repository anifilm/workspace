// 5.1 일반 문자열

// 5.1.1 동등연산자(==)

let name = 'Cappuccino';

if (name) {
  console.log('true');
}
else {
  console.log('false');
}
// true

if (name == 'Cappuccino') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

if (name == 'Americano') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (name == true) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (name == null) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal

if (name == undefined) {
  console.log('equal');
}
else {
  console.log('not equal');
}
// not equal
