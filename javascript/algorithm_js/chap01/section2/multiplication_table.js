// 구구단 곱셈표 출력하기
const {print, println} = require('./modules/print')

for (let i = 0; i < 66; i++)
  print('-')
println()

for (let i = 1; i < 10; i++) {  // 행 루프
  for (let j = 1; j < 10; j++)  // 열 루프
    print(`${i * j}\t`)
  println()  // 행 변경
}

for (let i = 0; i < 66; i++)
  print('-')
println()


/*
TODO: 자바스크립트 템플릿 리터럴 출력 또는 포매팅 출력에 정렬 기능은 없을까?
*/
