const input = document.querySelector('#input');
const check = document.querySelector('#check');
const logs = document.querySelector('#logs');

let numbers = [];
for (let n = 1; n < 10; n++) {
  numbers.push(n); // 0부터 9까지의 정수를 배열에 담는다.
}
let guessNumbers = []; // 임의의 숫자를 담을 배열 선언

for (let n = 0; n < 4; n++) {
  const index = Math.floor(Math.random() * numbers.length) // 0 ~ 9 정수에서 임의의 숫자를 뽑는다.
  guessNumbers.push(numbers[index]); // 임의의 숫자를 배열에 담는다.
  numbers.splice(index, 1); // 이미 뽑은 정수는 배열에서 제거
}
console.log(guessNumbers);

let count = 1;
check.addEventListener('click', (e) => {
  e.preventDefault();
  const value = input.value // 입력된 숫자 4개를 가져온다. (타입: 문자열)
  if (value && value.length === 4) {
    if (guessNumbers.join('') === value) { // 입력된 숫자(문자열)와 임의의 숫자를 비교 같다면
      logs.textContent = 'HomeRun!!!'; // 홈런이다.
      input.disabled = true;
    } else {
      //console.log('다르다');
      let strike = 0;
      let ball = 0;
      for (const [aIndex, aNumber] of guessNumbers.entries()) {
        for (const [iIndex, iString] of input.value.split('').entries()) {
          if (aNumber === Number(iString)) {
            if (aIndex === iIndex)
              strike++;
            else
              ball++;
          }
        }
      }
      logs.append(`${input.value}: ${strike} strike ${ball} ball`, document.createElement('br'));
      if (count < 10) {
        // 원래의 로직대로 되어있으면 12번의 기회가 주어진다. 10번의 기회만 갖도록 수정함
        count++;
      } else {
        logs.appendChild(document.createTextNode(`Game Over: ${guessNumbers.join('')}`));
        input.disabled = true;
      }
    }
  }
  // 입력창을 초기화
  input.value = '';
  input.focus();
});
