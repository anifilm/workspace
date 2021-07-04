const ps = require('../modules/ps');

const solution = (str) => {
  let answer = '';
  for (let i = 0; i < str.length - 1; i++) {
    answer += str[i] + ' ' + str[i+1] + '\n';
  }

  return answer;
};

ps.main(async () => {
  console.log('입력');
  let str = await ps.readLine();

  console.log('출력');
  console.log(solution(str));
});
