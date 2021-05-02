// arguments 객체의 Symbol (Symbol.iterator) 프로퍼티

/*
arguments 객체의 Symbol(Symbol.iterator) 프로퍼티는 arguments 객체를 순회 가능한 자료구조인 이터러블(iterable)로 만들기 위한 프로퍼티다. Symbol.iterator를 프로퍼티 키로 사용한 메서드를 구현하는 것에 의해 이터러블이 된다.
*/

// 예제 18-05
function multiply(x, y) {
  // 이터레이터
  const iterator = arguments[Symbol.iterator]();

  // 이터레이터의 next 메서드를 호출하여 이터러블 객체 arguments를 순회
  console.log(iterator.next()); // { value: 1, done: false }
  console.log(iterator.next()); // { value: 2, done: false }
  console.log(iterator.next()); // { value: 3, done: false }
  console.log(iterator.next()); // { value: undefined, done: true }

  return x * y;
}

console.log(multiply(1, 2, 3));
