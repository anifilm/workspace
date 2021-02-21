// 클래스의 상속
// 객체지향 언어는 부모 클래스를 상속받는 상속 클래스를 만들 수 있는데, 타입스크립트는 다음처럼
// extends 키워드를 사용해 상속 클래스를 만든다.

// class 상속 클래스 extends 부모 클래스 { ... }

// 다음 Person5 클래스는 AbstractPerson5 추상 클래스를 상속해 AbstractPerson5가 구현한 age를
// 얻고, AbstractPerson5를 상속받는 클래스가 구현해야할 name 속성을 구현해야 한다.
// 참고로 타입스크립트에서는 부모 클래스의 생성자를 super 키워드로 호출할 수 있다.
abstract class AbstractPerson5 {
  abstract name: string
  constructor(public age?: number) {}
}

class Person5 extends AbstractPerson5 {
  constructor(public name: string, age?: number) {
    super(age)
  }
}
let jack5: Person5 = new Person5('Jack', 32)
console.log(jack5) // Person5 { name: 'Jack', age: 32 }
