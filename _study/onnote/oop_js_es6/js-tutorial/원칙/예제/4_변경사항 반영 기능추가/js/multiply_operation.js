CALC.createNameSpace('CALC.lsp.after.MultiplyOperation');

CALC.lsp.after.MultiplyOperation = (function () {
  let AbstractOperation = CALC.lsp.after.AbstractOperation;

  class MultiplyOperation extends AbstractOperation {
    constructor() {
      super();
    }

    operate(firstNumber, secondNumber) {
      return firstNumber * secondNumber;
    }

    toString() {
      return 'MultiplyOperation';
    }
  }

  return MultiplyOperation;
}());
