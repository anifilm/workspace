// 5.7 undefined

// 5.7.3 타입 확인(typeof)

let undefinedVal = undefined;

console.log(typeof undefinedVal); // undefined

if (typeof undefinedVal == 'undefined') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

if (typeof undefinedVal === 'undefined') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal
