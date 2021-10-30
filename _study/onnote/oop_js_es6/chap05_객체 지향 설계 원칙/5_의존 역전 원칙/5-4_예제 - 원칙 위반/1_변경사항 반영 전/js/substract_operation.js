CALC.createNameSpace('CALC.dip.before.SubstractOperation');

CALC.dip.before.SubstractOperation = (function () {
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
