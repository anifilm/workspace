// 5.6 false Boolean

// 5.6.3 타입 확인(typeof)

let isNew = false;

console.log(typeof isNew); // boolean

if (typeof isNew == 'boolean') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

if (typeof isNew === 'boolean') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal
