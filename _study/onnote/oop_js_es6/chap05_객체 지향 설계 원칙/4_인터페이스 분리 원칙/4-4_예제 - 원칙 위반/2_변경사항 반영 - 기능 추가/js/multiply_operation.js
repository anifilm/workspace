CALC.createNameSpace('CALC.isp.before.MultiplyOperation');

CALC.isp.before.MultiplyOperation = (function () {
  let AbstractOperation = CALC.isp.before.AbstractOperation;

  class MultiplyOperation extends AbstractOperation {
    constructor() {
      super();
    }

    operate(firstNumber, secondNumber) {
      return firstNumber * secondNumber;
    }

    getOperator() {
      return '*';
    }

    toString() {
      return 'MultiplyOperation';
    }
  }

  return MultiplyOperation;
}());
