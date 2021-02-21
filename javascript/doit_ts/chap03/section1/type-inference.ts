// 타입 추론
let n = 1       // n의 타입을 number로 판단
let b = true    // b의 타입을 boolean으로 판단
let s = 'hello' // s의 타입을 string으로 판단
let o = {}      // o의 타입을 object로 판단

// any 타입 (자바스크립트와 호환을 위해 any라는 이름의 타입을 제공, 값의 타입과 무관하게 어떤 종류의 값도 저장 가능)
let a: any = 0
a = 'hello'
a = true
a = {}

// undefined 타입 (변수를 초기화 하지 않으면 해당 변수는 undefined 값을 가진다. 타입스크립트에서는 undefined는 타입이기도 하고 값이기도 하다.)
let u: undefined = undefined
u = 1 // Type '1' is not assignable to type 'undefined' 오류 발생

// 위에서 선언한 변수 u는 undefined 타입으로 선언되었으므로 오직 undefined 값만 가질 수 있다.
