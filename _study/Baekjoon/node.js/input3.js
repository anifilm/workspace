// 두줄 이상 입력시
// 입력: 1
// 입력: 2
// 입력: 3
// Ctrl + d
const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});
let input = [];
rl.on('line', function (line) {
    input.push(line);
})
.on('close', function () {
    console.log(input);
    process.exit();
});
