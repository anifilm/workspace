// undefined 관련 주의 사항
// undefined 타입은 타입스크립트의 타입 계층도에서 모든 타입 중 최하위 타입이다.
// 다음은 undefined 타입을 고려하지 않은 예이다.
interface INameable {
  name: string;
}
function getName(o: INameable) {
  return o.name;
}

let n = getName(undefined); // 오류 발생
console.log(n);

// 위의 코드에서 getName은 INameable 타입의 매개변수를 요구하지만, INameable 타입 객체가 아니라
// undefined를 매개변수로 호출해도 구문 오류가 발생하지 않는다. 즉, undefined는 최하위 타입이므로
// INameable을 상속하는 자식 타입으로 간주한다.
// 하지만 코드를 실행해 보면 o.name 부분이 undefined.name이 되어 'Cannot read property 'name' of
// undefined'라는 오류가 발생한다. 이런 오류를 방지하려면 매개변수 값이 undefined인지 판별하는 코드를
// 작성해야 한다.

// 다음 코드에서 getName 함수의 몸통은 매개변수 o의 값이 undefined일 때를 고려한 예이다.
interface INameable {
  name: string;
}
function getName(o: INameable) {
  return o != undefined ? o.name : 'unknown name';
}

let n = getName(undefined);
console.log(n); // unknown name
console.log(getName({ name: 'Jack' })); // Jack

// 만일, 인터페이스에 선택 속성이 있다면 다음처럼 구현해야 한다.
interface IAgeable {
  age?: number;
}
function getAge(o: IAgeable) {
  return o != undefined && o.age ? o.age : 0;
}

console.log(getAge(undefined)); // 0
console.log(getAge(null)); // 0
console.log(getAge({ age: 32 })); // 32

/* undefined와 null
자바스크립트에서는 undefined 외에도 null이라는 키워드가 있다. 과거와 달리 ESNext 자바스크립트와
타입스크립트에서 이 두 값은 완전히 같다.
*/
