// 매개변수 기본값 지정하기
// 앞서 선택정 매개변수를 설명했다. 선택적 매개변수는 항상 그 값이 undefined로 고정된다. 만일, 함수
// 호출 시 인수를 전달하지 않더라도 매개변수에 어떤 값을 설정하고 싶다면 매개변수의 기본값을 지정할
// 수 있다. 이를 디폴트 매개변수(default parameter)라고 하고 다음과 같은 형태로 사용한다.

// (매개변수: 타입 = 매개변수 기본값)

// 세번째 행의 makePerson 함수는 호출 때 매개변수 age에 해당하는 값을 전달받지 못하면 기본으로 10이
// 설정된다.
export type Person = { name: string, age: number };

export const makePerson = (name: string, age: number = 10): Person => {
  const person = { name: name, age: age };
  return person;
};
console.log(makePerson('Jack'));     // { name: 'Jack', age: 10 }
console.log(makePerson('Jane', 33)); // { name: 'Jane', age: 33 }
