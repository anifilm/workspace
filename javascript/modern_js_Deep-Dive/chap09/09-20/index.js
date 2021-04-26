// 예제 09-20
// 어떤 조건이 Truthy 값(참으로 평가되는 값)일 때 무언가를 해야 한다면
// 논리곱(&&) 연산자 표현식으로 if 문을 대체할 수 있다.
var done = true;
var message = '';

// 주어진 조건이 true일 때
if (done) message = '완료';

// if 문은 단축 평가로 대체 가능하다.
// done이 true라면 message에 '완료'를 할당
message = done && '완료';
console.log(message); // "완료"


// 예제 09-21
// 조건이 Falsy 값(거짓으로 평가되는 값)일 때 무언가를 해야 한다면
// 논리합(||) 연산자 표현식으로 if 문을 대체할 수 있다.
var done = false;
var message = '';

// 주어진 조건이 false일 때
if (!done) message = '미완료';

// if 문은 단축 평가로 대체 가능하다.
// done이 false라면 message에 '미완료'를 할당
message = done || '미완료';
console.log(message); // "미완료"


// 예제 09-22
// 삼항 조건 연산자는 if...else 문을 대체할 수 있다.
var done = true;
var message = '';

// if...else 문
if (done) message = '완료';
else      message = '미완료';
console.log(message); // "완료"

// if...else 문은 삼항 조건 연산자로 대체 가능하다.
message = done ? '완료' : '미완료';
console.log(message); // "완료"
