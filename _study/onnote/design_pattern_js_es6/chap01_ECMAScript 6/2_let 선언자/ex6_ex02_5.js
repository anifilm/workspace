// 2.5 제어문 중괄호 블록 내부에서 변수 선언

// 2.5.1 변수 선언

for (let i = 0; i < 3; i++) {
  let num = 20;
  console.log(`test i + 20 = ${i + num}`);
}
// test i = 20
// test i = 21
// test i = 22


// 2.5.2 호이스팅이 발생하지 않는다.

// 제어문 중괄호 블록 내부에서 선언한 변수 num은 호이스팅되지 않는다.
console.log(num);
// ReferenceError: num is not defined
// 에러가 발생하여 코드 실행이 멈춘다.

for (let i = 0; i < 3; i++) {
  let num = 20;
  console.log(`test i + 20 = ${i + num}`);
}


// 2.5.3 제어문 중괄호 블록 외부에서 사용 불가능

for (let i = 0; i < 3; i++) {
  let num = 20;
  console.log(`test i + 20 = ${i + num}`);
}
// test i = 20
// test i = 21
// test i = 22

// 제어문 중괄호 블록 내부에서 선언한 변수 num은 호이스팅되지 않는다.
console.log(num);
// ReferenceError: num is not defined
// 에러가 발생하여 코드 실행이 멈춘다.
