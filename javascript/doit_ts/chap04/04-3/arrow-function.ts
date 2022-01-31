// 화살표 함수와 표현식 문
// ESNext 자바스크립트와 타입스크립트는 function 키워드가 아닌 => 기호로 만드는 화살표 함수도 제공한다.

// const 함수 이름 = (매개변수1: 타입1, 매개변수2: 타입2[, ...]): 반환 타입 => 함수 몸통

// 화살표 함수의 몸통은 function 때와는 다르게 다음처럼 중괄호를 사용할 수도 있고 생략할 수도 있다.
const arrow1 = (a: number, b: number): number => { return a + b }; // 실행문 방식 몸통
const arrow2 = (a: number, b: number): number => a + b; // 표현식 문 방식 몸통

// 흥미롭게도 중괄호 사용 여부에 따라 타입스크립트 문법이 동작하는 방식이 실행문(execution statement)
// 방식과 표현식 문(expression statement) 방식으로 달라진다.
