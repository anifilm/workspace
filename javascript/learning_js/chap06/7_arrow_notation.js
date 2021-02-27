// 6.7 화살표 표기법

/*
화살표 함수에는 세 가지 단축 문법이 있습니다.
 - function을 생략해도 됩니다.
 - 함수에 매개변수가 단 하나 뿐이라면 괄호(())도 생략할 수 있습니다.
 - 함수 바디가 표현식 하나라면 중괄호와 return 문도 생략할 수 있습니다.

화살표 함수는 항상 익명입니다. 화살표 함수도 변수에 할당할 수는 있지만, function 키워드 처럼
이름 붙은 함수를 만들 수는 없습니다.
*/

const f1 = function() { return "hello!"; }
// 또는
const f1 = () => "hello!";

const f2 = function(name) { return `Hello, ${name}!`; }
// 또는
const f2 = name => `Hello, ${name}!`;

const f3 = function(a, b) { return a + b; }
// 또는
const f3 = (a, b) => a + b;
