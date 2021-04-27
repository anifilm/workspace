// 예제 12-22
function add(x, y) {
  return x + y;
}

console.log(add(2)); // NaN
console.log(add('a', 'b'));

/*
위 코드는 자바스크립트 문법상 어떠한 문제도 없으므로 자바스크립트 엔진은 아무런
이의 제기없이 위 코드를 실행할 것이다. 이러한 상황이 발생한 이유는 다음과 같다.

 1. 자바스크립트 함수는 매개변수와 인수의 개수가 일치하는지 확인하지 않는다.
 2. 자바스크립트는 동적 타입 언어다. 따라서 자바스크립트 함수는 매개변수의 타입을 사전에 지정할 수 없다.

따라서 자바스크립트의 경우 함수를 정의하 때 적절한 인수가 전달되었는지 확인할 필요가 있다.
*/

// 예제 12-23
function add(x, y) {
  if (typeof x !== 'number' || typeof y !== 'number') {
    // 매개변수를 통해 전달된 인수의 타입이 부적절한 경우 에러를 발생시킨다.
    throw new TypeError('인수는 모두 숫자 값이어야 합니다.');
  }
  return x + y;
}

console.log(add(2));   // TypeError: 인수는 모두 숫자 값이어야 합니다.
console.log('a', 'b'); // TypeError: 인수는 모두 숫자 값이어야 합니다.

/*
위의 예제의 경우 인수의 개수는 확인하고 있지 않지만 arguments 객체를 통해 인수 개수를 확인할 수도 있다.
또는 인수가 전달되지 않는 경우에 대해 다음과 같이 단축 평가를 사용해 매개변수에 기본값을 할당하는 방법도 있다.
*/

// 예제 12-24
function add(a, b, c) {
  a = a || 0;
  b = b || 0;
  c = c || 0;
  return a + b + c;
}

console.log(add(1, 2, 3)); // 6
console.log(add(1, 2)); // 3
console.log(add(1)); // 1
console.log(add()); // 0

/*
ES6에 도입된 매개변수 기본값을 사용하면 함수 내에서 수행했던 인수 체크 및 초기화를 간소화할 수 있다.
매개변수 기본값은 매개변수에 인수를 전달하지 않았을 경우와 undefined를 전달한 경우에만 유효하다.
*/

// 예제 12-25
function add(a = 0, b = 0, c = 0) {
  return a + b + c;
}

console.log(add(1, 2, 3)); // 6
console.log(add(1, 2)); // 3
console.log(add(1)); // 1
console.log(add()); // 0
