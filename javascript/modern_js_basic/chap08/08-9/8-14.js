// 예제 8-14 메모이제이션

function memorize(f) {
  const cache = {};
  return function (x) {
    if (cache[x] === undefined) cache[x] = f(x);
    return cache[x];
  };
}

function isPrime(n) {
  if (n < 2) return false;
  const m = Math.sqrt(n);
  for (let i = 2; i <= m; i++) {
    if (n % i === 0) return false;
  }
  return true;
}

const isPrime_memo = memorize(isPrime);
const N = 1000;
for (let i = 2; i <= N; i++) {
  isPrime_memo(i);
}
// 쌍둥이 소수의 목록을 출력
for (let i = 2; i+2 <= N; i++) {
  if (isPrime_memo(i) && isPrime_memo(i+2)) console.log(`${i}, ${i+2}`);
}
