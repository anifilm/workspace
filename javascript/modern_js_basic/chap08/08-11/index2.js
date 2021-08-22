// 8.11.2 인수에 추가된 기능

// 나머지 매개변수(rest parameters)
function f(a, b, ...args) {
  console.log(a, b, args);
}
f(1, 2, 3, 4, 5, 6); // 1 2 [3, 4, 5, 6]


// 화살표 함수에서 전개 연산자(spread syntax)를 사용하여 가변 인수 사용
const sum = (...args) => {
  let s = 0;
  for (let i = 0; i < args.length; i++) {
    s += args[i];
  }
  return s;
}
sum(1, 2, 3, 4, 5); // 15
console.log(sum(1, 2, 3, 4, 5));


// 매개 변수의 기본값
function multiply(a, b = 1) {
  return a * b;
}
multiply(3);    // 3
multiply(3, 2); // 6

// 다른 인자의 값도 기본값으로 사용 가능
function add(a, b = a+1) {
  return a + b;
}
add(2); // 5
add(2, 1); // 3
