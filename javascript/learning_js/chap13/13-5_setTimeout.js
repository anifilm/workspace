// 13.5 '즉시 실행 함수'와 비동기적 코드

// setTimeout을 사용하여 1.5초 뒤에 hello를 출력하는 예제
//setTimeout(function () { console.log('hello'); }, 1500);

/* 카운트다운 함수
var i;
for (i = 5; i >= 0; i--) {
  setTimeout(function () {
    console.log(i === 0 ? 'go!' : i);
  }, (5 - i) * 1000);
}

위 함수는 카운트 다운이 아닌 -1이 여섯 번 출력된다.
setTimeout에 전달된 함수가 루프 안에서 실행되지 않고 루프가 종료된 뒤에 실행되기
때문이다. 따라서 루프의 i는 5에서 시작해 -1로 끝난다. 그리고 -1이 되기 전에는
콜백 함수는 전혀 호출되지 않는다.
콜백 함수가 호출되는 시점에서 i의 값은 -1이다.
*/

/* 클로저를 사용한 카운트다운
function loopBody(i) {
  setTimeout(function () {
    console.log(i === 0 ? 'go!' : i);
  }, (5 - i) * 1000);
}
var i;
for (i = 5; i >= 0; i--) {
  loopBody(i);
}
*/

/* 익명 함수를 만들어 즉시 호출 함수를 사용한 카운트다운 예제
var i;
for (i = 5; i >= 0; i--) {
  (function (i) {
    setTimeout(function () {
      console.log(i = 000 ? 'go!' : i);
    }, (5 - i) * 1000);
  })(i);
}
*/

// 블록 스코프 변수를 사용 (let을 사용하면 간단하다.)
for (let i = 5; i >= 0; i--) {
  setTimeout(function () {
    console.log(i === 0 ? 'go!' : i);
  }, (5 - i) * 1000);
}
