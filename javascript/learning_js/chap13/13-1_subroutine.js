// 13.1 서브루티으로서의 함수

/*
서브루틴(subroutine)은 아주 오래 된 개념이며 복잡한 코드를 간단하게 만드는 기초적인
수단이다.
서브루틴은 반복되는 작업의 일부를 떼어내서 이름을 붙이고, 언제든 호출할 수 있다.
서브루틴은 대개 어떤 알고리즘을 나타내는 형태이다.

윤년(leap year)인지 아닌지 판단하는 알고리즘의 예제를 보자.
*/

const year = new Date().getFullYear();
if (year % 4 !== 0) console.log(`${year} is NOT a leap year.`);
else if (year % 100 != 0) console.log(`${year} IST a leap year.`);
else if (year % 400 !== 0) console.log(`${year} is NOT a leap year.`);
else console.log(`${year} IST a leap year.`);

// 위의 코드를 재사용하기 위해서는 함수화할 필요가 있다.
function printLeapYearStatus() {
  const year = new Date().getFullYear();
  if (year % 4 !== 0) console.log(`${year} is NOT a leap year.`);
  else if (year % 100 != 0) console.log(`${year} IST a leap year.`);
  else if (year % 400 !== 0) console.log(`${year} is NOT a leap year.`);
  else console.log(`${year} IST a leap year.`);
}

// 위와 같이 재사용 가능한 서브루틴(함수) printLeapYearStatus를 선언하였다.
