// 예제 7.4 정수 n의 팩토리얼을 구하는 함수

function fact(n) {
  let k = 1, i = 1;
  while (i < n) {
    console.log(`i = ${i}, k = ${k}`);
    k *= (++i);
  }
  console.log(`i = ${i}, k = ${k}`);
  return k;
}

fact(5); // 120
console.log(fact(5));
