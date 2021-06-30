const ps = require('../modules/ps');

const solution = (n) => {
  let answer = '';
  const planets = [
    '수성',
    '금성',
    '지구',
    '화성',
    '목성',
    '토성',
    '천왕성',
    '해왕성',
  ];
  answer += planets[n-1];

  return answer;
};

ps.main(async () => {
  process.stdout.write('입력: ');
  let n = parseInt(await ps.readLine()); // 문자열을 입력 받아 정수 반환

  console.log('출력: ' + solution(n));
});
