<script>
  let numOne = '';
  let numTwo = '';
  let operator = '';
  let isCalculate = false;
  let minus = false;

  let result = '0';

  const onClickNumber = (event) => {
    // 숫자가 '012'가 되지 않도록 제거
    if (result === '0') result = '';
    if (!operator) {
      // 이전 계산 결과가 있는 상태에서 숫자 입력시 숫자 초기화
      if (isCalculate) {
        numOne = '';
        result = '';
        isCalculate = false;
      }
      // 마이너스 숫자를 입력할 수 있도록 수정
      if (minus) {
        numOne -= event.target.textContent;
        result -= event.target.textContent;
        minus = false;
      } else {
        numOne += event.target.textContent;
        result += event.target.textContent;
      }
      return;
    }
    // 이 아래로는 operator가 존재하는 경우에만 실행됨
    if (!numTwo) result = '';
    // 연산자 클릭을 통한 연속 계산시
    if (isCalculate) {
      numTwo = '';
      result = '';
      isCalculate = false;
    }
    numTwo += event.target.textContent;
    result += event.target.textContent;
  };
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
  };
  const calculate = () => {
    if (!numOne) {
      alert('숫자를 먼저 입력하세요.');
      return;
    }
    if (numTwo) {
      switch (operator) {
        case '+':
          result = parseInt(numOne) + parseInt(numTwo);
          break;
        case '-':
          result = parseInt(numOne) - parseInt(numTwo);
          break;
        case 'x':
          result = parseInt(numOne) * parseInt(numTwo);
          break;
        case '÷':
          result = parseInt(numOne) / parseInt(numTwo);
          break;
        default:
          break;
      }
    }
    console.log(`${numOne} ${operator} ${numTwo} = ${result}`);
    numOne = result;
  };
	const onClickCalculate = () => {
		calculate();
    // 다음 계산을 하기 위한 상태 초기화
		numTwo = '';
		operator = '';
  	isCalculate = true;
    minus = false;
	}
  const onClickClear = () => {
    numOne = '';
    numTwo = '';
    operator = '';
    isCalculate = false;
    minus = false;
    result = '0';
  };
</script>

<main>
  <div class="container">
    <input id="operator" value={operator} readonly />
    <input id="result" type="number" value={result} readonly />
    <div class="row">
      <button id="num-7" on:click={onClickNumber}>7</button>
      <button id="num-8" on:click={onClickNumber}>8</button>
      <button id="num-9" on:click={onClickNumber}>9</button>
      <button id="plus" on:click={onClickOperator('+')}>+</button>
    </div>
    <div class="row">
      <button id="num-4" on:click={onClickNumber}>4</button>
      <button id="num-5" on:click={onClickNumber}>5</button>
      <button id="num-6" on:click={onClickNumber}>6</button>
      <button id="minus" on:click={onClickOperator('-')}>-</button>
    </div>
    <div class="row">
      <button id="num-1" on:click={onClickNumber}>1</button>
      <button id="num-2" on:click={onClickNumber}>2</button>
      <button id="num-3" on:click={onClickNumber}>3</button>
      <button id="divide" on:click={onClickOperator('÷')}>÷</button>
    </div>
    <div class="row">
      <button id="clear" on:click={onClickClear}>C</button>
      <button id="num-0" on:click={onClickNumber}>0</button>
      <button id="calculate" on:click={onClickCalculate}>=</button>
      <button id="multiply" on:click={onClickOperator('x')}>×</button>
    </div>
  </div>
</main>

<style>
  * {
    box-sizing: border-box;
  }
  .container {
    width: 260px;
    height: 310px;
    margin: 50px auto;
    /*border: 1px solid #ff0000;*/
  }
  #result {
    width: 180px;
    height: 50px;
    margin: 5px;
    text-align: right;
  }
  #operator {
    width: 50px;
    height: 50px;
    margin: 5px;
    text-align: center;
  }
  button {
    width: 50px;
    height: 50px;
    margin: 5px;
  }
</style>
