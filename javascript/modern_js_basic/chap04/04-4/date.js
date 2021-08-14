// 4.4.2 Date 생성자

var now = new Date();
console.log(now); // Sat Aug 14 2021 15:08:23 GMT+0900 (한국 표준시)

var then = new Date(2008, 5, 10);
console.log(then); // Tue Jun 10 2008 00:00:00 GMT+0900 (한국 표준시)

var elapsed = now - then;
console.log(elapsed); // 415897703012


var start = new Date();
/* 실행 시간을 측정할 코드를 작성하는 위치 */
var end = new Date();
var elapsed = end - start; // 프로그램 실행에 걸리는 시간(밀리초 단위)


now.getFullYear();     // 2021(연도)
now.getMonth();        // 7(월, 0부터 시작하므로 7은 8월을 뜻함)
now.getDate();         // 14(날짜)
now.getDay();          // 6(요일, 일요일이 0이므로 6은 토요일을 뜻함)
now.getHours();        // 15(시각의 시간)
now.getMinutes();      // 12(시각의 분)
now.getSeconds();      // 55(시각의 초)
now.getMilliseconds(); // 981(시각의 밀리초)
now.toString();        // "Sat Aug 14 2021 15:12:11 GMT+0900 (한국 표준시)"
now.toLocaleString();  // "2021. 8. 14. 오후 3:12:11"(지역화된 날짜와 시간 정보)
now.toLocaleDateString(); // "2021. 8. 14."(지역화된 날짜 정보)
now.toLocaleTimeString(); // "오후 3:12:11"(지역화된 시간 정보)
now.getUTCHours();     // 6(UTC(협정 세계 시) 시각의 시간)
now.toUTCString();     // "Sat, 14 Aug 2021 06:12:11 GMT"(UTC 날짜와 시간 정보)
