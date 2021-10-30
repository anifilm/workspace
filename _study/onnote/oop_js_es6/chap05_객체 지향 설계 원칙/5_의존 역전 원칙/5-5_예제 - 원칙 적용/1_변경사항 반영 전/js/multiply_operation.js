CALC.createNameSpace('CALC.dip.after.MultiplyOperation');

CALC.dip.after.MultiplyOperation = (function () {
  let AbstractOperation = CALC.dip.after.AbstractOperation;

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
