// 비구조화란?
// 구조화된 데이터는 어떤 시점에서 데이터의 일부만 사용해야 할 때가 있다. 다음 코드는 구조화된
// jack 변수에서 jack이 아닌 jack.name, jack.age 부분을 각각 name과 age 변수에 저장한다.
// 그런데 이 시점부터는 jack 변수는 더 이상 사용하지 않고 그 대신 name과 age 변수만 사용한다.
// 이처럼 구조화된 데이터를 분해하는 것을 비구조화(destructuring)라고 한다.
let name = jack.name, age = jack.age;

// 비구조화 할당
// 비구조화 할당(destructuring)은 ESNext 자바스크립의 구문으로 타입스크립트에서도 사용할 수 있다.
// 비구조화 할당은 객체와 더불어 chap05에서 설명하는 배열과 튜플에도 적용할 수 있다.
// 비구조화 할당을 객체에 적용하려면 얻고 싶은 속성을 중괄호로 묶는다.
let { name, age } = jack;

// 영어 destructuring을 '비구조화'가 아닌 '비구조화 할당'으로 번역한 이유는 다음 코드에서 보듯
// name과 age 변수가 새롭게 만들어지고, name 변수는 jack.name의 값, age 변수는 jack.age의 값을
// 각각 초기값으로 할당받기 때문이다.
import { IPerson } from './IPerson_ICompany';

let jack: IPerson = { name: 'Jack', age: 32 };
let { name, age } = jack;
console.log(name, age); // Jack 32
