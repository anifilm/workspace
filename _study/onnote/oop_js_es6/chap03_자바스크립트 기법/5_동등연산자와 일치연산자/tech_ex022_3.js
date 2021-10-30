// 5.2 '0' 문자열

// 5.2.3 타입 확인(typeof)

let zeroName = '0';

console.log(typeof zeroName); // string

if (typeof zeroName == 'string') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

if (typeof zeroName === 'string') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal
