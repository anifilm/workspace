// static 속성
// 다른 객체지향 언어처럼 타입스크립트 클래스는 정적인 속성을 가질 수 있다. 클래스의 정적 속성은
// 다음과 같은 형태로 선언한다.

// class 클래스 이름 {
//   static 정적 속성 이름: 속성 타입
// }

// 다음 코드의 클래스 A는 initValue라는 정적 속성을 가진다. 클래스의 정적 속성은 아래과 같이
// '클래스 이름.정적 속성 이름' 형태의 점 표기법(dot notation)을 사용해 값을 얻거나 설정한다.
class A {
  static initValue = 1
}
let initVal = A.initValue // 1
console.log(initVal)
