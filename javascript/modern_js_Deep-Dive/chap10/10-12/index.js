// 10.5 프로퍼티 접근

// 예제 10-12
var person = {
  name: 'Lee'
};
// 마침표 표기법에 의한 프로퍼티 접근
console.log(person.name); // "Lee"
// 대괄호 표기법에 의한 프로퍼티 접근
console.log(person['name']); // "Lee"

// 예제 10-13
/*
var person = {
  name: 'Lee'
};
console.log(person[name]); // ReferenceError: name is not defined

대괄호 표기법을 사용하는 경우 대괄호 프로퍼티 접근 연산자 내부에 지정하는 프로퍼티
키는 반드시 따옴표로 감싼 문자열이어야 한다. 대괄호 프로퍼티 접근 연산자 내에 따옴표
로 감싸지 않은 이름을 프로퍼티 키로 사용하면 자바스크립트 엔진은 식별자로 해석한다.
*/

// 예제 10-14
var person = {
  name: 'Lee'
};
console.log(person.age); // undefined

/*
객체에 존재하지 않는 프로퍼티에 접근하면 undefined를 반환한다.
이때 ReferenceError가 발생하지 않는데 주의하자.
*/

// 예제 10-15
var person = {
  'last-name': 'Lee',
  1: 10,
};
//person.'last-name'; // SyntaxError: Unexpected string
//person.last-name; // 브라우저 환경: NaN
                    // Node.js 환경: ReferenceError: name is not defined
//person[last-name];// ReferenceError: last is not defined
person['last-name']; // => "Lee"

// 프로퍼티 키가 숫자로 이뤄진 문자열인 경우 따옴표를 생략할 수 있다.
//person.1;   // SyntaxError: Unexpected number
//person.'1'; // SyntaxError: Unexpected string
person[1];   // => 10 : person[1] => person['1']
person['1']; // => 10
