// 7.8 함수 스코프와 호이스팅

/*
var로 선언한 변수는 현재 스코프 안이라면 어디서든 사용할 수 있으며, 심지어 선언하기도
전에 사용할 수 있습니다.
*/

let var1;
let var2 = undefined;
var1; // undifined
var2; // undifined
undefinedVar; // ReferenceError: undefindedVar는 정의되지 않았습니다.


// let을 사용하면, 변수를 선언하기 전에 사용하려 할 때 에러가 발생합니다.
x; // ReferenceError: x는 정의되지 않았습니다.
let x = 3;

// 반면 var로 변수를 선언하면 선언하기 전에도 사용할 수 있습니다.
x; // undefined
var x = 3;
x; // 3

/*
변수를 선언하지도 않았는데 그 변수에 접근할 수 있다는 건 이해할 수 없는 일입니다.
var로 선언한 변수는 끌어올린다는 뜻의 호이스팅(hoisting)이라는 메커니즘을 따릅니다.
자바스크립트는 함수나 전역 스코프 전체를 살펴보고 var로 선언한 변수를 맨 위로 끌어
올립니다.
여기서 중요한 부분은 선언만 끌어올려지며, 할당은 끌어올려지지 않는다는 겁니다.

자바스크립트는 이전 예제를 다음과 같이 해석합니다.
*/

var x; // 변수 x의 선언은 호이스팅(위로 올려짐) 됩니다.
x; // undefined
x = 3;
x; // 3

// 이번에는 원래 코드와 자바스크립트가 해석한 코드를 1:1로 비교하겠습니다.
// 원래 코드
if (x !== 3) {
  console.log(y);
  var y = 5;
  if (y === 5) {
    var x = 3;
  }
  console.log(y);
}
if (x === 3) {
  console.log(y);
}

// 자바스크립트가 해석한 코드
var x;
var y;
if (x !== 3) {
  console.log(y);
  y = 5;
  if (y === 5) {
  x = 3;
  }
  console.log(y);
}
if (x === 3) {
  console.log(y);
}

// var를 사용해 변수를 선언하면 자바스크립트는 같은 변수를 여러 번 정의하더라도 무시합니다.
// 원래 코드
var x = 3;
if (x === 3) {
  var x = 2;
  console.log(x);
}
console.log(x);

// 자바스크립트가 해석한 코드
var x;
x = 3;
if (x === 3) {
  x = 2;
  console.log(x);
}
console.log(x);

/*
위 예제를 보면 같은 함수나 전역 스코프 안에서 var로 새 변수를 만들 수 없으며, let으로
가능했던 변수 숨김도 불가능함을 알 수 있습니다.
*/
