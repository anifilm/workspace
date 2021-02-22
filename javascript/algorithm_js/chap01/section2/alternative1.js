// +와 -를 번갈아 출력하기 1
const println = require('./modules/println.js')
const print = require('./modules/print.js')
const prompt = require('prompt-sync')()

println('+와 -를 번갈아 출력합니다.')
let n = Number(prompt('몇 개를 출력할까요?: '))

for (let i = 0; i < n; i++) {  // 반복 n번
  if (i % 2)
    print('-')  // 홀수인 경우 - 출력
  else
    print('+')  // 짝수인 경우 + 출력
}
println()
