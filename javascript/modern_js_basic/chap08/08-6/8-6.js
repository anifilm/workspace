// 예제 8-6 카운터 함수를 만드는 함수

function makeCounter() {
  let count = 0;
  function f() {
    return count++;
  }
  return f;
}

const counter = makeCounter();

console.log(counter()); // 0
console.log(counter()); // 1
console.log(counter()); // 2
