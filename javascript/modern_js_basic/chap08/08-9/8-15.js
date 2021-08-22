// 예제 8-15 피보나치 수열을 만드는 함수의 메모이제이션

function memorize(f) {
  const cache = {};
  return function (x) {
    if (cache[x] === undefined) cache[x] = f(x);
    return cache[x];
  };
}

const fibonacci = memorize(function (n) {
  if (n < 2) return n;
  return fibonacci(n-1) + fibonacci(n-2);
});

for (let i = 0; i <= 20; i++) {
  console.log((' ' + i).slice(-2) + ':' + fibonacci(i));
}
