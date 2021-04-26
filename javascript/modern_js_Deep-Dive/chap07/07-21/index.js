// 예제 07-21
var x = 2;

// 2 % 2는 0이고 0은 false로 암묵적 타입 변환된다.
var result = x % 2 ? '홀수' : '짝수';

console.log(result); // "짝수"


// 예제 07-22
// 삼항 조건 연산자 표현식은 if...else 문으로 변환이 가능하다.
var x = 2, result;

// 2 % 2는 0이고 0은 false로 암묵적 타입 변환된다.
if (x % 2) result = '홀수';
else result = '짝수';

console.log(result); // "짝수"

// 예제 07-23
// 삼항 조건 연산자 표현식과 if...else 문의 차이점
// 삼항 조건 연산자 표현식은 값처럼 사용할 수 있지만
// if...else 문은 값처럼 사용할 수 없다.
var x = 10;

// if...else 문은 표현식이 아닌 문이다. 따라서 값처럼 사용할 수 없다.
//var result = if (x % 2) { result = '홀수'; } else { result = '짝수'; }; // SyntaxError: Unexpected token if

// 예제 07-24
// 삼항 조건 연산자 표현식은 값으로 평가할 수 있는 표현식인 문이다.
var x = 10;

// 삼항 조건 연산자 표현식은 표현식인 문이다. 따라서 값처럼 사용할 수 있다.
var result = x % 2 ? '홀수' : '짝수';
console.log(result); // "짝수"
