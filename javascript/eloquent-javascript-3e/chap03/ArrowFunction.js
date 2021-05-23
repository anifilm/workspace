// 화살표 함수

const power = (base, exponent) => {
  let result = 1;
  for (let count = 0; count < exponent; count++) {
    result *= base;
  }
  return result;
};

// 다음과 같이 두 가지 방식으로 정의한 square 함수의 동작은 같다.
const square1 = (x) => { return x * x; };
const square2 = x => x * x;

// 화살표 함수의 매개변수가 없는 경우에는 빈 괄호를 사용한다.
const horn = () => {
  console.log('Toot');
};
