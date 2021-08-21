// 예제 2-1 팩토리얼을 계산하고 표시하기

function fact(n) {
  if (n <= 1) return n;
  return n * fact(n-1);
}

for (let i = 1; i < 10; i++) {
  console.log(i + '! = ' + fact(i));
}
