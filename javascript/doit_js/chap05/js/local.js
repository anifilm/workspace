function test() {
  var myVar = 50;  // 지역 변수 선언
}

var myVar = 100;  // 전역 변수 선언
test();
document.write("myVar is " + myVar);
