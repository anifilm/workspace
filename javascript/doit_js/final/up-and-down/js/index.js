document.querySelector('form').addEventListener('submit', finding);

let count = 0;
let correct = false;
let randomNumber = Math.floor(Math.random() * 100) + 1;
console.log(randomNumber);

function finding(e) {
  e.preventDefault();
  let userNumber = document.querySelector('#try');
  if (correct) { // 맞았으면 더이상 입력하지마!
    userNumber.value = '';
    userNumber.blur();
    return;
  }
  if (userNumber.value >= 1 && userNumber.value <= 100) {
    if (randomNumber > userNumber.value) { // 랜덤 숫자가 큰 경우 UP 표시
      showHint('UP');
    } else if (randomNumber < userNumber.value) { // 랜덤 숫자가 작은 경우 DOWN 표시
      showHint('DOWN');
    } else {
      correct = true;
      showHint('<span style="color:red">맞혔습니다!!!</span>');
      userNumber.value = '';
      userNumber.blur();
      return;
    }
    count++;
  } else {
    alert('1과 100사이의 숫자를 입력하세요.');
  }
  userNumber.value = '';
  userNumber.focus();

  showCount(count);
}

function showHint(upAndDown) {
  let selOutput = document.querySelector('#display');
  selOutput.innerHTML = upAndDown;
}

function showCount(count) {
  let selFooter = document.querySelector('#counter');
  selFooter.innerHTML = `시도횟수: ${count}회`;
}
