// 4.2.10 변수의 유효 범위

// 전역 유효 범위와 지역 유효 범위
var a = 'global';
function f() {
  var b = 'local';
  console.log(a); // global
  return b;
}
f();
console.log(b); // ReferenceError: b is not defined

// 변수의 충돌(가려짐)
var a = 'global';
function f() {
  var a = 'local';
  console.log(a); // local
  return a;
}
f();
console.log(a); // global

// 함수 안에서의 변수 선언과 변수 끌어올림(호이스팅)
function f() {
  console.log(a); // undefined
  var a = 'local';
  console.log(a); // local
  return a;
}

// 함수 안에서의 변수 선언 생략
// -> 변수를 선언하지 않은 상태에서 값을 대입하면 전역 변수로 선언된다.
function f() {
  a = 'local';
  console.log(a); // local
  return a;
}
f();
console.log(a); // local
