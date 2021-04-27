// 객체는 프로퍼티의 집합이며, 프로퍼티는 키와 값으로 구성된다.

// 예제 10-03
var person = {
  // 프로퍼티 키는 name, 프로퍼티 값은 'Lee'
  name: 'Lee',
  // 프로퍼티 키는 age, 프로퍼티 값은 20
  age: 20,
}

// 예제 10-04
var person = {
  firstName: 'Ung-mo', // 식별자 네이밍 규칙을 준수하는 프로퍼티 키
  'last-name': 'Lee', // 식별자 네이밍 규칙을 준수하지 않는 프로퍼티 키
};
console.log(person); // { firstName: "Ung-mo", last-name: "Lee" }

// 예제 10-05
/*
var person = {
  firstName: 'Ung-mo',
  last-name: 'Lee', // SyntaxError: Unexpected token -
}
자바 스크립트 엔진은 따옴표를 생략한 last-name을 - 연산자가 있는 표현식으로 해석한다.
*/

// 예제 10-06
// 문자열 또는 문자열로 평가할 수 있는 표현식을 사용해 프로퍼티 키를 동적으로 생성
// 할 수도 있다. 이 경우에는 프로퍼티 키로 사용할 표현식을 대괄호([...])로 묶어야 한다.
var obj = {};
var key = 'hello';
// ES5: 프로퍼티 키 동적 생성
//obj[key] = 'world';
// ES6: 계선된 프로퍼티 이름
var obj = { [key]: 'world' };
console.log(obj); // { hello: "world" }

// 예제 10-07
var foo = {
  '': '' // 빈 문자열도 키로 사용할 수 있다.
};
console.log(foo); // { "": "" }

// 예제 10-08
// 프로퍼키 키에 문자열이나 심벌 값 이외의 값을 사용하면 암묵적 타입 변환을 통해
// 문자열이 된다. 예를 들어, 프로퍼티 키로 숫자 리터럴을 사용하면 따옴표는 붙지
// 않지만 내부적으로는 문자열로 변환된다.
var foo = {
  0: 1,
  1: 2,
  2: 3,
};
console.log(foo); // { 0: 1, 1: 2, 2: 3 }
