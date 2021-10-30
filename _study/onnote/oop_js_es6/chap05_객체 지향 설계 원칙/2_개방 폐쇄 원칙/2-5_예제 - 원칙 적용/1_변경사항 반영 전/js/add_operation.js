CALC.createNameSpace('CALC.ocp.after.AddOperation');

CALC.ocp.after.AddOperation = (function () {
  let AbstractOperation = CALC.ocp.after.AbstractOperation;

  class AddOperation extends AbstractOperation {
    constructor() {
      super();
    }

    operate(firstNumber, secondNumber) {
      return firstNumber + secondNumber;
    }

    toString() {
      return 'AddOperation';
    }
  }

  return AddOperation;
}());
