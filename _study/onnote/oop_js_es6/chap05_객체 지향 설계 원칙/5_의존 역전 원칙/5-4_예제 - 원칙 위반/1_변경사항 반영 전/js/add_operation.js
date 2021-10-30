CALC.createNameSpace('CALC.dip.before.AddOperation');

CALC.dip.before.AddOperation = (function () {
  class AddOperation {
    constructor() {

    }

    add(firstNumber, secondNumber) {
      return firstNumber + secondNumber;
    }

    toString() {
      return 'AddOperation';
    }
  }

  return AddOperation;
}());
