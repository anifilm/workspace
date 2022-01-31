// 잔여 연산자
// ESNext 자바스크립트와 타입스크립트는 점을 연이어 3개 사용하는 ... 연산자를 제공한다.
// 이 연산자는 사용되는 위치에 따라 잔여 연산자(rest operator) 혹은 전개 연산자(spread operator)
// 하고 부른다.

// 잔여 연산자 예
let address: any = {
  country: 'Korea',
  city: 'Seoul',
  address1: 'Gangnam-gu',
  address2: 'Sinsa-dong 123-456',
  address3: '789 street, 2 Floor ABC building',
};
const { country, city, ...detail } = address;
console.log(detail);
/* 실행 결과
  { address1: 'Gangnam-gu',
    address2: 'Sinsa-dong 123-456',
    address3: '789 street, 2 Floor ABC building' }
*/

// 전개 연산자
// 다음 코드에서는 두 객체 앞에 모두 점 3개가 붙어있다. 그런데 주의 깊게 보면 이 코드는 앞서 설명한
// 비구조화 할당문이 아님을 알 수 있다. 점 3개 연산자가 비구조화 할당문이 아닌 곳에서 사용될 때
// 이를 전개 연산자(spread operator)라고 한다.

// 전개 연산자 예
let coord = { ...{ x: 0 }, ...{ y: 0 } };
console.log(coord); // { x: 0, y: 0 }

// 전개 연산자는 의미 그대로 객체의 속성을 모두 '전개'해 해로운 객체로 만들어 준다. 다음 코드는
// part1, part2, part3이라는 세 개의 객체가 선언되어있다. 만일, 이를 모두 통합(merge)한 새로운
// 객체를 만들고 싶다면 전개 연산자를 사용한다.
let part1 = { name: 'Jane' };
let part2 = { age: 22 };
let part3 = { city: 'Seoul', county: 'kr' };

let merged = { ...part1, ...part2, ...part3 };
console.log(merged); // { name: 'Jane', age: 22, city: 'Seoul', county: 'kr' }
