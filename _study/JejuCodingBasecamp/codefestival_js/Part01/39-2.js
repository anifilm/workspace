const ps = require('../modules/ps');

// 함수 사용
function replaceAll(str, searchChr, replaceChr) {
  return str.split(searchChr).join(replaceChr);
}

const solution = (str) => {
  let answer = '';
  answer = replaceAll(str, 'q', 'e');

  return answer;
};

ps.main(async () => {
  process.stdout.write('입력: ');
  let str = await ps.readLine();

  console.log('출력: ' + solution(str));
});
