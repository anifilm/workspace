const ps = require('../modules/ps');

const solution = (name) => {
  let answer = '';
  answer = `안녕하세요. 저는 ${name}입니다.`;

  return answer;
};

ps.main(async () => {
  process.stdout.write('입력: ');
  let n = await ps.readLine(); // 문자열 입력

  console.log('출력: ' + solution(n));
});