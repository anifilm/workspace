// *를 n개 출력하되 w개마다 줄바꿈하기 2
const {print, println} = require('./modules/print')
const prompt = require('prompt-sync')()

println('*를 출력합니다.')
let n = Number(prompt('몇 개를 출력할까요?: '))
let w = Number(prompt('몇 개마다 줄바꿈할까요?: '))

for (let i = 0; i < n / w; i++) {  // n / w번 반복
  for (let j = 0; j < w; j++)
    print('*')
  println()
}

let rest = n % w
if (rest) {  // if문 판단 1번
  for (let j = 0; j < rest; j++)
    print('*')
  println()
}
