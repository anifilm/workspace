// 예제 7-11 피타고라스의 수 구하기

let n = 20;
for (let i = 1; i <= n; i++) {
  for (let j = 1; j <= n; j++) {
    for (let k = 1; k <= n; k++) {
      if (i*i + j*j === k*k) {
        console.log(`${i}^2 + ${j}^2 = ${k}^2`);
      }
    }
  }
}
