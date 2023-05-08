import { createInterface } from 'readline';

const rl = createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question('숫자을 입력해 주세요: ', (line) => {
  // 입력된 값은 string 타입이다.
  const num = Number(line); // 명시적 형 변환
  // 1000을 더해서 출력
  console.log(num + 1000);
  rl.close();
});
