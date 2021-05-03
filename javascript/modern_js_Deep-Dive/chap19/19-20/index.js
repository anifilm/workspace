// 19.5 프로토타입의 생성 시점

// 19.5.1 사용자 정의 생성자 함수와 프로토타입 생성 시점

// 예제 19-20
// 함수 정의(constructor)가 평가되어 함수 객체를 생성하는 시점에 프로토타입도 더불어 생성된다.
console.log(Person.prototype); // { constructor: ƒ }

// 생성자 함수
function Person(name) {
  this.name = name;
}

// 예제 19-21
// 화살표 함수는 non-constructor다.
const Person = name => {
  this.name = name;
}

// non-constructor는 프로토타입이 생성되지 않는다.
console.log(Person.prototype); // undefined
