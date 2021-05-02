// 18.2.4 name 프로퍼티

// 함수 객체의 name 프로퍼티는 함수 이름을 나타낸다.

// 예제 18-11
// 기명 함수 표현식
var namedFunc = function foo() { };
console.log(nameFunc.name); // foo

// 익명 함수 표현식
var anonymousFunc = function () { };
// ES5: name 프로퍼티는 빈 문자열을 값으로 갖는다.
// ES6: name 프로퍼티는 함수 객체를 가리키는 변수 이름을 값으로 갖는다.
console.log(anonymousFunc.name); // anonymousFunc

// 함수 선언문(Function declaration)
function bar() { }
console.log(bar.name); // bar
