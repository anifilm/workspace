CALC.createNameSpace('CALC.lsp.after.Calculator');

CALC.lsp.after.Calculator = (function () {
  class Calculator {
    constructor() {

    }

    calculate(operation, firstNumber, secondNumber) {
      if (operation.isInvalidNumber(firstNumber, secondNumber)) {
        return -999;
      }

      let answer = operation.operate(firstNumber, secondNumber);
      return answer;
    }

    toString() {
      return 'Calculator';
    }
  }

  return Calculator;
}());
