const ps = require('../modules/ps');

const solution = (str) => {
  let answer = '';
  // 문자열 replace 함수 사용
  answer = str.replace('q', 'e');

  return answer;
};

ps.main(async () => {
  process.stdout.write('입력: ');
  let str = await ps.readLine();

  console.log('출력: ' + solution(str));
});
