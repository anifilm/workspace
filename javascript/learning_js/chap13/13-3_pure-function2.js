// 13.3 함수로서의 함수

/*
윤년 함수를 순수 함수로 수정하려면 다음과 같다.
*/

function isLeapYear(year) {
  if (year % 4 !== 0) return false;
  else if (year % 100 != 0) return true;
  else if (year % 400 != 0) return false;
  else return true;
}

/*
위와 같이 수정된 함수는 입력이 같으면 결과도 항상 같고, 다른 효과는 전혀 없으므로
순수 함수라고 볼 수 있다.
*/
