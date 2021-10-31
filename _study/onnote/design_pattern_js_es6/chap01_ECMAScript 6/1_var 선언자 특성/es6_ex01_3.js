// 1.3 for 문 초기화 식에서 변수 선언시 호이스팅

// 1.3.1 변수 선언이 되어 있지 않을 때

console.log(i);
// ReferenceError: i is not defined
// 에러가 발생해서 코드 실행이 여기에서 멈춘다.

console.log('test');


// 1.3.2 변수가 사용되고 나서 선언이 되었을 때

console.log(i); // undefined

console.log('test'); // test

for (var i = 0; i < 3; i++) {
  console.log(`test i = ${i}`);
}
// test i = 0
// test i = 1
// test i = 2


// 1.3.3 [1.3.2] 코드의 실제 실행 내용

var i;

console.log(i); // undefined

console.log('test'); // test

for (i = 0; i < 3; i++) {
  console.log(`test i = ${i}`);
}
// test i = 0
// test i = 1
// test i = 2
