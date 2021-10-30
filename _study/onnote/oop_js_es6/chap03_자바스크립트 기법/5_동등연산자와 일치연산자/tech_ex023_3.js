// 5.3 빈 문자열

// 5.3.3 타입 확인(typeof)

let emptyName = '';

console.log(typeof emptyName); // string

if (typeof emptyName == 'string') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

if (typeof emptyName === 'string') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal
