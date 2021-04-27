// 예제 09-30
// null 병합 연산자

// 좌항의 피연산자가 null 또는 undefined이면 우항의 피연산자를 반환하고,
// 그렇지 않으면 좌항의 피연산자를 반환한다.
var foo = null ?? 'default string';
console.log(foo); // "default string"

// 예제 09-31
// null 병합 연산자 ??는 변수에 기본값을 설정할 때 유용하다.
// null 병합 연산자 ??가 도입되기 이전에는 논리 연산자 ||를 사용한 단축 평가를
// 통해 변수에 기본값을 설정했다.

// Falsy 값인 0이나 ''도 기본값으로서 유효하다면 예기치 않은 동작이 발생할 수 있다.
var foo = '' || 'default string';
console.log(foo); // "default string"

// 예제 09-32
// 좌항의 피연산자가 Falsy 값이라도 null 또는 undefined가 아니면 좌항의 피연산자를 반환한다.
var foo = '' ?? 'default string';
console.log(foo); // ""
