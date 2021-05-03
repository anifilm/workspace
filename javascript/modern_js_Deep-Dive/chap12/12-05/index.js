// 12.4 함수 정의

// 12.4.1 함수 선언문

// 예제 12-05
// 함수 선언문
function add(x, y) {
  return x + y;
}

// 함수 참조
// console.dir은 console.log와 달리 함수 객체의 프로퍼티까지 출력한다.
// 단, Node.js 환경에서는 console.log와 같은 결과가 출력된다.
console.dir(add); // ƒ add(x, y)

// 함수 호출
console.log(add(2, 5)); // 7

// 예제 12-07
// 자바스크립트의 함수는 일급 객체이므로 다음과 같이 변수에 할당할 수 있다.
var add = function add(x, y) {
  return x + y;
};

// 함수 호출
console.log(add(2, 5)); // 7
