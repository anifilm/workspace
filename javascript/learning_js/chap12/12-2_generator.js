// 12.2 제너레이터

// 제너레이터(generator)란 이터레이터를 사용해 자신의 실행을 제어한 함수이다.

/*
제너레이터는 두 가지 예외를 제외하면 일반적인 함수와 같다.
 - 제너레이터는 언제든 호출자에게 제어권을 넘길(yield) 수 있다.
 - 제너레이터는 호출한 즉시 실행되지는 않는다. 대신 이터레이터를 반환하고, 이터레이터의 next 메서드를 호출함에 따라 실행된다.

제너레이터를 만들 때는 function 키워드 뒤에 애스터리스크(*)를 붙인다.
이것을 제외하면 문법은 일반적인 함수와 같다.
제너레이터에서는 return 외에 yield 키워드를 사용할 수 있다.
*/

// 무지개 색깔을 반환하는 단순한 제너레이터 예제
function* rainbow() { // * 기호는 제너레이터 문법
  yield 'red';
  yield 'orange';
  yield 'yellow';
  yield 'green';
  yield 'blue';
  yield 'indigo';
  yield 'violet';
}

const it = rainbow();
it.next(); // { value: 'red', done: false }
it.next(); // { value: 'orange', done: false }
it.next(); // { value: 'yellow', done: false }
it.next(); // { value: 'green', done: false }
it.next(); // { value: 'blue', done: false }
it.next(); // { value: 'indigo', done: false }
it.next(); // { value: 'violet', done: false }
it.next(); // { value: undefined, done: false }

// rainbow 제너레이터는 이터레이터를 반환하므로 for...of 루프에서 사용 가능하다.
for (let color of rainbow()) {
  console.log(color);
}
