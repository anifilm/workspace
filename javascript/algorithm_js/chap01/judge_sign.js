const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

// 입력받은 정수값의 부호(양수, 음수, 0) 출력하기
process.stdout.write("정수를 입력하세요: ");

let input = []
rl.on("line", function(line){
  input = line.split(' ').map((el) => parseInt(el));
  rl.close();
})

rl.on("close", function(){
  // 입력 값
  let n = input[0];

  // 연산 본문
  if (n > 0)
    console.log('이 수는 양수입니다.')
  else if (n < 0)
    console.log('이 수는 음수입니다.')
  else
    console.log('이 수는 0입니다.')
})
