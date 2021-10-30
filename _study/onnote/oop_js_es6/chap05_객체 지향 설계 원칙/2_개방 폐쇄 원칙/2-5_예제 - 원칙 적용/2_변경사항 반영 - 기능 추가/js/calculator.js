CALC.createNameSpace('CALC.ocp.after.Calculator');

CALC.ocp.after.Calculator = (function () {
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

    toString() {
      return 'Calculator';
    }
  }

  return Calculator;
}());
