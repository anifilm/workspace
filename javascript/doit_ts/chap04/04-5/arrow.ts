// 객체를 반환하는 화살표 함수 만들기

// 화살표 함수에서 객체를 반환하고자 할 때 얼핏 다음과 같은 코드를 생각할 수 있다.
// export const makePerson = (name: string, age: number = 10): Person => {name, age}

// 그런데 이렇게 구현하면 컴파일러는 중괄호 {}를 객체가 아닌 복합 실행문으로 해석한다.
// 따라서 컴파일러가 {}를 객체로 해석하게 하려면 다음처럼 객체를 소괄호롤 감싸주어야 한다.
export type Person = { name: string, age: number };

export const makePerson = (name: string, age: number = 10): Person => ({ name, age });
console.log(makePerson('Jack'));     // { name: 'Jack', age: 10 }
console.log(makePerson('Jane', 33)); // { name: 'Jane', age: 33 }
