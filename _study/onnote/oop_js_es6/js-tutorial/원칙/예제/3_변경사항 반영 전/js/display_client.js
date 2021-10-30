CALC.createNameSpace('CALC.isp.after.DisplayClient');

CALC.isp.after.DisplayClient = (function () {
  class DisplayClient {
    constructor() {

    }

    request(displayable, operation, firstNumber, secondNumber) {
      displayable.display(operation, firstNumber, secondNumber);
    }

    toString() {
      return 'DisplayClient';
    }
  }

  return DisplayClient;
}());
