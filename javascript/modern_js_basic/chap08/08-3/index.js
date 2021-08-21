// 8.3.1 인수의 생략

function f(x, y) {
  console.log(`x = ${x}, y = ${y}`);
}
f(2); // x = 2, y = undefined

function multiply(a, b) {
  b = b || 1; // b의 초기값으로 1을 설정
  return a * b;
}
multiply(2, 3); // 6
multiply(2);    // 2

console.log(multiply(2, 3));
console.log(multiply(2));

// 함수의 매개 변수 초기값 지정
function multiply2(a, b = 1) {
  return a * b;
}
multiply2(2, 3); // 6
multiply2(2);    // 2

console.log(multiply2(2, 3));
console.log(multiply2(2));
