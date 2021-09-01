// 예제 8-21 m부터 n까지의 정수 값을 순서대로 꺼내는 이터레이터를 생성하는 제너레이터

function* createNumbers(from, to) {
  while (from <= to) {
    yield from++;
  }
}

const iter = createNumbers(10, 20);
for (let v of iter) {
  console.log(v); // 10, 11, 12, ..., 20
}
