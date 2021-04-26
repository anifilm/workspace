// 13.6 변수로서의 함수

/*
함수에 별명 붙이기
함수도 데이터이므로 짧은 이름의 변수에 저장할 수 있다.
*/

function addThreeSquareAddFiveTakeSquareRoot(x) {
  // 설마 이런 이름을 짓지는 않겠지만...
  return Math.sqrt(Math.pow(x + 3, 2) + 5);
}

// 별명을 사용하기 전
const answer = (addThreeSquareAddFiveTakeSquareRoot(5) +
  addThreeSquareAddFiveTakeSquareRoot(2)) /
  addThreeSquareAddFiveTakeSquareRoot(7);

// 별명을 사용하면 이렇게 바뀐다.
const f = addThreeSquareAddFiveTakeSquareRoot;
const answer = (f(5) + f(2)) / f(7);

/*
별명을 지을 때는 addThreeSquareAddFiveTakeSquareRoot 뒤에 괄호를 붙이지 않았다.
괄호를 붙이게 되면 함수를 호출하고, f에는 addThreeSquareAddFiveTakeSquareRoot 자체가 아니라
호출 결과가 저장되게 된다.
*/

const Money = require('math-money'); // require는 라이브러리를 불러오는 노드 함수

const oneDollar = Money.Dollar(1);

// Money.Dollar도 길게 느껴지면 이렇게 해도 된다.
const Dollar = Money.Dollar;
const twoDollars = Dollar(2);
// oneDollar와 twoDollars는 같은 타입의 인스턴스이다.
