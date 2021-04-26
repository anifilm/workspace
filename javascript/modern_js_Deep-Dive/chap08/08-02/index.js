// 예제 08-02
var num = 2;
var kind;

// if 문
if (num > 0) {
  kind = '양수'; // 음수를 구별할 수 없다.
}
console.log(kind); // "양수"

// if...else 문
if (num > 0) {
  kind = '양수';
} else {
  kind = '음수'; // 0은 음수가 아니다.
}
console.log(kind); // "양수"

// if...else if 문
if (num > 0) {
  kind = '양수';
} else if (num < 0) {
  kind = '음수';
} else {
  kind = '영';
}
console.log(kind); // "양수"


// 예제 08-03
// 만약 코드 블록 내의 문이 하나뿐이라면 중괄호를 생략할 수 있다.
var num = 2;
var kind;

if (num > 0)      kind = '양수';
else if (num < 0) kind = '음수';
else              kind = '영';
console.log(kind); // "양수"


// 예제 08-04
// 대부분의 if...else 문은 삼항 조건 연산자로 바꿔 쓸 수 있다.

// x가 짝수이면 result 변수에 문자열 '짝수'를 할당하고 홀수이면 문자열 '홀수'를 할당한다.
var x = 2;
var result;

if (x % 2) { // 2 % 2는 0이다. 이때 0은 false로 암묵적 강제 변환된다.
  result = '홀수';
} else {
  result = '짝수';
}
console.log(result); // "짝수"


// 예제 08-05
// 위 예제는 다음과 같이 삼항 조건 연산자로 바꿔 쓸 수 있다.
var x = 2;

// 0은 false로 취급된다.
var result = x % 2 ? '홀수' : '짝수';
console.log(result); // "짝수"


// 예제 08-06
// 만약 경우의 수가 세 가지('양수', '음수', '영')라면 다음과 같이 바꿔 쓸 수 있다.
var num = 2;

// 0은 false로 취급된다.
var kind = num ? (num > 0 ? '양수' : '음수') : '영';
console.log(kind); // 양수
