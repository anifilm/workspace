// type 키워드로 타입 별칭 만들기
// 타입스크립트는 type이라는 키워드를 제공한다. type 키워드는 기존에 존재하는 타입을 단순히 이름만
// 바꿔서 사용할 수 있게 해준다. 이러한 기능을 타입 별칭(type alias)이라고 한다.

// type 새로운 타입 = 기존 타입

type stringNumberFunc = (string, number) => void;
let f: stringNumberFunc = function (a: string, b: number): void {};
let g: stringNumberFunc = function (c: string, d: number): void {};
let h: stringNumberFunc = function () {};

// 위의 코드에서는 (string, number) => void 함수 시그니처를 stringNumberFunc라는 이름으로
// 타입 별칭을 만들었다. 이 별칭 덕분에 변수 f와 g에 타입 주석을 더 수월하게 붙일 수 있다.

// 함수의 타입, 즉 함수 시그니처를 명시하면 위와 같이 매개변수의 개수나 타입, 반환 타입이 다른 함수를
// 선언하는 잘못을 미연에 방지할 수 있다.
