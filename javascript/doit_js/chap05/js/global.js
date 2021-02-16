function test() {
  myVar = 50;  // 전역 변수 사용
}

var myVar = 100;  // 전역 변수 선언
test();
document.write("myVar is " + myVar);
