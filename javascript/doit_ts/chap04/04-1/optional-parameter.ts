// 선택적 매개변수
// 앞에서 인터페이스의 선택 속성을 설명했다. 함수의 매개변수에도 다음처럼 이름 뒤에 물은표를
// 붙일 수 있으며, 이를 선택적 매개변수(optional parameter)라고 한다.

// funtion fn(arg1: string, arg?: number): void {}

// 선택적 매개변수는 다음 코드와 같이 함수 호출을 모두 가능하게 하고 싶을 때 사용한다.
function fn(arg1: string, arg?: number) {
  console.log(`arg: ${arg}`);
}

fn('hello', 1); // arg: 1
fn('hello');    // arg: undefined

// 선택적 매개변수가 있는 함수의 시그니처는 다음처럼 타입 뒤에 물음표를 붙인다.
type OptionalArgFunc = (string, number?) => void;
