// 예제 09-26
// 옵셔널 체이닝 연산자
var elem = null;

// elem이 null 또는 undefined이면 undefined를 반환하고, 그렇지 않으면
// 우항의 프로퍼티 참조를 이어간다.
var value = elem?.value;
console.log(value); // undefined

// 예제 09-27
// 옵셔널 체이닝 연산자 ?.가 도입되기 이전 논리 연산자 &&를 사용한 단축 평가
// 를 통해 변수가 null 또는 undefined인지 확인했다.
var elem = null;

// elem이 Falsy 값이면 elem으로 평가되고, elem이 Truthy 값이면 elem.value
// 로 평가된다.
var value = elem && elem.value;
console.log(value); // null

// 예제 09-28
var str = '';

// 문자열의 길이(length)를 참조한다.
var length = str && str.length;

// 문자열의 길이(length)를 참조하지 못한다.
console.log(length); // ""

// 예제 09-29
var str = '';

// 문자열의 길이(length)를 참조한다. 이때 좌항 피연산자가 false로 평가되는
// Falsy 값이라도 null 또는 undefined가 아니면 우항의 프로퍼니 참조를 이어간다.
var length = str?.length;
console.log(length); // 0
