// 2.4 for 문 초기화 식에서 변수 선언

// 2.4.1 변수 선언

for (let i = 0; i < 3; i++) {
  console.log(`test i = ${i}`);
}
// test i = 0
// test i = 1
// test i = 2


// 2.4.2 호이스팅이 발생하지 않는다.

// for 문 초기화식에서 선언된 let 변수 i는 호이스팅되지 않는다.
console.log(i);
// ReferenceError: i is not defined
// 에러가 발생하여 코드 실행이 멈춘다.

console.log('test');

for (let i = 0; i < 3; i++) {
  console.log(`test i = ${i}`);
}


// 2.4.3 for 문 외부에서 사용 불가능

for (let i = 0; i < 3; i++) {
  console.log(`test i = ${i}`);
}
// test i = 0
// test i = 1
// test i = 2

// for 문 초기화식에 선언한 변수를 외부에서 사용 불가능
console.log(i);
// ReferenceError: i is not defined
// 에러가 발생하여 코드 실행이 멈춘다.
