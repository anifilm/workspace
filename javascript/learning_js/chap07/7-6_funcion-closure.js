// 7.6 함수, 클로저, 정적 스코프

/*
함수가 특정 스코프에 접근할 수 있도록 의도적으로 그 스코프에서 정의하는 경우
이를 보통 클로저(closure)라고 부릅니다.

클로저 예제를 하나 살펴봅시다.
*/

let globalFunc; // 정의되지 않은 전역 함수
{
  let blockVar = 'a'; // 블록 스코프에 있는 변수
  globalFunc = function () {
    console.log(blockVar);
  }
}
globalFunc(); // "a"

/*
globalFunc는 블록 안에서 값을 할당받았습니다. 이 블록 스코프와 그 부모인 전역 스코프가
클로저를 형성합니다. globalFunc를 어디서 호출하든, 이 함수는 클로저에 들어있는 식별자에
접근할 수 있습니다.
globalFunc를 호출하면, 이 함수는 스코프에서 빠져나와있음에도 불구하고 blockVar에 접근
할 수 있습니다. 일반적으로 스코프에서 빠져나가면 해당 스코프에서 선언한 변수는 메모리에서
제거되거나 제거해도 안전합니다.
하지만 여기서는 스코프 안에서 함수를 정의했고, 해당 함수는 스코프 밖에서도 참조할 수 있으므로 자바스크립트는 스코프를 계속 유지합니다.

즉, 스코프 안에서 정의된 함수에 의해 해당 스코프는 더 오래 유지됩니다.
또한 일반적으로 접근할 수 없는 것에 접근할 수 있는 효과도 있습니다.

다음 예제를 보십시오.
*/

let f; // 정의되지 않은 함수
{
  let o = { note: 'Safe' };
  f = function () {
    return o;
  }
}
let oRef = f();
console.log(oRef);
oRef.note = 'Not so safe after all!';
console.log(oRef);
