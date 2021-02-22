// 1~12까지 8을 건너뛰고 출력하기 1
const println = require('./modules/println.js')
const print = require('./modules/print.js')

for (let i = 1; i < 13; i++) {
  if (i == 8) continue
  print(i + ' ')
}
println()
