CALC.createNameSpace('CALC.sip.after.MultiplyOperation');

CALC.sip.after.MultiplyOperation = (function () {
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
