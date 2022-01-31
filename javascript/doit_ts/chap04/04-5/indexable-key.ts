// 색인 키와 값으로 객체 만들기

// ESNext 자바스크립트에서는 다음과 같은 코드를 작성할 수 있다.
const makeObject = (key, value) => ({ [key]: value });

// 이 코드는 다음처럼 객체의 속성 이름을 변수로 만들려고 할 때 사용한다. 즉, [key] 부분이 'name'이면
// {name: value} 형태, 'firstName'이면 {firstName: value} 형태의 객체를 생성한다.
const makeObject = (key, value) => ({ [key]: value });
console.log(makeObject('name', 'Jack'));      // { name: 'Jack' }
console.log(makeObject('firstName', 'Jane')); // { firstName: 'Jane'}

// 타입스크립트에서는 {[key]: value} 형태의 타입을 '색인 가능 타입(indexable type)'이라고 하며,
// 다음과 같은 형태로 key와 value의 타입을 명시한다.

// 다음 코드는 색인 가능 타입을 사용해 속성 이름만 다른 객체를 만드는 예이다.
export type KeyValueType = {
  [key: string]: string;
};
export const makeObject = (key: string, value: string): KeyValueType => ({ [key]: value });

console.log(makeObject('name', 'Jack'));      // { name: 'Jack' }
console.log(makeObject('firstName', 'Jane')); // { firstName: 'Jane'}
