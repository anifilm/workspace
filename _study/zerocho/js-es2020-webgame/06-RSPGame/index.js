const computerTag = document.querySelector("#computer");
const rockTag = document.querySelector("#rock");
const scissorsTag = document.querySelector("#scissors");
const paperTag = document.querySelector("#paper");
computerTag.style.background = `url(image/rsp.jpg) 0 0`;

const rspCoord = {
  rock: "0", // 바위
  scissors: "-150px", // 가위
  paper: "-300px", // 보
};

let computerChoice = "rock";

const intervalMaker = () => {
  return setInterval(() => {
    if (computerChoice === "rock") {
      computerChoice = "scissors";
    }
    else if (computerChoice === "scissors") {
      computerChoice = "paper";
    }
    else if (computerChoice === "paper") {
      computerChoice = "rock";
    }
    computerTag.style.background = `url(image/rsp.jpg) ${rspCoord[computerChoice]} 0`;
  }, 50);
};

let intervalId = intervalMaker();

// 가위: 1, 바위: 0, 보: -1
// 나\컴퓨터  가위   바위    보
//   가위     0      1      2
//   바위     -1     0      1
//   보      -2     -1     0
const score = {
  rock: 0,
  scissors: 1,
  paper: -1,
};

const buttonControl = (value) => {
  rockTag.disabled = value;
  scissorsTag.disabled = value;
  paperTag.disabled = value;
};

const clickButton = (myChoice) => {
  return () => {
    clearInterval(intervalId);
    buttonControl(true);
    const myScore = score[myChoice];
    const computerScore = score[computerChoice];
    const diff = myScore - computerScore;
    const scoreTag = document.querySelector('#score')
    let accScore = Number(scoreTag.textContent);
    if (diff === 2 || diff === -1) {
      accScore += 1;
    }
    else if (diff === -2 || diff === 1) {
      accScore -= 1;
    }
    scoreTag.textContent = accScore;
    setTimeout(() => {
      buttonControl(false);
      intervalId = intervalMaker();
    }, 1000);
  };
};

rockTag.addEventListener('click', clickButton('rock'));
scissorsTag.addEventListener('click', clickButton('scissors'));
paperTag.addEventListener('click', clickButton('paper'));
