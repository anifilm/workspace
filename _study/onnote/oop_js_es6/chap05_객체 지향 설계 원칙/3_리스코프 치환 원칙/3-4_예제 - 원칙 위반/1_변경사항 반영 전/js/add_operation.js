CALC.createNameSpace('CALC.lsp.before.AddOperation');

CALC.lsp.before.AddOperation = (function () {
  let AbstractOperation = CALC.lsp.before.AbstractOperation;

  class AddOperation extends AbstractOperation {
    constructor() {
      super();
    }

    operate(firstNumber, secondNumber) {
      return firstNumber + secondNumber;
    }

    toString() {
      return 'AddOperation';
    }
  }

  return AddOperation;
}());
