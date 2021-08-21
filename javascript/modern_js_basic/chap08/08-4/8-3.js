// 예제 8-3 n의 팩토리얼을 구하는 함수

function fact(n) {
  if (n <= 1) return 1;
  return n * fact(n - 1);
}

fact(5); // 120
console.log(fact(5));
