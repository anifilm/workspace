CALC.createNameSpace('CALC.isp.before.DisplayClient');

CALC.isp.before.DisplayClient = (function () {
  class DisplayClient {
    constructor() {

    }

    request(calculator, operation, firstNumber, secondNumber) {
      calculator.display(operation, firstNumber, secondNumber);
    }

    toString() {
      return 'DisplayClient';
    }
  }

  return DisplayClient;
}());
