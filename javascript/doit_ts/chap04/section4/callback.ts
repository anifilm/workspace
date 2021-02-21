// 콜백 함수
// 일급 함수(first-class function)는 프로그래밍 언어가 제공하는 기능이다. 일급 함수 기능을 제공하는
// 언어에서 함수는 '함수 표현식'이라는 일종의 값이다. 따라서 변수에 담을 수 있다. 이 말은 함수 표현식
// 을 매개변수로 받을 수 있다는 것을 의미한다. 이처럼 매개변수 형태로 동작하는 함수를 콜백 함수(callback
// function)라고 한다.

// 다음 코드에서 함수 f는 callback이라는 매개변수가 있는데, 함수 몸통에서 함수로서 호출한다.
const f = (callback: () => void): void => callback()


// 다음 코드는 앞서 구현한 init 함수에 자신이 실행하려는 내용을 익명 함수로 전달한다.
import {init} from './init'
init(() => console.log('custom initialization finished.'))
