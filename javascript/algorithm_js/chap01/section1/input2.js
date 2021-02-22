const println = require('./modules/println.js')
const prompt = require('prompt-sync')()

const name = prompt('이름을 입력하세요: ')

println(`안녕하세요? ${name} 님`)
