// 8.11.4 제너레이터

// 제너레이터의 정의와 실행
function* gen() {
  yield 1; // 포인트 1
  yield 2; // 포인트 2
  yield 3; // 포인트 3
}

const iter = gen();
console.log(iter.next()); // Object {value: 1, done: false}
console.log(iter.next()); // Object {value: 2, done: false}
console.log(iter.next()); // Object {value: 3, done: false}
console.log(iter.next()); // Object {value: undefined, done: true}
