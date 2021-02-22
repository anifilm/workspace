// +와 -를 번갈아 출력하기 2
const {print, println} = require('./modules/print')
const prompt = require('prompt-sync')();

println('+와 -를 번갈아 출력합니다.')
let n = Number(prompt('몇 개를 출력할까요?: '))

for (let i = 0; i < n / 2; i++)
  print('+-')  // n / 2개의 +-를 출력

if (n % 2)
  print('+')  // n이 홀수일 때만 +를 출력

println()
