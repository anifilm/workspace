// 세 정수를 입력받아 최대값 구하기
const prompt = require('prompt-sync')();

console.log('세 정수의 최대값을 구합니다.');
let a = Number(prompt("정수 a의 값을 입력하세요: "));
let b = Number(prompt("정수 b의 값을 입력하세요: "));
let c = Number(prompt("정수 c의 값을 입력하세요: "));

let max = a;
if (b > max) max = b;
if (c > max) max = c;

console.log(`최대값은 ${max}입니다.`);