// 12.1 이터레이션 프로토콜

// 피보나치 수열 예제

class FibonacciSequence {
  [Symbol.iterator]() {
    let a = 0, b = 1;
    return {
      next() {
        let rval = { value: b, done: false };
        b += a;
        a = rval.value;
        return rval;
      }
    };
  }
}

const fib = new FibonacciSequence();
let i = 0;
for (let n of fib) {
  process.stdout.write(n + ' ');
  if (i++ > 9) break;
}
console.log();
