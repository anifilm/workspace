// 13.2 값을 반환하는 서브루틴으로서의 함수

// 함수가 윤년인지 아닌지 값을 반환하는 서브루틴이 되도록 변경
function isCurrentYearLeapYear() {
  const year = new Date().getFullYear();
  if (year % 4 !== 0) return false;
  else if (year % 100 != 0) return true;
  else if (year % 400 !== 0) return false;
  else return true;
}

// 함수의 반환값을 활용하는 예제
const daysInMonth = [
  31,
  isCurrentYearLeapYear() ? 29 : 28,
  31,
  30,
  31,
  30,
  31,
  31,
  30,
  31,
  30,
  31,
];

if (isCurrentYearLeapYear()) console.log('It is a leap year.');
