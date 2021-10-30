CALC.createNameSpace('CALC.lsp.after.DivideOperation');

CALC.lsp.after.DivideOperation = (function () {
  let AbstractOperation = CALC.lsp.after.AbstractOperation;

  class DivideOperation extends AbstractOperation {
    constructor() {
      super();
    }

    operate(firstNumber, secondNumber) {
      return firstNumber / secondNumber;
    }

    isInvalidNumber(firstNumber, secondNumber) {
      if (secondNumber === 0) {
        return true;
      }

      return false;
    }

    toString() {
      return 'DivideOperation';
    }
  }

  return DivideOperation;
}());
