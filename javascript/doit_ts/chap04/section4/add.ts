// add 함수가 반환하는 _add는 NumberToNumberFunc 타입이다. 고차 함수는 이처럼 중첩 함수를 반환할
// 수 있다.

// 이제 최종적으로 _add의 몸통을 구현하면 다음처럼 add라는 이름의 고차함수가 완성된다.
export type NumberToNumberFunc = (number) => number
export const add = (a: number): NumberToNumberFunc => {
  const _add: NumberToNumberFunc = (b: number): number => {
    return a + b // 클로저
  }
  return _add
}

// 네번째 행이 흥미로운 것은 a는 add 함수의 매개변수이고 b는 _add 함수의 매개변수라는 사실이다.
// 즉, _add 함수의 관점에서만 보면 a는 외부에 선언된 병수이다. 함수형 프로그래밍 언어에서는
// 네번재 행과 같은 형태를 클로저(closure)라고 한다. 고차 함수는 이 클로저 기능이 반드시 필요하다.
