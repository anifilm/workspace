/*
this는 객체 자신의 프로퍼티나 메서드를 참조하기 위한 자기 참조 변수(self-referencing variable)다. this가 가리키는 값, 즉 this 바인딩은 함수 호출 방식에 따라 동적으로 결정된다.

함수 호출 방식         this가 가리키는 값(this 바인딩)
일반 함수로서 호출     전역 객체
메서드로서 호출        메서드를 호출한 객체(마침표 앞의 객체)
생성자 함수로서 호출    생성자 함수가 (미래에) 생성할 인스턴스

*/

// 함수는 다양한 방식으로 호출될 수 있다.
function foo() {
  console.log(this);
}

// 일반적인 함수로서 호출
// 전역 객체는 브라우저 환경에서는 window, Node.js 환경에서는 global을 가리킨다.
foo(); // window

const obj = { foo }; // ES6 프로퍼티 축약 표현

// 메서드로서 호출
obj.foo() // obj

// 생성자 함수로서 호출
const inst = new foo(); // inst
