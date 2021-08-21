// 예제 7-1 윤년인지를 확인하는 함수

function isLeapYear(year) {
  if ((year % 400 === 0) || ((year % 4 === 0) && (year % 100 !== 0))) {
    return true;
  }
  return false;
}

const thisYear = new Date().getFullYear();
console.log(`현재 연도는 ${thisYear} 년 이며, 2월은 ${(isLeapYear(thisYear)) ? '윤달입니다.' : '윤달이 아닙니다.'}`);
