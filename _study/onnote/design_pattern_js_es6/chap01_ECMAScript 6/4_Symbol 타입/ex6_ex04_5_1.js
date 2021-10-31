// 4.5 심볼 사용과 상수 사용 비교

// 4.5.1 상수 사용

const LINE = 0
const RECTANGLE = 1

console.log(LINE); // 0
console.log(RECTANGLE); // 1

let shape = LINE;

if (shape === LINE) {
  console.log('shape === LINE');
}
else {
  console.log('shape !== LINE');
}
// shape === LINE

// 정의한 상수값과 같은 숫자값을 사용해도 문제 없음
// 의미없는 숫자값을 사용하면 코드 해석에 문제가 있다.
if (shape === 0) {
  console.log('shape === LINE');
}
else {
  console.log('shape !== LINE');
}
// shape === LINE
