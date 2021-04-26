// 13.6.3 함수를 반환하는 함수

function sum(arr, f) {
  if (typeof f != 'function') f = (x) => x;
  return add.reduce((a, x) => (a += f(x)), 0);
}

/*
배열 하나만 받아서 제곱의 합을 반환하는 함수가 필요하다면...
이미 만들어 둔 sum 함수를 활용하는 방법에 대한 예제
*/

function sumOfSquares(arr) {
  return sum(arr, x => x * x);
}

/*
만약 제곱은의 합을 구하는 함수, 세제곱의 합을 구하는 함수, 하는 식으로 패턴이
계속 반복된다면...
필요한 함수를 반환하는 함수를 만들어 문제를 해결할 수 있다.
*/

function newSummer(f) {
  return arr => sum(arr, f);
}

/*
새 함수 newSummer가 반환하는 함수는 단 하나의 매개변수만 받으면서도, 우리가
원하는 중간 함수를 마음대로 사용할 수 있다.
*/

const sumOfSquares = newSummer(x => x * x);
const sumOfCubes = newSummer(x => Math.pow(x, 3));
sumOfSquares([1, 2, 3]); // return 14
sumOfCubes([1, 2, 3]); // return 36

/*
NOTE_ 위 예제처럼 매개변수 여러 개를 받는 함수를 매개변수 하나만 받는 함수로
      바꾸는 것을 커링(kurrying)이라 부른다.
      커링 이라는 이름은 이 패턴을 만든 미국의 수학자 하스켈 커리의 이름을 딴 것
*/
