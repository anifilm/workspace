// 5.1 일반 문자열

// 5.1.3 타입 확인(typeof)

let name = 'Cappuccino';

console.log(typeof name); // string

if (typeof name == 'string') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

if (typeof name === 'string') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal
