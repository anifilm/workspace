const ps = require('../modules/ps');

const solution = (n) => {
  let answer = '';
  let b = [];

  while (n) {
    b.push(n % 2);
    n = parseInt(n / 2);
  }
  answer = b.reverse().join('');

  return answer;
};

ps.main(async () => {
  process.stdout.write('입력: ');
  let n = parseInt(await ps.readLine());

  console.log('출력: ' + solution(n));
});
