CALC.createNameSpace('CALC.isp.before.AddOperation');

CALC.isp.before.AddOperation = (function () {
  let AbstractOperation = CALC.isp.before.AbstractOperation;

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
