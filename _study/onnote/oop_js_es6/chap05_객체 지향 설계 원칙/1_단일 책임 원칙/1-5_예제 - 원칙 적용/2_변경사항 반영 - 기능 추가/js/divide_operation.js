CALC.createNameSpace('CALC.sip.after.DivideOperation');

CALC.sip.after.DivideOperation = (function () {
  class DivideOperation {
    constructor() {

    }

    divide(firstNumber, secondNumber) {
      return firstNumber / secondNumber;
    }

    toString() {
      return 'DivideOperation';
    }
  }

  return DivideOperation;
}());
