// 타입 변환
// 타입이 있는 언어들은 특정 타입의 변수값을 다른 타입의 값으로 변환할 수 있는 기능을 제공한다.
// 이를 타입 변환(type conversion)이라고 한다.

// 다음은 타입 변환이 필요한 예이다.
let person: object = {name: "Jack", age: 32}
// person.name // person 변수의 타입은 object. object 타입은 name 속성을 가지지 않으므로 오류 발생

// 다음은 위의 오류 타입 변환 구문을 사용해 해결한 것이다.
// person 변수를 일시적으로 name 속성이 있는 타입, 즉 {name: string} 타입으로 변환해 person.name
// 속성값을 얻게 한다.
(<{name: string}>person).name
