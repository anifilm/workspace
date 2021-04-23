const $computer = document.querySelector('#computer');
const $score = document.querySelector('#score');
const $rock = document.querySelector('#rock');
const $scissors = document.querySelector('#scissors');
const $paper = document.querySelector('#paper');
const IMG_URL = 'image/rsp.png';

$computer.style.background = `url(${IMG_URL}) 0 0 no-repeat`;
$computer.style.backgroundSize = 'auto 200px';

const rspX = {
  scissors: '0', // 가위
  rock: '-200px', // 바위
  paper: '-400px', // 보
};

let computerChoice = 'scissors';

const changeComputerHand = () => {
  if (computerChoice === 'scissors') {
    // 가위면
    computerChoice = 'rock';
  } else if (computerChoice === 'rock') {
    // 바위면
    computerChoice = 'paper';
  } else {
    // 보
    computerChoice = 'scissors';
  }
  $computer.style.background = `url(${IMG_URL}) ${rspX[computerChoice]} 0`;
  $computer.style.backgroundSize = 'auto 200px';
};

let intervalId = setInterval(changeComputerHand, 60);

// 가위: 1, 바위: 0, 보: -1
// 나\컴퓨터  가위   바위    보
//   가위     0      1      2
//   바위     -1     0      1
//   보      -2     -1     0
const scoreTable = {
  scissors: 1,
  rock: 0,
  paper: -1,
};

let score = 0;

const buttonControl = (value) => {
  $scissors.disabled = value;
  $rock.disabled = value;
  $paper.disabled = value;
};

const clickButton = () => {
  clearInterval(intervalId);
  buttonControl(true);

  // 점수 계산 및 화면 표시
  const myChoice =
    event.target.textContent === '가위'
      ? 'scissors'
      : event.target.textContent === '바위'
      ? 'rock'
      : 'paper';

  const myScore = scoreTable[myChoice];
  const computerScore = scoreTable[computerChoice];
  const diff = myScore - computerScore;

  let message;
  // 2, -1은 승리조건이고, -2, 1은 패배조건 (점수표 참고)
  if ([2, -1].includes(diff)) {
    score += 1;
    message = '승리!';
  } else if ([-2, 1].includes(diff)) {
    score -= 1;
    message = '패배';
  } else {
    message = '무승부';
  }
  $score.textContent = `${message} 총: ${score}점`;

  setTimeout(() => {
    //clearInterval(intervalId);
    buttonControl(false);
    intervalId = setInterval(changeComputerHand, 60);
  }, 1000);
};

$scissors.addEventListener('click', clickButton);
$rock.addEventListener('click', clickButton);
$paper.addEventListener('click', clickButton);
