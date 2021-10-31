// 4.1 심볼 생성

const LINE = Symbol();
const RECTANGLE = Symbol();

if (LINE === RECTANGLE) {
  console.log('LINE === RECTANGLE');
}
else {
  console.log('LINE !== RECTANGLE');
}
// LINE !== RECTANGLE
