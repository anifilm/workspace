// 함수 호출 연산자
// 어떤 변수가 함수 표현식을 담고 있다면, 변수 이름 뒤에 함수 호출 연산자(function call operator)
// ()를 붙여서 호출할 수 있다. 여기서 '함수 호출'이란, 함수 표현식의 몸통 부분을 실행한다는 뜻이다.
// 만약, 함수가 매개변수를 요구한다면 함수 호출 연산자 () 안에 필요한 매개변수를 명시할 수 있다.

let functionExpression = function (a, b) { return a + b };
let value = functionExpression(1, 2); // 3

// 위의 코드에서 functionExpression 변수는 function(a, b) { return a + b }라는 함수 표현식을
// 담고 있다. functionExpression 변수는 함수 표현식을 담고 있으므로, 변수 이름 뒤에 함수 호출
// 연산자 (1, 2)를 붙여 functionExpression(1, 2)라는 함수 호출문을 만들 수 있다.
