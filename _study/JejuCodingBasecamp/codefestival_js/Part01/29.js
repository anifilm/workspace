const ps = require('../modules/ps');

const solution = (chr) => {
  let answer = 'NO';
  if (chr === chr.toUpperCase())
    answer = 'YES'

  return answer;
};

ps.main(async () => {
  console.log('입력');
  let chr = (await ps.readLine())[0];

  console.log('출력');
  console.log(solution(chr));
});
