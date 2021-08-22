// 예제 8-20 배열의 이터레이터를 반환하는 함수

function makeIterator(arr) {
  let index = 0;
  return {
    next: function () {
      if (index < arr.length) {
        return { value: arr[index++], done: false };
      } else {
        return { value: undefined, done: true };
      }
    }
  };
}

const iter = makeIterator(['A', 'B', 'C']);
console.log(iter.next()); // Object {value: 'A', done: false}
console.log(iter.next()); // Object {value: 'B', done: false}
console.log(iter.next()); // Object {value: 'C', done: false}
console.log(iter.next()); // Object {value: undefined, done: true}
