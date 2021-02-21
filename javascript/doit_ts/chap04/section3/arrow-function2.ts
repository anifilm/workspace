// 표현식 문 스타일의 화살표 함수 구현
// 앞서 function 스타일 함수 isGreater를 화살표 함수로 구현하면 다음과 같다.
const isGreater = (a: number, b: number): boolean => {
  return a > b
}

// 다만, 단순한 내용을 이렇게 구현하는 것은 좀 번거러워서 ESNext와 타입스크립트는 다음 처럼 구현할
// 수 있게 하였다.
const isGreater = (a: number, b: number): boolean => a > b

// 위의 코드는 함수 몸통이 { a > b }가 아니라 단순히 a > b로 구현되어있다. 즉, 함수 몸통이 표현식으로
// 구현되어있다. 그리고 표현식은 값을 반환하는 실행문이므로 return 키워드는 생략되어있다.
