CALC.createNameSpace('CALC.dip.after.DivideOperation');

CALC.dip.after.DivideOperation = (function () {
  let AbstractOperation = CALC.dip.after.AbstractOperation;

  class DivideOperation extends AbstractOperation {
    constructor() {
      super();
    }

    operate(firstNumber, secondNumber) {
      return firstNumber / secondNumber;
    }

    toString() {
      return 'DivideOperation';
    }
  }

  return DivideOperation;
}());
