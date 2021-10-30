CALC.createNameSpace('CALC.lsp.after.SubstractOperation');

CALC.lsp.after.SubstractOperation = (function () {
  let AbstractOperation = CALC.lsp.after.AbstractOperation;

  class SubstractOperation extends AbstractOperation {
    constructor() {
      super();
    }

    operate(firstNumber, secondNumber) {
      return firstNumber - secondNumber;
    }

    toString() {
      return 'SubstractOperation';
    }
  }

  return SubstractOperation;
}());
