CALC.createNameSpace('CALC.dip.before.AddOperation');

CALC.dip.before.AddOperation = (function () {
  class AddOperation {
    constructor() {

    }

    operate(firstNumber, secondNumber) {
      return firstNumber + secondNumber;
    }

    toString() {
      return 'AddOperation';
    }
  }

  return AddOperation;
}());
