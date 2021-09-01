// 예제 8-23 피보나치 수열 열거하기

function* fibonacci() {
  let fn1 = 0, fn2 = 1;
  while (true) {
    let fnew = fn1 + fn2;
    fn1 = fn2;
    fn2 = fnew;
    reset = yield fn1;
    if (reset) {
      fn1 = 0; fn2 = 1;
    }
  }
}

const iter = fibonacci();
for (let i = 0; i < 10; i++) {
  console.log(iter.next().value); // 1, 1, 2, 3, 5, ..., 55
}
console.log(iter.next().value); // 89

console.log(iter.next(true).value); // 1
console.log(iter.next().value); // 1
console.log(iter.next().value); // 2
