// 8.7.3 함수를 이름 공간으로 활용하기

let x = 'global x';
(function () {
  let x = 'local x';
  let y = 'local y';
})();

console.log(x); // global x
console.log(y); // ReferenceError: y is not defined
