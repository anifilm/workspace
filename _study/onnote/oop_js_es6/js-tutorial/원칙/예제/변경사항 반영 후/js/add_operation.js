CALC.createNameSpace('CALC.ocp.after.AddOperation');

CALC.ocp.after.AddOperation = (function () {
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
