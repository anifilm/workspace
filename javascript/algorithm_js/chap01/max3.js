const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

// 세 정수를 입력받아 최대값 구하기
console.log('세 정수의 최대값을 구합니다.');

process.stdout.write("세 개의 정수를 입력하세요: ");

let input = []
rl.on("line", function(line){
  input = line.split(' ').map((el) => parseInt(el));
  rl.close();
})

rl.on("close", function(){
  // 입력 값
  let a = input[0];
  let b = input[1];
  let c = input[2];

  // 연산 본문
  let max = a;
  if (b > max) max = b;
  if (c > max) max = c;

  console.log(`최대값은 ${max}입니다.`);
})
