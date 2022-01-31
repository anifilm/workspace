// 타입 단언
// 타입스크립트는 독특하게 타입 변환이 아닌 타입 단언(type assertion)이라는 용어를 사용한다.

// 타입 단언문은 다음 두가지 형태가 있다.
// (<타입>객체)
// (객체 as 타입)

// 이들은 모두 ES5 자바스크립트 구문이 아니다. 따라서 자바스크립트의 타입 변환 구문과 구분하기 위해
// 타입 단언이라는 용어를 사용한다.

// 다음은 INameable 타입 객체로 변환하여 자신에게 담긴 객체의 name 속성값을 얻는다.
import INameable from './INameable';

let obj: object = { name: 'Jack' };

let name1 = (<INameable>obj).name;
let name2 = (obj as INameable).name;

console.log(name1, name2); // Jack Jack
