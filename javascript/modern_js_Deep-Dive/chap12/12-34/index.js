/*
함수 정의와 동시에 즉시 호출되는 함수를 즉시 실행함수(IIFE, Immediately Invoked Function Expression)라고 한다.
즉시 실행 함수는 단 한 번만 호출되며 다시 호출할 수 없다.
*/

// 예제 12-34
// 익명 즉시 실행 함수
(function () {
  var a = 3;
  var b = 5;
  return a * b
}());

/*
즉시 실행 함수는 함수 이름이 없는 익명 함수를 사용하는 것이 일반적이다. 함수 이름이
있는 기명 즉시 실행 함수도 사용할 수 있다. 하지만 그룹 연산자 (...) 내의 기명 함수
는 함수 선언문이 아니라 함수 리터럴로 평가되며 함수 이름은 함수 몸체에서만 참조할 수
있는 식별자이므로 즉시 실행 함수를 다시 호출할 수는 없다.
*/

// 예제 12-35
// 기명 즉시 실행 함수
(function foo() {
  var a = 3;
  var b = 5;
  return a * b;
}());

//foo(); // ReferenceError: foo is not defined

/*
즉시 실행 함수는 반드시 그룹 연산자 (...)로 감싸야 한다. 그렇지 않으면 다음과 같이 에러가 발생한다.
*/
// 예제 12-36
function () { // SyntaxError: Function statements require a function name
  // ...
}();

/*
위 예제에서 에러가 발생하는 이유는 함수 정의가 함수 선언문의 형식에 맞지 않기 때문이다.
함수 선언문은 함수 이름을 생략할 수 없다. 그렇다면 기명 함수를 정의해 그룹 연산자 없이 즉시 호출해보자.
*/
// 예제 12-37
function foo() {
  // ...
}(); // SyntaxError: Unexpected token ')'

/*
위 예제에서도 에러가 발생한다. 그 이유는 자바스크립트 엔진이 암묵적으로 수행하는 세미콜론 자동 삽입 기능에 의해 함수 선언문이 끝나는 위치, 즉 함수 코드 블록의 닫는 중괄호 뒤에 ";"이 추가되기 때문이다.
*/
// 예제 12-38
function foo() {}(); // => function foo() {};();

/*
따라서 함수 선언문 뒤의 (...)는 함수 호출 연산자가 아니라 그룹 연산자로 해석되고, 그룹 연산자에 피연산자가 없기 때문에 에러가 발생한다.

그룹 연산자의 피연산자는 값으로 평가되므로 기명 또는 익명 함수를 그룹 연산자로 감싸면 함수 리터럴로 평가되어 함수 객체가 된다.
*/
// 예제 12-40
console.log(typeof (function f() { })); // function
console.log(typeof (function () { })); // function

// 예제 12-42
// 즉시 실행 함수도 일반 함수처럼 값을 반환할 수 있다.
var res = (function () {
  var a = 3;
  var b = 5;
  return a * b;
}());

console.log(res); // 15

// 즉시 실행 함수에도 일반 함수처럼 인수를 전달할 수 있다.
res = (function (a, b) {
  return a * b;
}(3, 5));

console.log(res); // 15
