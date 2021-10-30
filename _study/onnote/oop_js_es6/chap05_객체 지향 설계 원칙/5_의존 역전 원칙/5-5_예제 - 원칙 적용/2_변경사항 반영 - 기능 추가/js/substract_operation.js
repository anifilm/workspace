CALC.createNameSpace('CALC.dip.after.SubstractOperation');

CALC.dip.after.SubstractOperation = (function () {
  let AbstractOperation = CALC.dip.after.AbstractOperation;

  class SubstractOperation extends AbstractOperation {
    constructor() {
      super();
    }

    operate(firstNumber, secondNumber) {
      return firstNumber - secondNumber;
    }

    toString() {
      return 'SubstractOperation';
    }
  }

  return SubstractOperation;
}());
