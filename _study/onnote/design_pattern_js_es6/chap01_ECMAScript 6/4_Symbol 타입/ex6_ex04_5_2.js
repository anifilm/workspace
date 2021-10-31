// 4.5 심볼 사용과 상수 사용 비교

// 4.5.2 심볼 사용

const LINE = Symbol('line');
const RECTANGLE = Symbol('rectangle');

console.log(LINE.toString()); // Symbol(line)
console.log(RECTANGLE.toString()); // Symbol(rectangle)

let shape = LINE;

// 정의한 심볼값만 비교 가능
if (shape === LINE) {
  console.log('shape === LINE');
}
else {
  console.log('shape !== LINE');
}
// shape === LINE
