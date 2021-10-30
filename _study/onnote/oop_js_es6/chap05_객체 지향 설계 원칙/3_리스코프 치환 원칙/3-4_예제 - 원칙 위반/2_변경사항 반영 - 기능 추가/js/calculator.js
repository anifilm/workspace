CALC.createNameSpace('CALC.lsp.before.Calculator');

CALC.lsp.before.Calculator = (function () {
  class Calculator {
    constructor() {

    }

    calculate(operation, firstNumber, secondNumber) {
      // 나누기 연산 기능은 0으로 나누면 안되는 조건에 따라 특별 처리
      if (operation instanceof CALC.lsp.before.DivideOperation) {
        if (secondNumber === 0) {
          return -999;
        }
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
