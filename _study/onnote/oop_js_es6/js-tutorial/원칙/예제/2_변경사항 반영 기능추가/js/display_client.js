CALC.createNameSpace('CALC.isp.before.DisplayClient');

CALC.isp.before.DisplayClient = (function () {
  class DisplayClient {
    constructor() {

    }

    request(calculator, operation, firstNumber, secondNumber) {
      // 변경된 인터페이스 메서드명 적용
      calculator.newDisplay(operation, firstNumber, secondNumber);
    }

    toString() {
      return 'DisplayClient';
    }
  }

  return DisplayClient;
}());
