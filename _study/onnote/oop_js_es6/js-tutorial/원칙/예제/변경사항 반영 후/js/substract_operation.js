CALC.createNameSpace('CALC.ocp.after.SubstractOperation');

CALC.ocp.after.SubstractOperation = (function () {
  class SubstractOperation {
    constructor() {

    }

    substract(firstNumber, secondNumber) {
      return firstNumber - secondNumber;
    }

    toString() {
      return 'SubstractOperation';
    }
  }

  return SubstractOperation;
}());
