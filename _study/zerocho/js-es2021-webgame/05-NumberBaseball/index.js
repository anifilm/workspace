const $input = document.querySelector('#input');
const $form = document.querySelector('#form');
const $logs = document.querySelector('#logs');

const numbers = [];
for (let n = 0; n < 9; n++) {
  numbers.push(n + 1);
}

const guessNumber = [];
for (let n = 0; n < 4; n++) {
  const index = Math.floor(Math.random() * numbers.length);
  guessNumber.push(numbers[index]);
  numbers.splice(index, 1);
}
console.log(guessNumber);

const tries = [];
function checkInput(input) {
  if (input.length !== 4) {
    // 길이가 4인가?
    return alert('4자리 숫자를 입력해 주세요.');
  }
  if (new Set(input).size !== 4) {
    // 중복된 숫자가 있는가?
    return alert('중복되지 않게 입력해 주세요.');
  }
  if (tries.includes(input)) {
    // 시도한 값인가?
    return alert('이미 시도한 값입니다.');
  }
  return true;
}

$form.addEventListener('submit', (e) => {
  e.preventDefault();
  const value = $input.value;
  $input.value = '';
  if (!checkInput(value)) {
    return;
  }
  // 입력값 문제없음
  if (guessNumber.join('') === value) {
    $logs.textContent = '홈런!';
    return;
  }
  if (tries.length >= 9) {
    const message = document.createTextNode(`패배! 정답은 ${answer.join('')}`);
    $logs.appendChild(message);
    return;
  }
  // 몇 스크라이크 몇 볼인지 검사
  let strike = 0;
  let ball = 0;
  for (let i = 0; i < guessNumber.length; i++) {
    const index = value.indexOf(guessNumber[i]);
    if (index > -1) {
      // 일치하는 숫자 발견
      if (index === i) {
        // 자릿수가 같다면
        strike++;
      } else {
        // 숫자만 같다면
        ball++;
      }
    }
  }
  $logs.append(
    `${value}: ${strike} 스트라이크 ${ball} 볼`,
    document.createElement('br'),
  );
  tries.push(value);
});
