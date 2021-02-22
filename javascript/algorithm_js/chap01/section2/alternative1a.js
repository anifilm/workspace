// +와 -를 번갈아 출력하기 1 (for 문 수정)
const {print, println} = require('./modules/print')
const prompt = require('prompt-sync')()

println('+와 -를 번갈아 출력합니다.')
let n = Number(prompt('몇 개를 출력할까요?: '))

for (let i = 1; i < n + 1; i++) {
  if (i % 2)
    print('+')  // 홀수
  else
    print('-')  // 짝수
}
println()
