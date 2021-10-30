CALC.createNameSpace('CALC.isp.before.Calculator');

CALC.isp.before.Calculator = (function () {
  class Calculator {
    constructor() {
      this.operation = null;
    }

    calculate(firstNumber, secondNumber) {
      let answer = this.operation.operate(firstNumber, secondNumber);
      return answer;
    }

    setOperation(operation) {
      this.operation = operation;
    }

    // 인터페이스 메서드명 변경
    newDisplay(operation, firstNumber, secondNumber) {
      let answer = operation.operate(firstNumber, secondNumber);
      let operator = operation.getOperator();

      console.log(`${firstNumber} ${operator} ${secondNumber} = ${answer}`);
    }

    toString() {
      return 'Calculator';
    }
  }

  return Calculator;
}());
