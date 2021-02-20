const readline = require('readline');

// 인터페이스 객체를 만들자.
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let N;

let count = 0; // 몇번째 라인을 입력 받는지를 저장하는 변수
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
    console.log(arr); // 테스트용

    // min, max를 출력은 스스로 해보시기 바랍니다.
}
