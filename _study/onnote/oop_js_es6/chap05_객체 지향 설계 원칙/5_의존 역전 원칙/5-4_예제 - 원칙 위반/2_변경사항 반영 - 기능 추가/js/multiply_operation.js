CALC.createNameSpace('CALC.dip.before.MultiplyOperation');

CALC.dip.before.MultiplyOperation = (function () {
  class MultiplyOperation {
    constructor() {

    }

    multiply(firstNumber, secondNumber) {
      return firstNumber * secondNumber;
    }

    toString() {
      return 'MultiplyOperation';
    }
  }

  return MultiplyOperation;
}());
