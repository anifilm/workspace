// 앞서 구현한 add는 NumberToNumberFunc 타입의 값을 반환하는 함수이므로 다음과 같은 코드를
// 작성할 수 있다. 그런데 변수 fn에 담긴 값은 NumberToNumberFunc 타입의 함수 표현식이므로
// 다음 다섯번째 행처럼 fn 뒤에 함수 호출 연산자를 붙일 수 있다.
import { NumberToNumberFunc, add } from './add';

let fn: NumberToNumberFunc = add(1);

let result = fn(2);
console.log(result);    // 3
console.log(add(1)(2)); // 3
