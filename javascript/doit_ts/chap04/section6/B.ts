// 클래스 메서드 구문
// 타입스크립트는 클래스 속성 중 함수 표현식을 담는 속성은 function 키워드를 생략할 수 있게 하는
// 단축 구문(shorthand)을 제공한다.
export class B {
  constructor(public value: number = 1) {}
  method(): void {
    console.log(`value: ${this.value}`)
  }
}
