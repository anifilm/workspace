// 7.7 즉시 호출하는 함수 표현식 (Immediately-invoked function expression)

/*
'즉시 호출하는 함수 표현식'(이하 즉시 실행 함수)은 다음과 같은 형태를 취합니다.
(function() {
  // 즉시 실행 함수 표현식
})();

함수 표현식으로 익명함수를 만들고 그 함수를 즉시 호출합니다. '즉시 실행 함수'
의 장점은 내부에 있는 것들이 모두 자신만의 스코프를 가지지만, '함수 표현식' 자체는
함수 이므로 그 스코프 밖으로 무언가를 내보낼 수 있다는 겁니다.
*/

const message = (function () {
  const secret = "I'm a secret!";
  return `The secret is ${secret.length} characters long.`;
})();
console.log(message);

/*
변수 secret은 '즉시 실행 함수'의 스코프 안에서 안전하게 보호되며 외부에서 접근할 수
없습니다. '즉시 실행 함수'는 함수이므로 무엇이든 반환할 수 있습니다. '즉시 실행 함수'
에서 배열이나 객체, 함수를 반환하는 경우도 무척 많습니다.
자신이 몇 번 호출되었는지 보고하는 함수를 생각해 봅시다. 이 함수가 몇 번 호출됐는지
저장한 값을 외부에서는 절대 접근할 수 없습니다.
*/

const f = (function () {
  let count = 0;
  return function () {
    return `I have been called ${++count} time(s).`;
  }
})();
f(); // "I have been called 1 time(s)."
f(); // "I have been called 2 time(s)."

/*
참고자료
https://beomy.tistory.com/9
*/
