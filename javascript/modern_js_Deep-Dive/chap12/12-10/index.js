// 12.4.2 함수 표현식

// 예제 12-10
// 함수 표현식
// 다음과 같이 함수 표현식으로 함수를 구성할 때는 함수의 이름을 생략할 수 있다.
var add = function (x, y) {
  return x + y;
};
console.log(add(2, 5)); // 7

// 예제 12-11
// 기명 함수 표현식
var add = function foo(x, y) {
  return x + y;
}
// 함수 객체를 가리키는 식별자로 호출
console.log(add(2, 5)); // 7

// 함수 표현식으로 구성된 함수는 함수의 식별자로만 호출이 가능하다.
// 함수 이름으로 호출하면 RederenceError가 발생한다.
// 함수 이름은 함수 몸체 내부에서만 유효한 식별자다
console.log(foo(2, 5)); // RederenceError: foo is not defined
