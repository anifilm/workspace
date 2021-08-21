// 8.4.1 재귀 함수의 기본

// 함수 리터럴 표현식에서 함수 이름을 사용하여 재귀 호출 (함수 이름 f는 함수 안에서만 유효하다.)
const fact = function f(x) {
  if (n <= 1) return 1;
  return n * f(n - 1);
}

// 익명 함수의 재귀 호출 (arguments.callee가 지금 실행중임 함수를 가리킨다.)
const fact = function (n) {
  if (n <= 1) return 1;
  return n * arguments.callee(n - 1);
}
