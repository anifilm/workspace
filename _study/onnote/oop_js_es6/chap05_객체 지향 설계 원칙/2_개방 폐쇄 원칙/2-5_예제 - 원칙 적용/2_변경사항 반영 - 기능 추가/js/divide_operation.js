CALC.createNameSpace('CALC.ocp.after.DivideOperation');

CALC.ocp.after.DivideOperation = (function () {
  let AbstractOperation = CALC.ocp.after.AbstractOperation;

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
