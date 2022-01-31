// 객체 생성 시 값 부분을 생략할 수 있는 타입스크립트 구문
// 타입스크립트는 다음처럼 매개변수의 이름과 똑같은 이름의 속성을 가진 객체를 만들 수 있다.
// 이때 속성값 부분을 생략할 수 있는 단축 구문(shorthand)을 제공한다.
export type Person = { name: string, age: number };

export const makePerson = (name: string, age: number = 10): Person => {
  const person = { name, age }; // {name: name, age: age}의 단축 표현
  return person;
};
console.log(makePerson('Jack'));     // { name: 'Jack', age: 10 }
console.log(makePerson('Jane', 33)); // { name: 'Jane', age: 33 }
