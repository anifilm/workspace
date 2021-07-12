const ps = require('../modules/ps');

const solution = (a, b) => {
  let answer = '';
  const days = ['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT'];

  const today = new Date('2020-' + a + '-' + b);
  answer = days[today.getDay()];

  return answer;
};

ps.main(async () => {
  console.log('입력 ');
  let a = parseInt(await ps.readLine()); // 문자열을 입력 받아 정수 반환
  let b = parseInt(await ps.readLine()); // 문자열을 입력 받아 정수 반환

  console.log('출력: ' + solution(a, b));
});
