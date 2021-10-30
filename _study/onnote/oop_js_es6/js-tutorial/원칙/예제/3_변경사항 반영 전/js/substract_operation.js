CALC.createNameSpace('CALC.ocp.after.SubstractOperation');

CALC.ocp.after.SubstractOperation = (function () {
  let AbstractOperation = CALC.ocp.after.AbstractOperation;

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
