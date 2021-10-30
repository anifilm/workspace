CALC.createNameSpace('CALC.isp.after.AddOperation');

CALC.isp.after.AddOperation = (function () {
  let AbstractOperation = CALC.isp.after.AbstractOperation;

  class AddOperation extends AbstractOperation {
    constructor() {
      super();
    }

    operate(firstNumber, secondNumber) {
      return firstNumber + secondNumber;
    }

    getOperator() {
      return '+';
    }

    toString() {
      return 'AddOperation';
    }
  }

  return AddOperation;
}());
