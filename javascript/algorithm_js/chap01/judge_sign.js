// 입력받은 정수값의 부호(양수, 음수, 0) 출력하기
const prompt = require('prompt-sync')();

let n = Number(prompt("정수를 입력하세요: "));

// 연산 본문
if (n > 0)
  console.log('이 수는 양수입니다.')
else if (n < 0)
  console.log('이 수는 음수입니다.')
else
  console.log('이 수는 0입니다.')
