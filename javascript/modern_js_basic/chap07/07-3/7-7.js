// 예제 7-7 정수 n의 팩토리얼을 구하는 함수

function fact(n) {
  let k = 1, i = n;
  do {
    k *= i--;
  } while (i > 0);
  return k;
}

fact(5); // 120
console.log(fact(5));
