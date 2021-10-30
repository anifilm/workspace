CALC.createNameSpace('CALC.ocp.before.SubstractOperation');

CALC.ocp.before.SubstractOperation = (function () {
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
