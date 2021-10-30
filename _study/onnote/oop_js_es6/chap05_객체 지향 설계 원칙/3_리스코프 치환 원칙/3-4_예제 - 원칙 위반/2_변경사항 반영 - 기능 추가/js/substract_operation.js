CALC.createNameSpace('CALC.lsp.before.SubstractOperation');

CALC.lsp.before.SubstractOperation = (function () {
  let AbstractOperation = CALC.lsp.before.AbstractOperation;

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
