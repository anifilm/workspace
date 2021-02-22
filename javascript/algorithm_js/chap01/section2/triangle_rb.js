// 오른쪽 아래가 직각인 이등변 삼각형으로 * 출력하기
const println = require('./modules/println.js')
const print = require('./modules/print.js')
const prompt = require('prompt-sync')()

println('왼쪽 아래가 직각인 이등변 삼각형을 출력합니다.')
let n = Number(prompt('짧은 변의 길이를 입력하세요: '))

for (let i = 0; i < n; i++) {
  for (let j = 0; j < n - i - 1; j++)
    print(' ')  // 공백을 출력
  for (let j = 0; j < i + 1; j++)
    print('*')  // *을 출력
  println()
}
