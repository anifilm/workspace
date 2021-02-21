// 표현식과 표현식 문의 차이
let a = 1, b = 0
if (a > b) console.log('a is greater than b')
const isGreater = (a: number, b: number): boolean => a > b

// 위의 코드에서 두번째 행에 있는 a > b 코드는 c언어에서 '표현식'이라고 했기 때문에 그 이후
// 만들어진 프로그래밍 언어들도 c언어와 같은 의미로 표현식이라고 생각한다. 따라서 c언어 관점에서
// 실행문의 일부일 뿐 그 자체가 실행문인 것은 아니다.
// 반면에 표현식 지향 언어 관점에서 세번째 행의 a > b 코드는 그 자체가 실행문(statement)이다.

// 결론적으로 '표현식(expression)'이란 용어는 두 가지 형태로 사용되는데, 이 둘을 구분하고자
// 표현식(expression)과 표현식 문(expression statement)으로 구분한 것이다.
