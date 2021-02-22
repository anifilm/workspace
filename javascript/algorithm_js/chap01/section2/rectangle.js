// 가로 세로가 정수이고 넓이가 area인 직사각형에서 변의 길이를 나열하기
const println = require('./modules/println.js')
const prompt = require('prompt-sync')()

let area = Number(prompt('직사각형의 넓이를 입력하세요: '))

for (let i = 1; i < area + 1; i++) {  // 1부터 사각형의 넓이 계산
  if (i * i > area) break
  if (area % i) continue
  println(`${i} × ${area / i}`)
}
