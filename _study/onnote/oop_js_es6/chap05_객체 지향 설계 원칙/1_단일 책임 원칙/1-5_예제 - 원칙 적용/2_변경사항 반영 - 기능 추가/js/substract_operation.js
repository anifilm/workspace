CALC.createNameSpace('CALC.sip.after.SubstractOperation');

CALC.sip.after.SubstractOperation = (function () {
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
