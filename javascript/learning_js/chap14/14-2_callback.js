// 14.2 콜백

// setTimeout은 콜백의 실행을 지정된 밀리초만큼 지연하는 내장 함수입니다.
console.log('Before timeout: ' + new Date());
function f() {
  console.log('After timeout: ' + new Date());
}
setTimeout(f, 60 * 1000); // 1분
console.log('I happen after setTimeout!');
console.log('Me too!');
