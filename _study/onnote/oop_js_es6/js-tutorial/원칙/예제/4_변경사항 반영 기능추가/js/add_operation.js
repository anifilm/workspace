CALC.createNameSpace('CALC.lsp.after.AddOperation');

CALC.lsp.after.AddOperation = (function () {
  let AbstractOperation = CALC.lsp.after.AbstractOperation;

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
