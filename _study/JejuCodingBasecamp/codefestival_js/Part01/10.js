const ps = require('../modules/ps');

const solution = (n) => {
  let answer = '';

  for (let i = 0; i < n; i++) {
    for (let j = n-i-1; j > 0; j--) {
      answer += ' ';
    }
    for (let j = 0; j < (i*2)+1; j++) {
      answer += '*';
    }
    answer += '\n';
  }

  return answer;
};

ps.main(async () => {
  console.log('입력');
  let n = parseInt(await ps.readLine()); // 문자열을 입력 받아 정수 반환

  console.log(solution(n));
});
