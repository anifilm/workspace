// 길이가 45인 배열을 생성하고 1부터 1씩 증가시킨 정수를 배열에 추가
const candidate = Array(45)
  .fill()
  .map((v, i) => i + 1);

const shuffle = [];
while (candidate.length > 0) {
  // 배열의 길이 중 하나의 인덱스를 랜덤하게 선택
  const random = Math.floor(Math.random() * candidate.length);
  // 해당 인덱스의 정수를 배열에서 제거하고 변수에 저장
  const spliceArray = candidate.splice(random, 1);
  // 랜덤하게 추출된 정수를 shuffle 배열에 저장
  shuffle.push(spliceArray[0]);
}
//console.log(shuffle);

const winBalls = shuffle.slice(0, 6); // 추출된 정수 배열에서 앞의 5개 정수를 저장 (배열)
const bonus = shuffle[6]; // 6번째 숫자를 보너스로 저장
console.log(winBalls);
console.log(bonus);

const resultTag = document.querySelector('#result');
/*
for (let i = 0; i < 6; i++) { // 클로저 문제는 let 나오면서 X
  setTimeout(() => {
    const ball = document.createElement('div');
    ball.className = 'ball b1';
    colorize(winBalls[i], ball);
    ball.textContent = winBalls[i];
    resultTag.appendChild(ball);
  }, (i + 1) * 800);
} */
winBalls.forEach((number, index) => {
  setTimeout(() => {
    const ball = document.createElement('div');
    ball.className = 'ball b1';
    colorize(number, ball);
    ball.textContent = number;
    resultTag.appendChild(ball);
  }, (index + 1) * 800);
});

const bonusTag = document.querySelector('#bonus');
setTimeout(() => {
  const bonusBall = document.createElement('div');
  bonusBall.className = 'ball b1';
  colorize(bonus, bonusBall);
  bonusBall.textContent = bonus;
  bonusTag.appendChild(bonusBall);
}, 6000);

function colorize(number, tag) {
  if (number <= 10) {
    tag.style.color = 'white';
    tag.style.backgroundColor = 'Gold';
  } else if (number <= 20) {
    tag.style.color = 'white';
    tag.style.backgroundColor = 'CornflowerBlue';
  } else if (number <= 30) {
    tag.style.color = 'white';
    tag.style.backgroundColor = 'Crimson';
  } else if (number <= 40) {
    tag.style.color = 'white';
    tag.style.backgroundColor = 'DarkGrey';
  } else {
    tag.style.color = 'white';
    tag.style.backgroundColor = 'SeaGreen';
  }
}
