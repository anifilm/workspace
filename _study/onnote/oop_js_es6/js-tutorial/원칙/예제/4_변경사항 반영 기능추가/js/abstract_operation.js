CALC.createNameSpace('CALC.lsp.after.AbstractOperation');

CALC.lsp.after.AbstractOperation = (function () {
  class AbstractOperation {
    constructor() {

    }

    operate(firstNumber, secondNumber) {
      throw new Error('You have to implement the method doSomething!');
    }

    isInvalidNumber(firstNumber, secondNumber) {
      return false;
    }

    toString() {
      return 'AbstractOperation';
    }
  }

  return AbstractOperation;
}());
