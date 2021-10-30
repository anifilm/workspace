// 5.4 일반 숫자

// 5.4.3 타입 확인(typeof)

let price = 3000;

console.log(typeof price); // number

if (typeof price == 'number') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal

if (typeof price === 'number') {
  console.log('equal');
}
else {
  console.log('not equal');
}
// equal
