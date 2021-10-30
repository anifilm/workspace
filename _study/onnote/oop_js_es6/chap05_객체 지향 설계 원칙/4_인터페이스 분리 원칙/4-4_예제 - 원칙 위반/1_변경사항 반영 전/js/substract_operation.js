CALC.createNameSpace('CALC.isp.before.SubstractOperation');

CALC.isp.before.SubstractOperation = (function () {
  let AbstractOperation = CALC.isp.before.AbstractOperation;

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
