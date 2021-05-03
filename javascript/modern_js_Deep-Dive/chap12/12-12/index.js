// 12.4.3 함수 생성 시점과 함수 호이스팅

// 예제 12-12
// 함수 참조
console.dir(add); // f add(x, y)
console.dir(sub); // undefined

// 함수 호출
console.log(add(2, 5)); // 7
//console.log(sub(2, 5)); // TypeError: sub is not a function

// 함수 선언문
function add(x, y) {
  return x + y;
}

// 함수 표현식
var sub = function (x, y) {
  return x - y;
}

// 함수 호출
console.log(add(2, 5)); // 7
console.log(sub(2, 5)); // -3

/*
함수 선언문으로 정의한 함수는 프로그램 실행시 전체 구문의 최상단으로 끌어올려 진다.
함수 표현식 자체는 호이스팅 되지 않으므로 (변수 자체만 호이스팅 된다는 점에 주의) 표현식 선언 이후에만 호출이 가능하다.
*/
