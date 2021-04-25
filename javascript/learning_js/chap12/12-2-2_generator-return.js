// 12.2.2 제너레이터와 return

/*
yield 문은, 제너레이터의 마지막 문이더라도 제너레이터를 끝내지 않는다.
제너레이터에서 return 문을 사용하면 그 위치와 관계없이 done은 true가 되고,
value 프로퍼티는 return이 반환하는 값이 된다.
*/

function* abc() {
  yield 'a';
  yield 'b';
  return 'c';
}

const it = abc();
it.next(); // { value: 'a', done: false }
it.next(); // { value: 'b', done: false }
it.next(); // { value: 'c', done: true }

/*
위와 같은 동작 방식이 정확하기는 하지만, 제너레이터를 사용할 때는 보통 done이 true이면
value 프로퍼티에 주의를 기울이지 않는다는 점을 염두해야 한다.
예를 들어 이 제너레이터를 for...of 루프에서 사용하면 c는 절대 출려되지 않는다.
*/

// "a"와 "b"는 출력되지만 "c"는 출력되지 않는다.
for (let l of abc()) {
  console.log(l);
}

/*
CAUTION_ 제너레이터에서 중요한 값을 return으로 반환하려하면 안된다. 제너레이터가 반환하는
값을 사용하려 할 때는 yield를 사용해야 하고, return은 제너레이터를 중간에 종료하는
목적으로만 사용해야 한다.
따라서 제너레이터에 return을 사용할 때는 반환값을 쓰지 않는 것을 권장한다.
*/
