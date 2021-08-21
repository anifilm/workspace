// 예제 8-7 카운터 함수를 만드는 함수 (익명 함수 사용)

function makeCounter() {
  let count = 0;
  //return function () {
  //  return count++;
  //};
  return () => count++;
}

const counter = makeCounter();

console.log(counter()); // 0
console.log(counter()); // 1
console.log(counter()); // 2
