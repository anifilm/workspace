// 인터페이스 구현
// 다른 객체지향 언어와 마찬가지로 타입스크립트 클래스는 인터페이스를 구현할 수 있다.
// 클래스가 인터페이스를 구현할 때는 다음처럼 implements 키워드를 사용한다.

// class 클래스 이름 implements 인터페이스 이름 {
//   ...
// }

// 인터페이스 구현 예
interface IPerson4 {
  name: string
  age?: number
}

class Person4 implements IPerson4 {
  name: string
  age: number
}

// 다음 코드는 앞서 본 Person2 구현 방식(생성자와 public 키워드 사용)을 인터페이스 구현에 응용한 것이다.
interface IPerson4 {
  name: string
  age?: number
}

class Person4 implements IPerson4 {
  constructor(public name: string, public age?: number) {}
}
let jack4: IPerson4 = new Person4('Jack', 32)
console.log(jack4) // Person4 { name: 'Jack', age: 32 }
