// a부터 b까지 정수의 합 구하기 (for 문)
const println = require('./modules/println.js')
const prompt = require('prompt-sync')()

println('a부터 b까지의 합을 구합니다.')
let a = Number(prompt('정수 a를 입력하세요: '))
let b = Number(prompt('정수 b를 입력하세요: '))

if (a > b) {  // a와 b를 오름차순으로 정렬
  let tmp = a
  a = b
  b = tmp
}

let sum = 0
for (let i = a; i < b + 1; i++)
  sum += i  // sum에 i를 더함

println(`${a}부터 ${b}까지 정수의 합은 ${sum}입니다.`)
