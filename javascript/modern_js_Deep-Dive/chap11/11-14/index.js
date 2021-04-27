// 예제 11-14
const o = { x: { y: 1 } };
// 얕은 복사
const c1 = { ...o };
console.log(c1 === o); // false
console.log(c1.x === o.x); // true

// lodash의 cloneDeep을 사용한 깊은 복사
// "npm install lodash"로 lodash를 설치한 후, Node.js 환경에서 실행
const _ = require('lodash');

// 깊은 복사
const c2 = _.cloneDeep(o);
console.log(c2 === o); // false
console.log(c2.x === o.x); // false

// 예제 11-15
const v = 1;
// "깊은 복사"라고 부르기도 한다.
const c1 = v;
console.log(c1 === v); // true

const o = { x: 1 };
// "얕은 복사"라고 부르기도 한다.
const c2 = o;
console.log(c2 === o); // true
