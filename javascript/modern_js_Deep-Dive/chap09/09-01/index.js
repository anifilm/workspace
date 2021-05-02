// 9.1 타입 변환이란?

// 예제 09-01
var x = 10;

// 명시적 타입 변환
// 숫자를 문자열로 타입 캐스팅한다.
var str = x.toString();
console.log(typeof str, str); // string "10"

// x 변수의 값이 변경된 것은 아니다.
console.log(typeof x, x); // number 10

// 예제 09-02
var x = 10;

// 암묵적 타입 변환
// 문자열 연결 연산자는 숫자 타입 x의 값을 바탕으로 새로운 문자열을 생성한다.
var str = x + '';
console.log(typeof str, str); // string "10"

// x 변수의 값이 변경된 것은 아니다.
console.log(typeof x, x); // number 10
