let numOne = '';
let operator = '';
let numTwo = '';
let isCalculate = false;

const $operator = document.querySelector('#operator');
const $result = document.querySelector('#result');

$result.value = '0';

const onClickNumber = (event) => {
  if (!operator) {
    if ($result.value === '0') $result.value = '';
    numOne += event.target.textContent;
    $result.value += event.target.textContent;
    return;
  }
  // 이 아래로는 operator가 존재하는 경우에만 실행됨
  if (!numTwo) {
    $result.value = '';
  }
  // 연산자 클릭을 통한 연속 계산시
  if (isCalculate) {
    numTwo = '';
    $result.value = '';
    isCalculate = false;
  }
  numTwo += event.target.textContent;
  $result.value += event.target.textContent;
  //console.log(numOne, operator, numTwo);
};

document.querySelector('#num-0').addEventListener('click', onClickNumber);
document.querySelector('#num-1').addEventListener('click', onClickNumber);
document.querySelector('#num-2').addEventListener('click', onClickNumber);
document.querySelector('#num-3').addEventListener('click', onClickNumber);
document.querySelector('#num-4').addEventListener('click', onClickNumber);
document.querySelector('#num-5').addEventListener('click', onClickNumber);
document.querySelector('#num-6').addEventListener('click', onClickNumber);
document.querySelector('#num-7').addEventListener('click', onClickNumber);
document.querySelector('#num-8').addEventListener('click', onClickNumber);
document.querySelector('#num-9').addEventListener('click', onClickNumber);

const onClickOperator = (op) => () => {
  // 연산자 클릭을 통한 연속 계산시
  if (numTwo) {
    onClickCalculate();
    isCalculate = true;
  }
  if (numOne) {
    operator = op;
    if (op === '*')
      $operator.value = 'x';
    else
      $operator.value = op;
  }
  else {
    console.log('숫자를 먼저 입력하세요.');
  }
};

document.querySelector('#plus').addEventListener('click', onClickOperator('+'));
document.querySelector('#minus').addEventListener('click', onClickOperator('-'));
document.querySelector('#divide').addEventListener('click', onClickOperator('/'));
document.querySelector('#multiply').addEventListener('click', onClickOperator('*'));

const onClickCalculate = () => {
  if (numTwo) {
    switch (operator) {
      case '+':
        result = parseInt(numOne) + parseInt(numTwo);
        break;
      case '-':
        result = parseInt(numOne) - parseInt(numTwo);
        break;
      case '*':
        result = parseInt(numOne) * parseInt(numTwo);
        break;
      case '/':
        result = parseInt(numOne) / parseInt(numTwo);
        break;
      default:
        break;
    }
  }
  numOne = $result.value;
};

document.querySelector('#calculate').addEventListener('click', () => {
  onClickCalculate();
  numTwo = '';
	operator = '';
  isCalculate = false;
});

document.querySelector('#clear').addEventListener('click', () => {
  numOne = '';
  operator = '';
  numTwo = '';
  $operator.value = '';
  $result.value = '0';
  isCalculate = false;
});
