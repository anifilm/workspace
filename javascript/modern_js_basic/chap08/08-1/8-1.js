// 예제 8-1 배열 요소의 제곱합에 대한 제곱근을 구하는 함수

function norm(x) {
  function sumSquare() {
    sum = 0;
    for (let i = 0; i < x.length; i++) {
      sum += x[i] * x[i];
    }
    return sum;
  }

  const sum2 = sumSquare();
  return Math.sqrt(sum2);
}

const arr = [2, 1, 3, 5, 7];
const n = norm(arr);
console.log(n); // 9.38083151964686
