// 5.8 null

// 5.8.3 타입 확인(typeof)

let nullVal = null;

console.log(typeof nullVal); // object

if (typeof nullVal == 'object') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

if (typeof nullVal === 'object') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal
