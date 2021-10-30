CALC.createNameSpace('CALC.isp.after.DivideOperation');

CALC.isp.after.DivideOperation = (function () {
  let AbstractOperation = CALC.isp.after.AbstractOperation;

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
