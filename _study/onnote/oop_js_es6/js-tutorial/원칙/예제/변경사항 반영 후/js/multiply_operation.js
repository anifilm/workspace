CALC.createNameSpace('CALC.ocp.after.MultiplyOperation');

CALC.ocp.after.MultiplyOperation = (function () {
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
