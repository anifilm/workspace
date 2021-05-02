// 9.4.1 논리 연산자를 사용한 단축 평가

// 객체를 가리키기를 기대하는 변수가 null 또는 undefined가 아닌지 확인하고 프로퍼티를 참조할 때

// 예제 09-23
var elem = null;
var value = elem.value; // TypeError: Cannot read property 'value' of null

// 예제 09-24
var elem = null;
// elem이 null이나 undefined와 같은 Falsy 값이면 elem으로 평가되고
// elem이 Truthy 값이면 elem.value로 평가된다.
var value = elem && elem.value; // -> null


// 함수 매개변수에 기본값을 설정할 때

// 예제 09-25
// 단축 평가를 사용한 매개변수의 기본값 설정
function getStringLength(str) {
  str = str || '';
  return str.length;
}

getStringLength();     // => 0
getStringLength('hi'); // => 2

// ES6의 매개변수의 기본값 설정
function getStringLength(str = '') {
  return str.length;
}

getStringLength();     // => 0
getStringLength('hi'); // => 2
