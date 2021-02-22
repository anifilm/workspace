// 1부터 n까지의 합 구하기 2 (for 문)
const println = require('./modules/println.js')
const prompt = require('prompt-sync')()

println('1부터 n까지 정수의 합을 구합니다.')
let n = Number(prompt('n값을 입력하세요: '))

let sum = 0
for (let i = 1; i < n + 1; i++)
    sum += i;  // sum에 i를 더함

println(`1부터 ${n}까지 정수의 합은 ${sum}입니다.`)
