// 13.3.2 스코프 체인에 의한 함수 검색

// 예제 13-06
// 전역 함수
function foo() {
  console.log('global function foo');
}

function bar() {
  // 중첩 함수
  function foo() {
    console.log('local function foo');
  }

  foo(); // 중첩 함수의 내부 함수를 호출
}

bar();
