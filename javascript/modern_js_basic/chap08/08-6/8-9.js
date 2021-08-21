// 예제 8-9 x번 곱하는 함수를 생성하는 함수
function makeMultiplier(x) {
  //return function (y) {
  //  return x * y;
  //};
  return (y) => x * y;
}

const multi2 = makeMultiplier(2);
const multi10 = makeMultiplier(10);

console.log(multi2(3)); // 6
console.log(multi10(3)); // 30
