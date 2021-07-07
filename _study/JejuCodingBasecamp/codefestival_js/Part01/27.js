const ps = require('../modules/ps');

const solution = (names, scores) => {
  let answer = {};
  for (let i = 0; i < names.length; i++) {
    answer[names[i]] = scores[i];
  }
  return answer;
};

ps.main(async () => {
  console.log('입력');
  let str = (await ps.readLine()).split(' ');
  let arr = await ps.readArrayLine(); // 문자열을 입력 받아 Number 배열 형으로 반환

  console.log('출력');
  console.log(solution(str, arr));
});
