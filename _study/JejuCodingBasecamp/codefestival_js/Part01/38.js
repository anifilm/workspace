const ps = require('../modules/ps');

const solution = (arr) => {
  let answer = 0;
  // 점수별로 중복되지 않은 학생수를 구함
  let obj = {};
  for (let idx in arr) {
    let val = arr[idx];
    obj[val] = obj[val] === undefined ? 1 : (obj[val] = obj[val] + 1);
  }
  // 점수 중복되지 않게 높은 순으로 정렬
  let score = new Set(arr);
  score = [...score]
  score = score.sort().reverse();
  console.log(score);
  // 1위 부터 3위까지의 학생수를 구함
  for (let i = 0; i < 3; i++) {
    answer += obj[score[i]];
  }
  return answer;
};

ps.main(async () => {
  const arr = [97, 86, 75, 66, 55, 97, 85, 97, 97, 95];
  process.stdout.write('입력: ');
  console.log(arr.join(' '));
  //let arr = await ps.readArrayLine(); // 문자열을 입력 받아 Number 배열 형으로 반환

  console.log('출력: ' + solution(arr));
});
