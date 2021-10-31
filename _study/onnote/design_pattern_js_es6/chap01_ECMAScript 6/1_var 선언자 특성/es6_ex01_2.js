// 1.2 일반 변수 선언시 호이스팅

// 1.2.1 변수 선언이 되지 있지 않을 때

console.log(num);
// ReferenceError: num is not defined
// 에러가 발생해서 코드 실행이 여기에서 멈춘다.

console.log('test');


// 1.2.2 변수가 사용되고 나서 선언이 되었을 때

// num 변수를 선언하지 않았지만 호이스팅에 의해 사용 가능
console.log(num); // undefined

// var로 선언한 변수는 끌어 올려진다.
var num = 100;

console.log(num); // 100


// 1.2.3 [1.2.2] 코드의 실제 실행 내용

// 끌어 올려진 변수 선언문
var num;

console.log(num); // undefined

// 변수 선언문은 끌어 올려지고 초기화문만 남는다.
num = 100;

console.log(num); // 100
