CALC.createNameSpace('CALC.lsp.before.Calculator');

CALC.lsp.before.Calculator = (function () {
  class Calculator {
    constructor() {

    }

    calculate(operation, firstNumber, secondNumber) {
      let answer = operation.operate(firstNumber, secondNumber);
      return answer;
    }

    toString() {
      return 'Calculator';
    }
  }

  return Calculator;
}());
