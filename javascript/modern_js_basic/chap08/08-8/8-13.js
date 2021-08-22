// 예제 8-13 피보나치 수열을 구하는 함수

function fibonacci(n) {
  if (n < 2) return n;
  if (!(n in fibonacci)) {
    fibonacci[n] = fibonacci(n-1) + fibonacci(n-2);
  }
  return fibonacci[n];
}

for (let i = 0; i <= 20; i++) {
  console.log((' ' + i).slice(-2) + ':' + fibonacci(i));
}
