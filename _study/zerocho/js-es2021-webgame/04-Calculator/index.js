let numOne = '';
let operator = '';
let numTwo = '';
let isCalculate = false;
let minus = false;

const $operator = document.querySelector('#operator');
const $result = document.querySelector('#result');

$result.value = '0';

const onClickNumber = (event) => {
  // 숫자가 '012'가 되지 않도록 제거
  if ($result.value === '0') $result.value = '';
  if (!operator) {
    // 이전 계산 결과가 있는 상태에서 숫자 입력시 숫자 초기화
    if (isCalculate) {
      numOne = '';
      $result.value = '';
      isCalculate = false;
    }
    // 마이너스 숫자를 입력할 수 있도록 수정
    if (minus) {
      numOne -= event.target.textContent;
      $result.value -= event.target.textContent;
      minus = false;
    } else {
      numOne += event.target.textContent;
      $result.value += event.target.textContent;
    }
    return;
  }
  // 이 아래로는 operator가 존재하는 경우에만 실행됨
  if (!numTwo) $result.value = '';
  // 연산자 클릭을 통한 연속 계산시
  if (isCalculate) {
    numTwo = '';
    $result.value = '';
    isCalculate = false;
  }
  numTwo += event.target.textContent;
  $result.value += event.target.textContent;
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
  // 마이너스 숫자를 입력할 수 있도록 수정
  if (!numOne) {
    if (op === '+') {
      minus = false;
    } else if (op === '-') {
      minus = true;
    } else {
      alert('숫자를 먼저 입력하세요.');
    }
    return;
  }
  // 연산자 클릭을 통한 연속 계산시
  if (numTwo) {
    calculate();
    numTwo = '';
    isCalculate = true;
  }
  operator = op;
  $operator.value = op;
};

document.querySelector('#plus').addEventListener('click', onClickOperator('+'));
document.querySelector('#minus').addEventListener('click', onClickOperator('-'));
document.querySelector('#multiply').addEventListener('click', onClickOperator('x'));
document.querySelector('#divide').addEventListener('click', onClickOperator('÷'));

const calculate = () => {
  if (!numOne) {
    alert('숫자를 먼저 입력하세요.');
    return;
  }
  console.log(numOne, operator, numTwo);
  if (numTwo) {
    switch (operator) {
      case '+':
        $result.value = parseInt(numOne) + parseInt(numTwo);
        break;
      case '-':
        $result.value = parseInt(numOne) - parseInt(numTwo);
        break;
      case 'x':
        $result.value = parseInt(numOne) * parseInt(numTwo);
        break;
      case '÷':
        $result.value = parseInt(numOne) / parseInt(numTwo);
        break;
      default:
        break;
    }
  }
  numOne = $result.value;
};

document.querySelector('#calculate').addEventListener('click', () => {
  calculate();
  // 다음 계산을 하기 위한 상태 초기화
  numTwo = '';
	operator = '';
  isCalculate = true;
  minus = false;
  $operator.value = '';
});

document.querySelector('#clear').addEventListener('click', () => {
  numOne = '';
  operator = '';
  numTwo = '';
  isCalculate = false;
  minus = false;
  $operator.value = '';
  $result.value = '0';
});
