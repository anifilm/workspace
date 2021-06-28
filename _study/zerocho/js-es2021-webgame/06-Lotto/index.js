const candidate = Array(45)
  .fill()
  .map((v, i) => i + 1);
const shuffle = [];
while (candidate.length > 0) {
  const random = Math.floor(Math.random() * candidate.length); // 무작위 인덱스 뽑기
  const spliceArray = candidate.splice(random, 1); // 뽑은 값은 배열에 들어 있음
  const value = spliceArray[0]; // 배열에 들어 있는 값을 꺼내어
  shuffle.push(value); // shuffle 배열에 넣기
}
//console.log(shuffle);
const winBalls = shuffle.slice(0, 6);
const bonus = shuffle[6];
console.log(winBalls, bonus);

function colorize(number, $tag) {
  if (number <= 10) {
    $tag.style.color = 'white';
    $tag.style.backgroundColor = 'Gold';
  } else if (number <= 20) {
    $tag.style.color = 'white';
    $tag.style.backgroundColor = 'CornflowerBlue';
  } else if (number <= 30) {
    $tag.style.color = 'white';
    $tag.style.backgroundColor = 'Crimson';
  } else if (number <= 40) {
    $tag.style.color = 'white';
    $tag.style.backgroundColor = 'DarkGray';
  } else {
    $tag.style.color = 'white';
    $tag.style.backgroundColor = 'SeaGreen';
  }
}

const $result = document.querySelector('#result');
const drawBall = (number, $parent) => {
  const $ball = document.createElement('div');
  $ball.className = 'ball b1';
  colorize(number, $ball);
  $ball.textContent = number;
  $parent.appendChild($ball);
};

for (let i = 0; i < winBalls.length; i++) {
  setTimeout(() => {
    drawBall(winBalls[i], $result);
  }, 800 * (i + 1));
}

const $bonus = document.querySelector('#bonus');
setTimeout(() => {
  drawBall(bonus, $bonus);
}, 6000);
