// 4개로 분기하는 조건문
const {print, println} = require('./modules/print')
const prompt = require('prompt-sync')()

let n = Number(prompt('정수를 입력하세요: '))

if (n == 1)
  println('A')
else if (n == 2)
  println('B')
else if (n == 3)
  println('C')
