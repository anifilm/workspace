// 일급 함수 (일등 함수)
// 프로그래밍 언어가 일급 함수(first-class function) 기능을 제공하면 '함수형 프로그래밍 언어
// (functional programming language)'라고 한다. 자바스크립트와 타입스크립트는 일급 함수 기능이
// 있으므로 함수형 프로그래밍 언어이다.
// 일급 함수란, 함수와 변수를 구분(혹은 차별)하지 않는다는 의미이다.

let f = function (a, b) { return a + b };
f = function (a, b) { return a - b };

// 위의 코드에서 f는 let 키워드가 앞에 있으므로 변수이다. f는 변수이므로 값을 저장할 수 있다.
// 변수 f에는 a + b 형태의 함수 표현식을 저장했다. 하지만 f는 변수이므로 a - b 형태의 함수 표현식도
// 저장할 수 있다.

// 심벌 f가 변수인지 함수인지 사실상 구분할 수 없다. 이것이 변수와 함수를 차별하지 않는다는 의미이다.