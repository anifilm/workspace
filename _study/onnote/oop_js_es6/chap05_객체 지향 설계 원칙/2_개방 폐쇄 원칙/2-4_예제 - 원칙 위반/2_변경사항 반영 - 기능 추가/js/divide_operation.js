CALC.createNameSpace('CALC.ocp.before.DivideOperation');

CALC.ocp.before.DivideOperation = (function () {
  class DivideOperation {
    constructor() {

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
