// 4.3 심볼의 값 비교

const LINE = Symbol('line');
const LINE2 = Symbol('line');

if (LINE === LINE2) {
  console.log('LINE === LINE2');
}
else {
  console.log('LINE !== LINE2');
}
// LINE !== LINE2
