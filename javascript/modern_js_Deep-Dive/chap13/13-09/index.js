// 13.5 렉시컬 스코프

// 예제 13-09
var x = 1; // 전역 변수

function foo() {
  var x = 10; // 지역 변수
  bar();
}

function bar() {
  console.log(x); // 전역 변수를 출력
}

foo(); // 1
bar(); // 1