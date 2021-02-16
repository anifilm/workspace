var now = new Date();  // 오늘 날짜 정보를 Date 객체의 인스턴스 now 객체로 생성
var firstDay = new Date("1978-09-18");  // 태어난 날의 날짜 정보를 firstDay 객체로 생성

var toNow = now.getTime();  // 오늘 날짜를 밀리초로 변경
var toFirst = firstDay.getTime();  // 태어난 날을 밀리초로 변경
var passedTime = toNow - toFirst;  // 태어난 날과 오늘 사이의 차이 (밀리초 값)
var passedDay = Math.round(passedTime / (1000 * 60 * 60 * 24));  // 밀리초를 날짜 수로 변환한 후 반올림
document.querySelector("#accent").innerText = passedDay + "일";  // #accent 영역에 표시

// 기념일 계산을 calcDate() 함수로 변경
function calcDate(days) {
  var future = toFirst + days * (1000 * 60 * 60 * 24);  // 처음 만난 날에 days일을 더해줌
  var someday = new Date(future);  // future 값을 사용해 Date 객체의 인스턴스를 생성
  var year = someday.getFullYear();  // '연도'를 가져와 year 변수에 저장
  var month = someday.getMonth();    // '월'을 가져와 month 변수에 저장
  var date = someday.getDate();      // '일'을 가져와 date 변수에 저장
  document.querySelector("#date" + days).innerText = year + "년 " + month + "월 " + date + "일";
}

calcDate(100);  // 100일 기념일을 계산해서 출력
calcDate(200);  // 200일 기념일을 계산해서 출력
calcDate(365);  //   1년 기념일을 계산해서 출력
calcDate(500);  // 100일 기념일을 계산해서 출력
