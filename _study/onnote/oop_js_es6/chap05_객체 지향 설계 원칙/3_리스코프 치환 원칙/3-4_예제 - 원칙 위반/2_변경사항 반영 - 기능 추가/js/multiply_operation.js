CALC.createNameSpace('CALC.lsp.before.MultiplyOperation');

CALC.lsp.before.MultiplyOperation = (function () {
  let AbstractOperation = CALC.lsp.before.AbstractOperation;

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
