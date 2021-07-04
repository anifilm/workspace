const ps = require('../modules/ps');

const solution = (name) => {
  let answer = '';
  answer = name.toUpperCase();

  return answer;
};

ps.main(async () => {
  process.stdout.write('입력: ');
  let str = await ps.readLine();

  console.log('출력: ' + solution(str));
});
