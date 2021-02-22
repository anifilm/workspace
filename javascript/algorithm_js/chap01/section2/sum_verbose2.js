// a부터 b까지 정수의 합 구하기 2
const println = require('./modules/println.js')
const print = require('./modules/print.js')
const prompt = require('prompt-sync')()

println('a부터 b까지의 합을 구합니다.')
let a = Number(prompt('정수 a를 입력하세요: '))
let b = Number(prompt('정수 b를 입력하세요: '))

if (a > b) {
  let tmp = a
  a = b
  b = tmp
}

let sum = 0
for (let i = a; i < b; i++) {
  print(`${i} + `)
  sum += i  // sum에 i를 더함
}

print(`${b} = `)
sum += b    // sum에 b를 더함

println(sum)
