CALC.createNameSpace('CALC.dip.after.AddOperation');

CALC.dip.after.AddOperation = (function () {
  let AbstractOperation = CALC.dip.after.AbstractOperation;

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
