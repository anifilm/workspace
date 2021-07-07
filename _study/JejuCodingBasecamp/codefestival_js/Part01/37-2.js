const ps = require('../modules/ps');

const solution = (str) => {
  let answer = '';
  // 입력받은 문자열을 배열로 변환
  const arr = str.split(' ');
  // 배열의 중복 값 개수 구하기
  let obj = {};
  for (let idx in arr) {
    let val = arr[idx];
    obj[val] = obj[val] === undefined ? 1 : (obj[val] = obj[val] + 1);
  }
  // 가장 많은 표를 받은 사람을 추출
  answer = Object.keys(obj).reduce(function (a, b) {
    return obj[a] > obj[b] ? a : b;
  });
  return `${answer}(이)가 총 ${obj[answer]}표로 반장이 되었습니다.`;
};

ps.main(async () => {
  const str = '원범 원범 혜원 혜원 혜원 혜원 유진 유진';
  console.log('입력');
  console.log(str);
  //let str = await ps.readLine();

  console.log('출력');
  console.log(solution(str));
});
