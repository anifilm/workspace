CALC.createNameSpace('CALC.ocp.before.AddOperation');

CALC.ocp.before.AddOperation = (function () {
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
