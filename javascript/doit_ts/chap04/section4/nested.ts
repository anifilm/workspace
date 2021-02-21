// 중첩 함수
// 함수형 언어에서 함수는 변수에 담긴 함수 표현식이므로 함수 안에 또 다른 함수를 중접(nested)해서
// 구현할 수 있다.

// 다음 코드에서 calc 함수는 add와 multiply라는 이름의 중첩 함수를 구현하고 있다.
const calc = (value: number, cb: (number) => void): void => {
  let add = (a, b) => a + b
  function multiply(a, b) { return a * b }

  let result = multiply(add(1, 2), value)
  cb(result)
}
calc(30, (result: number) => console.log(`result is ${result}`)) // result is 90
