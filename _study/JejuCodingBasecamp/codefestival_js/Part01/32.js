const ps = require('../modules/ps');

const solution = (str) => {
  let answer = 0;
  answer = str.split(' ').length;

  return answer;
};

ps.main(async () => {
  process.stdout.write('입력: ');
  let str = await ps.readLine();

  console.log('출력: ' + solution(str));
});
