const readline = require('readline');

// 인터페이스 객체를 만들자.
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

console.log("정수 세 개를 입력하세요.");

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

  console.log(`최대값은 ${max} 입니다.`);
})
