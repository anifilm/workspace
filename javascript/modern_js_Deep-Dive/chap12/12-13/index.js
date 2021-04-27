// 예제 12-13
// Function 생성자 함수를 통한 add 함수 생성
var add = new Function('x', 'y', 'return x + y');

console.log(add(2, 5)); // 7

/*
Function 생성자 함수로 함수를 생성하는 방식은 일반적이지 않으며 바람직하지도 않다.
Function 생성자 함수로 생성한 함수는 클로저(closure)를 생성하지 않는 등, 함수
선언문이나 함수 표현식으로 생성한 함수와 다르게 동작한다.
*/

// 예제 12-14
var add1 = (function () {
  var a = 10;
  return function (x, y) {
    return x + y + a;
  };
}());

console.log(add1(1, 2)); // 13

var add2 = (function () {
  var a = 10;
  return new Function('x', 'y', 'return x + y + a');
}());

console.log(add2(1, 2)); // ReferenceError: a is not defined
