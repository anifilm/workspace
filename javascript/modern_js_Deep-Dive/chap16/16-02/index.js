// 16.2 프로퍼티 어트리뷰트와 프로퍼티 디스크립터 객체

/*
자바스트립트 엔진은 프로퍼티를 생성할 때 프로퍼티의 상태를 나타내는 프로퍼티 어트리뷰트를 기본값으로 자동 정의한다.

프로퍼티의 상태란
value :        프로퍼티의 값
writable :     값의 갱신 가능 여부
enumerable :   열거 가능 여부
configurable : 재정의 가능 여부
를 말한다.

*/

// 예제 16-02
const person = {
  name: 'Lee'
};

// 프로퍼티 어트리뷰트 정보를 제공하는 프로퍼티 디스크립터 객체를 반환한다.
console.log(Object.getOwnPropertyDescriptor(person, 'name'));
// { value: "Lee", writable: true, enumerable: true, configurable: true }

// 예제 16-03

// 프로퍼티 동적 생성
person.age = 20;

// 모든 프로퍼티의 프로퍼티 어트리뷰트 정보를 제공하는 프로퍼티 디스크립터 객체를 반환한다.
console.log(Object.getOwnPropertyDescriptors(person));
/*
{
  name: { value: "Lee", writable: true, enumerable: true, configurable: true },
  age: { value: 20, writable: true, enumerable: true, configuragle: true }
}
*/
