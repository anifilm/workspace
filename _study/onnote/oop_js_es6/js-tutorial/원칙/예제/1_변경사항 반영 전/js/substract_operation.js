CALC.createNameSpace('CALC.ocp.before.SubstractOperation');

CALC.ocp.before.SubstractOperation = (function () {
  class SubstractOperation {
    constructor() {

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
