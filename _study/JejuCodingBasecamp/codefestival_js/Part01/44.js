const ps = require('../modules/ps');

const solution = (n) => {
  let answer = 0;
  let arr = n.toString().split('');
  for (let i of arr) {
    answer += parseInt(i);
  }

  return answer;
};

ps.main(async () => {
  process.stdout.write('입력: ');
  let n = parseInt(await ps.readLine());

  console.log('출력: ' + solution(n));
});
