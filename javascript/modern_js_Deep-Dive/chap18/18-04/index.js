// 18.2.1 arguments 프로퍼티

/*
함수 객체의 arguments 프로퍼티 값은 arguments 객체다. arguments 객체는 함수 호출시 전달되는 인수(argument)들의 정보를 담고 있는 순회 가능한(iterable) 유사 배열 객체이며, 함수 내부에서 지역 변수처럼 사용된다. 즉, 함수 외부에서는 참조할 수 없다.
*/

// 예제 18-04
function multiply(x, y) {
  console.log(arguments);
  return x * y;
}

console.log(multiply()); // NaN
console.log(multiply(1)); // NaN
console.log(multiply(1, 2)); // 2
console.log(multiply(1, 2, 3)); // 2

// arguments 객체는 매개변수 개수를 확정할 수 없는 가변 인자 함수를 구현할 때 유용하다.

// 예제 18-06
function sum() {
  let res = 0;

  // arguments 객체는 length 프로퍼티가 있는 유사 배열 객체이므로 for 문으로 순회할 수 있다.
  for (let i = 0; i < arguments.length; i++) {
    res += arguments[i];
  }

  return res;
}

console.log(sum()); // 0
console.log(sum(1, 2)); // 3
console.log(sum(1, 2, 3)); // 6

// 예제 18-07
function sum2() {
  // arguments 객체를 배열로 변환
  const array = Array.prototype.slice.call(arguments);
  return array.reduce(function (pre, cur) {
    return pre + cur;
  }, 0);
}

console.log(sum2(1, 2)); // 3
console.log(sum2(1, 2, 3, 4, 5)); // 15

// 위와 같은 번거로움을 해결하기 위해 ES6에서는 Rest 파라미터를 도입했다.

// 예제 18-08
// ES6 Rest parameter
function sum3(...args) {
  return args.reduce((pre, cur) => pre + cur, 0);
}

console.log(sum3(1, 2)); // 3
console.log(sum3(1, 2, 3, 4, 5)); // 15
