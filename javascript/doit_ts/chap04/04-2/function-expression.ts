// 사실 add 함수는 다음과 같은 형태로도 구현할 수 있다.
let add2 = function (a, b) { return a + b };
console.log(add2(1, 2)); // 3

// 이처럼 함수 선언문에서 함수 이름을 제외한 function (a, b) { return a + b };와 같은 코드를
// 함수 표현식(function expression)이라고 한다. 함수 표현식은 함수형 언어의 핵심 기능이다.
