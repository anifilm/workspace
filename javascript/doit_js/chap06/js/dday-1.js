var now = new Date();  // 오늘 날짜 정보를 Date 객체의 인스턴스 now 객체로 생성
var firstDay = new Date("1978-09-18");  // 태어난 날의 날짜 정보를 firstDay 객체로 생성

var toNow = now.getTime();  // 오늘 날짜를 밀리초로 변경
var toFirst = firstDay.getTime();  // 태어난 날을 밀리초로 변경
var passedTime = toNow - toFirst;  // 태어난 날과 오늘 사이의 차이 (밀리초 값)
var passedDay = Math.round(passedTime / (1000 * 60 * 60 * 24));  // 밀리초를 날짜 수로 변환한 후 반올림
document.querySelector('#accent').innerText = passedDay + "일";  // #accent 영역에 표시
