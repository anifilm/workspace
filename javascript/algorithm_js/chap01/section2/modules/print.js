// 줄바꿈 없는 출력 함수
var print = function (p) {
  if (p != undefined)
    process.stdout.write(p)
  else
    process.stdout.write('')
}

module.exports = print
