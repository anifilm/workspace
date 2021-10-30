CALC.createNameSpace('CALC.ocp.after.MultiplyOperation');

CALC.ocp.after.MultiplyOperation = (function () {
  let AbstractOperation = CALC.ocp.after.AbstractOperation;

  class MultiplyOperation extends AbstractOperation {
    constructor() {
      super();
    }

    operate(firstNumber, secondNumber) {
      return firstNumber * secondNumber;
    }

    toString() {
      return 'MultiplyOperation';
    }
  }

  return MultiplyOperation;
}());
