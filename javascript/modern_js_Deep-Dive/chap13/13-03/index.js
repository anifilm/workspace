// 13.1 스코프란?

// 예제 13-03
var x = 'global';

function foo() {
  var x = 'local';
  console.log(x); // "local"
}

foo();

console.log(x); // "global"
