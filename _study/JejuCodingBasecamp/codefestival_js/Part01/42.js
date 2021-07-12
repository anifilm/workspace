const ps = require('../modules/ps');

const solution = (a, b) => {
  let answer = '';
  const month = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
  const days = ['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT'];
  // 2020년 1월 1일은 수요일이다. return 'WED' -> index 3

  // 입력값 검증
  if (a < 0 && a > 12) return '날짜 정보를 잘못 입력하였습니다.';
  if (b < 0 && b > month[a - 1]) return '날짜 정보를 잘못 입력하였습니다.';

  // 월의 일수를 계산
  let m = 0; // a === 1
  if (a !== 1) {
    for (let i = 0; i < a - 1; i++) {
      m += month[i];
    }
  }
  // 일을 0부터 시작하도록 조정
  let d = b - 1;

  let result = m + d + 3; // 수요일 부터 시작하므로 +3일로 요일 인덱스를 조정
  answer = days[result % 7]; // 요일을 추출

  return answer;
};

ps.main(async () => {
  console.log('입력 ');
  let a = parseInt(await ps.readLine()); // 문자열을 입력 받아 정수 반환
  let b = parseInt(await ps.readLine()); // 문자열을 입력 받아 정수 반환

  console.log('출력: ' + solution(a, b));
});
