// 인터페이스 선언문
// 타입스크립트는 객체의 타입를 정의할 수 있게 하는 interface라는 키워드를 제공
// 인터페이스는 객체의 타입을 정의하는 것이 목적이므로 다음처럼 객체를 의미하는 중괄호
// {} 로 속성과 속성의 타입 주석을 나열하는 형태로 사용

// interface 인터페이스 이름 {
//   속성 이름[?]: 속성 타입[,...]
// }

// 인터페이스 구문 예
interface IPerson {
  name: string;
  age: number;
}

// 인터페이스의 조건을 벗어나는 예
interface IPerson {
  name: string;
  age: number;
}
let good: IPerson = { name: 'Jack', age: 32 };

let bad1: IPerson = { name: 'Jack' }; // age 속성이 없으므로 오류
let bad2: IPerson = { age: 32 };      // name 속성이 없으므로 오류
let bad3: IPerson = {};               // name과 age 속성이 없으므로 오류
let bad4: IPerson = { name: 'Jack', age: 32, etc: true }; // etc 속성이 있어서 오류

// 선택 속성 구문
// 인터페이스 설계시 어떤 속성은 반드시 있어야 하지만, 어떤 속성은 있어도 되고 없어도 되는 형태로 만들고
// 싶을 때개 있다. 이러한 속성을 선택 속성(optional property)이라고 한다.
// 다음 코드에서 속성 이름 뒤에 물음표 기호를 붙여서 만들 수 있다.

// etc가 선택 속성인 IPerson2
interface IPerson2 {
  name: string;  // 필수 속성
  age: number;   // 필수 속성
  etc?: boolean; // 선택 속성
}
let good1: IPerson2 = { name: 'Jack', age: 32 };
let good2: IPerson2 = { name: 'Jack', age: 32, etc: true };

// 익명 인터페이스
// 타입스크립트는 interface 키워드도 사용하지 않고 인터페이스의 이름도 없는 익명 인터페이스
// (anonymous inteface)를 만들 수 있다. 다음 코드에서 변수 ai는 앞에서 선언한 IPerson2 인터페이스와
// 같은 구성이지만, 익명 인터페이스로 선언 되었다.

// 익명 인터페이스 예
let ai: {
  name: string;
  age: number;
  etc?: boolean;
} = { name: 'Jack', age: 32 };

// 함수에 사용된 익명 인터페이스 예
function printMe(me: { name: string, age: number, etc?: boolean }) {
  console.log(me.etc ? `${me.name} ${me.age} ${me.etc}` : `${me.name} ${me.age}`);
}
printMe(ai); // Jack 32
