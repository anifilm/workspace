const ps = require('../modules/ps');

const solution = (arr) => {
  let answer = 0;
  answer = arr[0] ** arr[1];

  return answer;
};

ps.main(async () => {
  process.stdout.write('입력: ');
  let arr = await ps.readArrayLine(); // 문자열을 입력 받아 Number 배열 형으로 반환

  console.log('출력: ' + solution(arr));
});
