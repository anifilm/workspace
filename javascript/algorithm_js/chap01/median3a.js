const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

// 세 정수값을 입력받아 중앙값을 구하기 2
console.log('세 정수의 중앙값을 구합니다.');

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

  console.log(`중앙값은 ${med3(a, b, c)}입니다.`);
})

function med3(a, b, c) {
  /* a, b, c의 중앙값을 구하여 반환(다른 방법) */
  if ((b >= a && c <= a) || (b <= a && c >= a))
    return a
  else if ((a > b && c < b) || (a < b && c > b))
    return b
  return c
}
