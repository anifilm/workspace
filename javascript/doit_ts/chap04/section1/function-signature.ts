// 함수 시그니처
// 변수에 타입이 있듯이 함수에도 타입이 있는데, 함수의 타입을 함수 시그니처(function signature)라고 한다.

// 함수의 시그니처는 다음과 같은 형태로 표현한다.
// (매개변수1 타입, 매개변수2 타입[, ...]) => 반환값 타입

// 함수 시그니처 사용 예
let printMe: (string, number) => void = function (name: string, age: number): void {}

// 위의 코드에서 printMe 함수는 string과 number 타입의 매개변수가 두개 있고 반환 타입이 void이다.
// 따라서 함수 시그니처는 (string, number) => void 이다.
// 만약, 매개변수가 없으면 단순히 ()로 표현한다. () => void는 매개변수도 없고 반환값도 없는
// 함수 시그니처이다.
