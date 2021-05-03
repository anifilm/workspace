// 14.1 변수의 생명 주기

// 14.1.1 지역 변수의 생명 주기

// 예제 14-01
function foo() {
  var x = 'local';
  console.log(x); // "local"
  return x;
}

foo();
console.log(x); // ReferenceError: x is not defined

// 예제 14-02
var x = 'global';

function foo() {
  console.log(x); // undefined
  var x = 'local';
}

foo();
console.log(x); // "global"
