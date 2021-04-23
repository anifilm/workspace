// 7.2 정적 스코프와 동적 스코프

function f1() {
  console.log('one');
}
function f2() {
  console.log('two');
}

f2();
f1();
f2();

/*
자바스크립트의 스코프는 정적입니다.
*/

const x = 3; // 전역 변수

function f() {
  console.log(x); // 3
  console.log(y); // 오류 발생, y is not defined
}

{ // 새 스코프
  const y = 5; // 블록 내에서 선언된 변수 (함수내에서 접근 불가)
  f();
}
