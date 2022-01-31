// 타입 주석
// let   변수 이름: 타입 [= 초기값]
// const 변수 이름: 타입 [= 초기값]

// 타입 스크립트 변수 선언문 예
let n: number = 1;
let b: boolean = true; // 혹은 false
let s: string = 'hello';
let o: object = {};

// 타입 불일치 오류 발생 예 (선언된 타입과 다른 타입의 값으로 변수값 변경 시도시 오류 발생)
n = 'a';   // 타입 불일치 오류 발생
b = 1;     // 타입 불일치 오류 발생
s = false; // 타입 불일치 오류 발생
o = { name: 'Jack', age: 32 };
