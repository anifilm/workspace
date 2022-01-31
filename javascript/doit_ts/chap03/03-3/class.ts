// 클래스 선언문
// 타입스크립트는 C++나 자바와 같은 객체지향 언어에서 흔히 볼 수 있는 class, private, public,
// protected, implements, extend와 같은 키워드를 제공한다.

// 다음은 클래스 선언문의 기본형태이다.
// class 클래스 이름 {
//   [private | protected | public ] 속성 이름[?]: 속성 타입[...]
// }

// 다음 코드는 name과 age라는 속성을 가진 클래스를 선언한다.
class Person1 {
  name: string;
  age?: number;
}

let jack1: Person1 = new Person1();
jack1.name = 'Jack';
jack1.age = 32;
console.log(jack1); // Person1 { name: 'Jack', age: 32 }

// 접근 제한자
// 클래스의 속성은 public, private, protected와 같은 접근 제한자(access modifier)를 이름 앞에
// 붙일 수 있다. 생략하면 모두 public으로 간주한다.
