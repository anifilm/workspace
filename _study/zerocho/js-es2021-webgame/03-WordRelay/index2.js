const number = Number(prompt('몇 명이 참가하나요?'));

const $button = document.querySelector('button');
const $input = document.querySelector('input');
const $word = document.querySelector('#word');
const $order = document.querySelector('#order');

let word; // 제시어
let newWord; // 현재 단어

const onClickButton = (e) => {
  e.preventDefault();
  if (!word || word[word.length - 1] === newWord[0]) { // 올바른 단어인가?
    // 올바르다
    word = newWord; // 현재 단어를 제시어에 저장
    $word.textContent = word; // 화면에 제시어 표시
    const order = Number($order.textContent);
    if (order + 1 > number) {
      $order.textContent = 1;
    }
    else {
      $order.textContent = order + 1;
    }
  }
  else {
    // 올바르지 않다.
    alert('올바르지 않은 단어입니다.');
  }
  $input.value = '';
  $input.focus();
};

const onInput = (e) => {
  newWord = e.target.value; // 입력하는 단어를 현재 단어로
};

$button.addEventListener('click', onClickButton);
$input.addEventListener('input', onInput);
