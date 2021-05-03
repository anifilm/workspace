// 12.5.4 반환문

/*
함수는 return 키워드와 표현식(반환값)으로 이뤄진 반환문을 사용해 실행 결과를 함수 외부로 반환(return)할 수 있다.
*/

// 예제 12-27
function multiply(x, y) {
  return x * y; // 반환문
}
// 함수 호출은 반환값으로 평가된다.
var result = multiply(3, 5);
console.log(result); // 15

// 예제 12-28
function multiply(x, y) {
  return x * y; // 반환문
  // 반환문 이후에 다른 문이 존재하더라도 그 문은 실행되지 않고 무시된다.
  console.log('실행되지 않는다.');
}
console.log(multiply(3, 5)); // 15

// 예제 12-29
// 자바스크립트는 return;과 같이 반환값이 없는 경우에는 undefined(반환값 없음)를 반환한다.
function foo() {
  return;
}
console.log(foo()); // undefined

// 예제 12-30
function foo() {
  // 반환문은 생략 가능하다.
  // 반환문을 생략한 경우에도 암묵적으로 undefined(반환값 없음)가 반환된다.
}
console.log(foo()); // undefined
