// 6.2.1 Console 객체의 메서드

/*
console.dir(object)    객체의 대화형 목록 출력
console.log(message)   일반 로그 출력
console.info(message)  메시지 타입 로그 출력
console.warn(message)  경고 메시지 출력
console.error(message) 오류 메시지 출력
console.time(timer)    처리 시간 측정용 타이머 시작
console.timeEnd(imter) 처리 시간 측정용 타이머 종료
console.trace()        스택 트레이스 출력
*/


// 6.2.2 콘솔에 텍스트 출력하기

var a = [2, 4, 6];
console.log('배열', a, '의 길이는', a.length, '입니다.');
// 배열 [2, 4, 6] 의 길이는 3 입니다.

console.log('배열 ' + a + ' 의 길이는 ' + a.length + '입니다.');
// 배열 2,4,6 의 길이는 3입니다.

var name = 'Tom';
var height = 172.5;
console.log('그의 이름은 %s이며 키는 %fcm 입니다.', name, height);
// 그의 이름은 Tom이며 키는 172.5cm 입니다.


// 6.2.3 객체의 프로퍼티를 목록으로 표시하기

var p = { x: 1, y: 2 };
console.dir(p); // ▼ Object
                //   x: 1
                //   y: 2
                // ▶ [[Prototype]]: Object


// 6.2.4 타이머

console.time('answer_time');
alert('확인 버튼을 누르십시오.'); // 실행 시간을 측정하는 작업
console.timeEnd('answer_time'); // answer_time: 4815.92578125 ms
