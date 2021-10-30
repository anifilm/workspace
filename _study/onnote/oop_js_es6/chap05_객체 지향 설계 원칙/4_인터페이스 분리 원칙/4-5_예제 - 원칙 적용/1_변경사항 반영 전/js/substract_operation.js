CALC.createNameSpace('CALC.isp.after.SubstractOperation');

CALC.isp.after.SubstractOperation = (function () {
  let AbstractOperation = CALC.isp.after.AbstractOperation;

  class SubstractOperation extends AbstractOperation {
    constructor() {
      super();
    }

    operate(firstNumber, secondNumber) {
      return firstNumber - secondNumber;
    }

    getOperator() {
      return '-';
    }

    toString() {
      return 'SubstractOperation';
    }
  }

  return SubstractOperation;
}());
