// 객체의 비구조화 할당문

// 다음 코드는 name과 age라는 단어가 각기 다른 의미로 사용되므로 personName, companyName 처럼
// 이 둘을 구분하고 있다.

// 구조화가 필요한 코드 예
let personName = 'Jack';
let personAge = 32;

let companyName = 'Apple Company, Inc';
let companyAge = 43;

// 그런데 코드를 위와 같은 방식으로 구현하면 작성하기도 번거롭고 기능을 확장하기 어렵다.
// 따라서 다음처럼 인터페이스나 클래스를 사용해 관련된 정보를 묶어 새로운 타입으로 표현한다.
// 이를 구조화(structuring)라고 한다.

// 코드를 이처럼 구조화하면 다음 코드에서 보듯 jack이나 apple은 물론 jane이나 ms와 같은 비슷한 유형의
// 변수를 쉽게 만들 수 있다. 이로서 코드의 기능 확장이 수월해진다.
import { IPerson, ICompany } from './IPerson_ICompany';

let jack: IPerson = { name: 'Jack', age: 32 },
    jane: IPerson = { name: 'Jane', age: 28 };

let apple: ICompany = { name: 'Apple Computer, Inc', age: 43 },
    ms: ICompany = { name: 'Microsoft', age: 44 };
