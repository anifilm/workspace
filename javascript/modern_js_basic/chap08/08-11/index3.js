// 8.11.3 이터레이터와 for/of 문

// 이터레이션
var arr = [5, 4, 3];
//arr.forEach(function (val) { console.log(val); });
arr.forEach((val) => { console.log(val); });
// 5
// 4
// 3

// 배열의 Symbol.iterator 메서드는 이터레이터를 반환하는 함수
var arr = [5, 4, 3];
var iter = arr[Symbol.iterator]();
console.log(iter.next()); // Object {value: 5, done: false}
console.log(iter.next()); // Object {value: 4, done: false}
console.log(iter.next()); // Object {value: 3, done: false}
console.log(iter.next()); // Object {value: undefined, done: true}
console.log(iter.next()); // Object {value: undefined, done: true}


// 반복 가능한 객체와 for/of 문

// 배열 요소를 이터레이터를 사용해서 목록으로 바꾸려면
var arr = [5, 4, 3];
var iter = arr[Symbol.iterator]();
while (true) {
  let iteratorResult = iter.next();
  if (iteratorResult.done === true) break;
  let v = iteratorResult.value;
  console.log(v);
}
// 5
// 4
// 3

// 위의 구문을 for/of 문을 사용하여 작성시
var arr = [5, 4, 3];
for (let v of arr) {
  console.log(v);
}
// 5
// 4
// 3

// 주어진 이터레이터를 반복 처리하려면 다음과 같이 반복 가능(이터러블)할 객체를 생성해야 한다.
var arr = ['A', 'B', 'C'];
var iter = arr[Symbol.iterator]();

var iterable = {};
//iterable[Symbol.iterator] = function () { return iter; };
iterable[Symbol.iterator] = () => { return iter; };
for (let v of iterable) {
  console.log(v);
}
// A
// B
// C
