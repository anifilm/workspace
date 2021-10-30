CALC.createNameSpace('CALC.dip.before.DivideOperation');

CALC.dip.before.DivideOperation = (function () {
  class DivideOperation {
    constructor() {

    }

    divide(firstNumber, secondNumber) {
      return firstNumber * secondNumber;
    }

    toString() {
      return 'DivideOperation';
    }
  }

  return DivideOperation;
}());
