CALC.createNameSpace('CALC.isp.before.DivideOperation');

CALC.isp.before.DivideOperation = (function () {
  let AbstractOperation = CALC.isp.before.AbstractOperation;

  class DivideOperation extends AbstractOperation {
    constructor() {
      super();
    }

    operate(firstNumber, secondNumber) {
      return firstNumber / secondNumber;
    }

    getOperator() {
      return '/';
    }

    toString() {
      return 'DivideOperation';
    }
  }

  return DivideOperation;
}());
