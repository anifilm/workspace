// 추상 클래스
// 타입스크립트는 다른 언어처럼 abstract 키워드를 사용해 추상 클래스를 만들 수 있다.
// 추상 클래스는 다음처럼 abstract 키워드를 class 키워드 앞에 붙여서 만든다. 추상 클래스는
// 자신의 속성이나 메서드 앞에 abstract를 붙여 나를 상속하는 다른 클래스에서 이 속성이나
// 메서드를 구현하게 한다.

// abstract class 클래스 이름 {
//   abstract 속성 이름: 속성 타입
//   abstract 메서드 이름() {}
// }

// 추상 클래스로 정의된 클래스는 new 연산자를 적용해 객체를 생성할 수 없다.

// 추상 클래스 예
abstract class AbstractPerson5 {
  abstract name: string;
  constructor(public age?: number) {}
}
