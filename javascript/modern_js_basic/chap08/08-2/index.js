// 8.2.2 즉시 실행 함수

// 일반 함수 정의 및 실행
function fact(n) {
  if (n <= 1) return 1;
  return n * fact(n - 1);
}
console.log(fact(5)); // 120

// 즉시 실행 함수 정의 및 실행
(function fact(n) {
  if (n <= 1) return 1;
  return n * fact(n - 1);
})(5); // 120
