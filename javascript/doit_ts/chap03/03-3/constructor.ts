// 생성자
// 타입스크립트 클래스는 constructor라는 이름의 특별한 메서드를 포함하는데, 이를 생성자(constructor)
// 라고 한다. 다른 언어와는 다르게 타입스크립트 클래스는 다음과 같은 형태로 클래스의 속성(name, age)을
// 선언할 수 있다.
class Person2 {
  constructor(public name: string, public age?: number) {}
}
let jack2: Person2 = new Person2('Jack', 32);
console.log(jack2); // Person2 { name: 'Jack', age: 32 }


// 타입스크립트는 생성자의 매개변수에 public과 같은 접근 제한자를 붙이면 해당 매개변수의 이름을 가진
// 속성이 클래스에 선언된 것처럼 동작한다. 즉, Person2 클래스는 다음 Person3 클래스처럼 장황하게
// 구현된 것을 함축해서 구현한 것이다.
class Person3 {
  name: string;
  age?: number;
  constructor(name: string, age?: number) {
    this.name = name;
    this.age = age;
  }
}
let jack3: Person3 = new Person3('Jack', 32);
console.log(jack3); // Person3 { name: 'Jack', age: 32 }
