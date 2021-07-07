const ps = require('../modules/ps');

const solution = (limit, n, arr) => {
  let answer = 0;
  let total = 0;
  for (let i = 0; i < n; i++) {
    total += arr[i];
    if (total > limit) break;
    answer += 1;
  }
  return answer;
};

ps.main(async () => {
  console.log('입력');
  let limit = parseInt(await ps.readLine());
  let n = parseInt(await ps.readLine());
  const arr = [];
  for (let i = 0; i < n; i++) {
    let input = parseInt(await ps.readLine());
    arr.push(input);
  }

  console.log('출력');
  console.log(solution(limit, n, arr));
});

/*

50
5
20
20
20
20
20

*/
