const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

// 시퀀스 요소의 최대값 출력하기
console.log("요소 수를 입력하세요.");
let N;
let count = 0;
rl.on("line", function(line){
  if(count == 0)
    N = Number(line.trim());
  else if(count == 1){
    get_Min_Max(line.trim());
    rl.close();
  }
  count++;
})

function get_Min_Max(input){
  let arr = input.split(' ').map((num) => parseInt(num));
  console.log(arr); // 입력값 확인

  console.log(`최대값은 ${max_of(arr)}입니다.`);
}

function max_of(a){
  /* 시퀀스형 a 원소의 최대값을 반환 */
  max = a[0]
  for(let i = 1; i < a.length; i++){
    if (a[i] > max) max = a[i]
  }
  return max
}
