const ps = require('../modules/ps');

const solution = (str1, str2) => {
  let answer = 0;
  answer = str1.indexOf(str2);

  return answer;
};

ps.main(async () => {
  console.log('입력');
  let str1 = await ps.readLine();
  let str2 = await ps.readLine();

  console.log('출력');
  console.log(solution(str1, str2));
});
