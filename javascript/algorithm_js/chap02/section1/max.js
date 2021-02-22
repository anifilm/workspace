// 시퀀스 요소의 최대값 출력하기
const println = require('./modules/println.js')
const prompt = require('prompt-sync')()

function max_of(a){
  /* 시퀀스형 a 원소의 최대값을 반환 */
  max = a[0]
  for (let i = 1; i < a.length; i++) {
    if (a[i] > max) max = a[i]
  }
  return max
}

println("배열의 최대값을 구합니다.")

const num = Number(prompt("요소 수를 입력하세요: "))
let x = new Array(num)

for (let i = 0; i < num; i++) {
  x[i] = Number(prompt(`x[${i}]값을 입력하세요: `))
}

println(`최대값은 ${max_of(x)}입니다.`)
