CALC.createNameSpace('CALC.isp.after.MultiplyOperation');

CALC.isp.after.MultiplyOperation = (function () {
  let AbstractOperation = CALC.isp.after.AbstractOperation;

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
