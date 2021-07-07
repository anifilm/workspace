const ps = require('../modules/ps');

const solution = (arr) => {
  let answer = 'YES';
  for (let i = 0; i < arr.length-1; i++) {
    if (arr[i] > arr[i + 1]) {
      return answer = 'NO';
    }
  }
  return answer;
};

ps.main(async () => {
  process.stdout.write('입력: ');
  let arr = await ps.readArrayLine(); // 문자열을 입력 받아 Number 배열 형으로 반환

  console.log('출력: ' + solution(arr));
});
