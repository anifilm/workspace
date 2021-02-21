// 다음 코드는 좀 더 현실적인 콜백 함수 사용 예이다. init 함수는 중간에 매개변수로 받은 callback에 담긴
// 함수 표현식을 실행한다.
export const init = (callback: () => void): void => {
  console.log('default initialization finished.')
  callback()
  console.log('all initialization finished.')
}
