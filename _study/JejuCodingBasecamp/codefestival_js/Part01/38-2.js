const ps = require('../modules/ps');

const solution = (arr) => {
  let answer = 0;
  let stu = [];
  // 점수를 오름차순으로 정렬
  let scores = arr.sort((a, b) => {
    return a - b;
  })

  while (stu.length < 3) {
    let n = scores.pop(); // 배열의 맨 뒤에서 부터 학생의 점수를 꺼내어
    if (!stu.includes(n)) { // 중복되지 않은 점수를 stu 배열에 push
      stu.push(n);
    }
    answer += 1;
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
