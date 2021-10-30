CALC.createNameSpace('CALC.sip.after.AddOperation');

CALC.sip.after.AddOperation = (function () {
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
