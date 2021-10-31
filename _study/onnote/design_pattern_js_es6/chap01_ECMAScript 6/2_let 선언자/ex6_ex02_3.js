// 2.3 호이스팅이 발생하지 않는다.

// num 변수를 선언하지 안아서 에러
console.log(num);
// ReferenceError: num is not defined
// 에러가 발생해서 코드 실행이 멈춘다.

// let로 선언한 변수는 끌어 올려지지 안는다.
let num = 100;

console.log(num);
