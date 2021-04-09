const btn = document.querySelector('form');

const dictionary = [];
btn.addEventListener('submit', (e) => {
  e.preventDefault();
  let wordTag = document.querySelector('#word');
  let word = wordTag.textContent;
  let inputTag = document.querySelector('#input');
  let errorTag = document.querySelector('#error');
  let input = inputTag.value;
  if (dictionary.includes(input)) {
    errorTag.textContent = '이미 입력한 단어입니다.';
    inputTag.select(); // 입력한 단어를 선택해준다.
  }
  else {
    if (word[word.length - 1] === input[0]) {
      wordTag.textContent = input;
      errorTag.textContent = '';
      inputTag.value = '';
      inputTag.focus(); // 다시 입력할 수 있도록 input을 선택해준다.
      dictionary.push(input);
    }
    else {
      errorTag.textContent = '땡';
      inputTag.value = '';
      inputTag.focus(); // 다시 입력할 수 있도록 input을 선택해준다.
    }
  }
});
