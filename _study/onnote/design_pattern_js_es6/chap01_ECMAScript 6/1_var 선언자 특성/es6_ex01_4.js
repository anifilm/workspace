// 1.4 if 문 내에서 변수 선언시 호이스팅

// 1.4.1 if 문 외부에 이름이 동일한 변수가 선언되어 있을 때

var num = 10;

console.log(num); // 10

if (num !== 10) {
  // var로 선언한 변수의 선언문이 끌어 올려진다.
  var num = 20;
  console.log('num !== 10');
}
else {
  console.log('num === 10');
}
// num === 10

console.log(`num = ${num}`); // num = 10


// 1.4.3 [1.4.2] 코드의 실제 실행 내용

var num;

num = 10;

console.log(num); // 10

if (num !== 10) {
  // 변수 선언문은 끌어 올려지고 초기화 문만 남는다.
  num = 20;

  console.log('num !== 10');
}
else {
  console.log('num === 10');
}
// num === 10

console.log(`num = ${num}`); // num = 10


// 1.4.3 변수가 사용되고 나서 선언이 되었을 때

console.log(num); // undefined

if (num !== 10) {
  // var로 선언한 변수의 선언문이 끌어 올려진다.
  var num = 20;

  console.log('num !== 10');
}
else {
  console.log('num === 10');
}
// num !== 10

console.log(`num = ${num}`); // num = 20


// 1.4.4 [1.4.3] 코드의 실제 실행 내용

// 끌어 올려진 변수 선언문
var num;

console.log(num); // undefined

if (num !== 10) {
  // 변수 선언문은 끌어 올려지고 초기화 문만 남는다.
  num = 20;

  console.log('num !== 10');
}
else {
  console.log('num === 10');
}
// num !== 10

console.log(`num = ${num}`); // num = 20
