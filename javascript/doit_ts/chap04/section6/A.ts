// function 함수와 this 키워드
// 타입스크립트의 function 키워드로 만든 함수는 Function이란 클래스의 인스턴스, 즉 함수는 객체이다.
// 객체지향 언어에서 인스턴스는 this 키워드를 사용할 수 있다. 타입스크립트에서는 function 키워드로
// 만든 함수에 this 키워드를 사용할 수 있다. 반면에 화살표 함수에는 this 키워드를 사용할 수 없다.

// 메서드란?
// 타입스크립트에서 메서드(method)는 function으로 만든 함수 표현식을 담고 있는 속성이다.
// 다음 코드에서 클래스 A는 value와 method라는 두 개의 속성을 가진다. value에는 1이라는 값을
// 설정하지만, method는 () => void 타입의 함수 표현식을 설정한다. 여기서 method 구현 내용 중
// 특이한 부분은 this.value 부분이다.
export class A {
  value: number = 1
  method: () => void = function(): void {
    console.log(`value: ${this.value}`)
  }
}
