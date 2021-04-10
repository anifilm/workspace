const numberInput = document.querySelector('#input');
const clearButton = document.querySelector('#clear');
const plusButton = document.querySelector('#plus');
const minusButton = document.querySelector('#minus');
const divideButton = document.querySelector('#divide');
const multiplyButton = document.querySelector('#multiply');
const calculateButton = document.querySelector('#calculate');
const resultInput = document.querySelector('#result');

let temp;
let operator;

plusButton.addEventListener('click', () => {
  if (temp) {
    // 값 입력후 더하기 버튼을 누르면 해당 값으로 연산한다.
    console.log(temp, operator, Number(numberInput.value));
    temp = cal(temp, operator, Number(numberInput.value))
    operator = '+';
    numberInput.value = null;
    resultInput.value = temp;
  }
  else {
    if (numberInput.value) {
      temp = Number(numberInput.value);
      operator = '+';
      numberInput.value = null;
      resultInput.value = temp;
    }
  }
});

minusButton.addEventListener('click', () => {
  if (temp) {
    // 값 입력후 빼기 버튼을 누르면 해당 값으로 연산한다.
    console.log(temp, operator, Number(numberInput.value));
    temp = cal(temp, operator, Number(numberInput.value))
    operator = '-';
    numberInput.value = null;
    resultInput.value = temp;
  }
  else {
    if (numberInput.value) {
      temp = Number(numberInput.value);
      operator = '-';
      numberInput.value = null;
      resultInput.value = null;
    }
  }
});

multiplyButton.addEventListener('click', () => {
  if (temp) {
    // 값 입력후 곱하기 버튼을 누르면 해당 값으로 연산한다.
    console.log(temp, operator, Number(numberInput.value));
    temp = cal(temp, operator, Number(numberInput.value))
    operator = '*';
    numberInput.value = null;
    resultInput.value = temp;
  }
  else {
    if (numberInput.value) {
      temp = Number(numberInput.value);
      operator = '*';
      numberInput.value = null;
      resultInput.value = null;
    }
  }
});

divideButton.addEventListener('click', () => {
  if (temp) {
    // 값 입력후 나누기 버튼을 누르면 해당 값으로 연산한다.
    console.log(temp, operator, Number(numberInput.value));
    temp = cal(temp, operator, Number(numberInput.value))
    operator = '/';
    numberInput.value = null;
    resultInput.value = temp;
  }
  else {
    if (numberInput.value) {
      temp = Number(numberInput.value);
      operator = '/';
      numberInput.value = null;
      resultInput.value = null;
    }
  }
});

clearButton.addEventListener('click', () => {
  numberInput.value = null;
  resultInput.value = null;
  temp = null;
  operator = null;
});

calculateButton.addEventListener('click', () => {
  if (operator) {
    if (numberInput.value) {
      console.log(temp, operator, Number(numberInput.value));
      temp = cal(temp, operator, Number(numberInput.value))
      resultInput.value = temp;
    }
    else {
      resultInput.value = temp;
    }
  }
  else { // 연산자가 없다면
    if (numberInput.value) {
      temp = Number(numberInput.value);
      resultInput.value = temp;
    }
  }
});

// 연산처리 부분을 함수화
const cal = ((num1, op, num2) => {
  if (operator === '+') {
    return num1 + num2;
  }
  else if (operator === '-') {
    return num1 - num2;
  }
  else if (operator === '*') {
    return num1 * num2;
  }
  else if (operator === '/') {
    if (num2 === 0) {
      alert('0으로는 나눌수 없습니다.');
      return num1;
    }
    return num1 / num2;
  }
  else { // 연산자가 없다면
    return num1;
  }
});
