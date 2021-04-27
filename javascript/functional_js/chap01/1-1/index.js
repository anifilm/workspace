// 코드 1-1 addMaker
function addMaker(a) {
  return function (b) {
    return a + b;
  }
}
addMaker(10)(5); // 15

/*
addMaker(10)의 결과는 function(b) { return 10 + b; } 와 같고 함수다.
(function(b) { return 10 + b; })(5)와 같으므로 15가 된다.
*/

// 코드 1-2 addMaker로 만든 함수
var add5 = addMaker(5);
add5(3); // 8
add5(4); // 9

// 코드 1-3 값으로서의 함수
var v1 = 100;
var v2 = function () { };
function f1() { return 100; }
function f2() { return function () { }; }
