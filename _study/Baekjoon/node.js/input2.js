// 두 수를 공백으로 입력
// 입력: 1 2
// 출력: 3
const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
let input = [];
rl.on('line', function (line) {
    input = line.split(' ')
    .map((el) => parseInt(el));
})
.on('close', function () {
    console.log(input[0] + input[1]);
    process.exit();
});
