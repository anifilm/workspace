// 1~12까지 8을 건너뛰고 출력하기 1
const {print, println} = require('./modules/print')

for (let i = 1; i < 13; i++) {
  if (i == 8) continue
  print(i + ' ')
}
println()
