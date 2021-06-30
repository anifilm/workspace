const ps = require('../modules/ps');

const solution = (height) => {
  let answer = 'NO';
  if (height >= 150) {
    answer = 'YES';
  }

  return answer;
};

ps.main(async () => {
  process.stdout.write('입력: ');
  let n = parseInt(await ps.readLine()); // 문자열을 입력 받아 정수 반환

  console.log('출력: ' + solution(n));
});
