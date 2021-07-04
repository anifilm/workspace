const ps = require('../modules/ps');

const solution = (str) => {
  let answer = '';
  const planets = {
    '수성': 'Mercry',
    '금성': 'Venus',
    '지구': 'Earth',
    '화성': 'Mars',
    '목성': 'Jupiter',
    '토성': 'Saturn',
    '천왕성': 'Uranus',
    '해왕성': 'Neptune',
  }
  answer = planets[str];

  return answer;
};

ps.main(async () => {
  process.stdout.write('입력: ');
  let str = await ps.readLine();

  console.log('출력: ' + solution(str));
});
